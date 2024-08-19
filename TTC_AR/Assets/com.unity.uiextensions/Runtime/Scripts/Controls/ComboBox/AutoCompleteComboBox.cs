///Credit perchik
///Sourced from - http://forum.unity3d.com/threads/receive-onclick-event-and-pass-it-on-to-lower-ui-elements.293642/

using System.Collections.Generic;
using System.Linq;
using TMPro;

namespace UnityEngine.UI.Extensions
{
    public enum AutoCompleteSearchType
    {
        ArraySort,
        Linq
    }

    [RequireComponent(typeof(RectTransform))]
    [AddComponentMenu("UI/Extensions/AutoComplete ComboBox")]
    public class AutoCompleteComboBox : MonoBehaviour
    {
        public Color disabledTextColor;
        private List<string> optionsGrapperA_by_code = GlobalVariable_Search_Devices.devicesGrapperA_code;
        private List<string> optionsGrapperA_by_function = GlobalVariable_Search_Devices.devicesGrapperA_function;

        public DropDownListItem SelectedItem { get; private set; } //outside world gets to get this, not set it

        /// <summary>
        /// Contains the included items. To add and remove items to/from this list, use the <see cref="AddItem(string)"/>,
        /// <see cref="RemoveItem(string)"/> and <see cref="SetAvailableOptions(List{string})"/> methods as these also execute
        /// the required methods to update to the current collection.
        /// </summary>
        /// 
        [SerializeField]
        private List<string> AvailableOptions;

        //private bool isInitialized = false;
        private bool _isPanelActive = true;
        private bool _hasDrawnOnce = false;

        private TMP_InputField _mainInput;
        private RectTransform _inputRT;

        public GameObject _arrow_Button_Down;
        public GameObject _arrow_Button_Up;

        private RectTransform _rectTransform;

        private RectTransform _overlayRT;
        private RectTransform _scrollPanelRT;
        private RectTransform _scrollBarRT;
        private RectTransform _slidingAreaRT;
        private RectTransform _scrollHandleRT;
        private RectTransform _itemsPanelRT;
        private Canvas _canvas;
        private RectTransform _canvasRT;

        private ScrollRect _scrollRect;

        private List<string> _panelItems; //items that will get shown in the drop-down
        private List<string> _prunedPanelItems; //items that used to show in the drop-down

        private Dictionary<string, GameObject> panelObjects;

        private GameObject itemTemplate;

        public string Text { get; private set; }

        [SerializeField]
        private float _scrollBarWidth = 20.0f;
        public float ScrollBarWidth
        {
            get { return _scrollBarWidth; }
            set
            {
                _scrollBarWidth = value;
                RedrawPanel();
            }
        }

        //    private int scrollOffset; //offset of the selected item
        //    private int _selectedIndex = 0;

        [SerializeField]
        private int _itemsToDisplay;
        public int ItemsToDisplay
        {
            get { return _itemsToDisplay; }
            set
            {
                _itemsToDisplay = value;
                RedrawPanel();
            }
        }

        public bool SelectFirstItemOnStart = false;

        [SerializeField]
        [Tooltip("Change input text color based on matching items")]
        private bool _ChangeInputTextColorBasedOnMatchingItems = false;
        public bool InputColorMatching
        {
            get { return _ChangeInputTextColorBasedOnMatchingItems; }
            set
            {
                _ChangeInputTextColorBasedOnMatchingItems = value;
                if (_ChangeInputTextColorBasedOnMatchingItems)
                {
                    SetInputTextColor();
                }
            }
        }

        public float DropdownOffset = 10f;

        //TODO design as foldout for Inspector
        public Color ValidSelectionTextColor = Color.green;
        public Color MatchingItemsRemainingTextColor = Color.black;
        public Color NoItemsRemainingTextColor = Color.red;

        public AutoCompleteSearchType autocompleteSearchType = AutoCompleteSearchType.Linq;

        [SerializeField]
        private bool _displayPanelAbove = false;

        private bool _selectionIsValid = false;

        [System.Serializable]
        public class SelectionChangedEvent : UnityEngine.Events.UnityEvent<string, bool>
        {
        }

        [System.Serializable]
        public class SelectionTextChangedEvent : UnityEngine.Events.UnityEvent<string>
        {
        }

        [System.Serializable]
        public class SelectionValidityChangedEvent : UnityEngine.Events.UnityEvent<bool>
        {
        }

        // fires when input text is changed;
        public SelectionTextChangedEvent OnSelectionTextChanged;
        // fires when an Item gets selected / deselected (including when items are added/removed once this is possible)
        public SelectionValidityChangedEvent OnSelectionValidityChanged;
        // fires in both cases
        public SelectionChangedEvent OnSelectionChanged;

        public void Awake()
        {
        }
        public void Start()
        {
            if (GlobalVariable_Search_Devices.devices_Model_For_Filter != null && GlobalVariable_Search_Devices.devices_Model_For_Filter.Count > 0)
            {
                AvailableOptions = GlobalVariable_Search_Devices.devices_Model_For_Filter;
            }

            Initialize();

            if (SelectFirstItemOnStart && AvailableOptions.Count > 0)
            {
                ToggleDropdownPanel(false);
                OnItemClicked(AvailableOptions[0]);
            }
            RedrawPanel();
        }

        private bool Initialize()
        {

            bool success = true;
            try
            {
                _rectTransform = GetComponent<RectTransform>();
                _inputRT = _rectTransform.Find("InputField").GetComponent<RectTransform>();
                _mainInput = _inputRT.GetComponent<TMP_InputField>();

                //_arrow_Button = _rectTransform.FindChild ("ArrowBtn").GetComponent<Button> ();

                _overlayRT = _rectTransform.Find("Overlay").GetComponent<RectTransform>();
                _overlayRT.gameObject.SetActive(false);


                _scrollPanelRT = _overlayRT.Find("ScrollPanel").GetComponent<RectTransform>();
                _scrollBarRT = _scrollPanelRT.Find("Scrollbar").GetComponent<RectTransform>();
                _slidingAreaRT = _scrollBarRT.Find("SlidingArea").GetComponent<RectTransform>();
                _scrollHandleRT = _slidingAreaRT.Find("Handle").GetComponent<RectTransform>();
                _itemsPanelRT = _scrollPanelRT.Find("Items").GetComponent<RectTransform>();
                //itemPanelLayout = itemsPanelRT.gameObject.GetComponent<LayoutGroup>();

                _canvas = GetComponentInParent<Canvas>();
                _canvasRT = _canvas.GetComponent<RectTransform>();

                _scrollRect = _scrollPanelRT.GetComponent<ScrollRect>();
                _scrollRect.scrollSensitivity = _rectTransform.sizeDelta.y / 2;
                _scrollRect.movementType = ScrollRect.MovementType.Clamped;
                _scrollRect.content = _itemsPanelRT;

                itemTemplate = _rectTransform.Find("ItemTemplate").gameObject;
                itemTemplate.SetActive(false);
            }
            catch (System.NullReferenceException ex)
            {
                Debug.LogException(ex);
                Debug.LogError("Something is setup incorrectly with the dropdownlist component causing a Null Reference Exception");
                success = false;
            }
            panelObjects = new Dictionary<string, GameObject>();

            _prunedPanelItems = new List<string>();
            _panelItems = new List<string>();

            RebuildPanel();
            return success;
        }


        /// <summary>
        /// Adds the item to <see cref="this.AvailableOptions"/> if it is not a duplicate and rebuilds the panel.
        /// </summary>
        /// <param name="item">Item to add.</param>
        public void AddItem(string item)
        {
            if (!this.AvailableOptions.Contains(item))
            {
                this.AvailableOptions.Add(item);
                this.RebuildPanel();
            }
            else
            {
                Debug.LogWarning($"{nameof(AutoCompleteComboBox)}.{nameof(AddItem)}: items may only exists once. '{item}' can not be added.");
            }
        }

        /// <summary>
        /// Removes the item from <see cref="this.AvailableOptions"/> and rebuilds the panel.
        /// </summary>
        /// <param name="item">Item to remove.</param>
        public void RemoveItem(string item)
        {
            if (this.AvailableOptions.Contains(item))
            {
                this.AvailableOptions.Remove(item);
                this.RebuildPanel();
            }
        }

        /// <summary>
        /// Sets the given items as new content for the comboBox. Previous entries will be cleared.
        /// </summary>
        /// <param name="newOptions">New entries.</param>
        public void SetAvailableOptions(List<string> newOptions)
        {
            var uniqueOptions = newOptions.Distinct().ToList();
            if (newOptions.Count != uniqueOptions.Count)
            {
                Debug.LogWarning($"{nameof(AutoCompleteComboBox)}.{nameof(SetAvailableOptions)}: items may only exists once. {newOptions.Count - uniqueOptions.Count} duplicates.");
            }

            this.AvailableOptions.Clear();
            this.AvailableOptions = uniqueOptions;
            this.RebuildPanel();
        }

        /// <summary>
        /// Sets the given items as new content for the comboBox. Previous entries will be cleared.
        /// </summary>
        /// <param name="newOptions">New entries.</param>
        public void SetAvailableOptions(string[] newOptions)
        {
            var uniqueOptions = newOptions.Distinct().ToList();
            if (newOptions.Length != uniqueOptions.Count)
            {
                Debug.LogWarning($"{nameof(AutoCompleteComboBox)}.{nameof(SetAvailableOptions)}: items may only exists once. {newOptions.Length - uniqueOptions.Count} duplicates.");
            }

            this.AvailableOptions.Clear();
            for (int i = 0; i < newOptions.Length; i++)
            {
                this.AvailableOptions.Add(newOptions[i]);
            }

            this.RebuildPanel();
        }

        public void ResetItems()
        {
            AvailableOptions.Clear();
            RebuildPanel();
        }

        /// <summary>
        /// Rebuilds the contents of the panel in response to items being added.
        /// </summary>
        private void RebuildPanel()
        {
            if (_isPanelActive) ToggleDropdownPanel();

            //panel starts with all options
            _panelItems.Clear();
            _prunedPanelItems.Clear();
            panelObjects.Clear();

            //clear Autocomplete children in scene
            foreach (Transform child in _itemsPanelRT.transform)
            {
                Destroy(child.gameObject);
            }

            foreach (string option in AvailableOptions)
            {
                _panelItems.Add(option);
            }

            List<GameObject> itemObjs = new List<GameObject>(panelObjects.Values);

            int indx = 0;
            while (itemObjs.Count < AvailableOptions.Count)
            {
                GameObject newItem = Instantiate(itemTemplate) as GameObject;
                newItem.name = "Item " + indx;
                newItem.transform.SetParent(_itemsPanelRT, false);
                itemObjs.Add(newItem);
                indx++;
            }

            for (int i = 0; i < itemObjs.Count; i++)
            {
                itemObjs[i].SetActive(i <= AvailableOptions.Count);
                if (i < AvailableOptions.Count)
                {
                    itemObjs[i].name = "Item " + i + " " + _panelItems[i];
                    itemObjs[i].transform.Find("Text").GetComponent<TMP_Text>().text = AvailableOptions[i]; //set the text value

                    Button itemBtn = itemObjs[i].GetComponent<Button>();
                    itemBtn.onClick.RemoveAllListeners();
                    string textOfItem = _panelItems[i]; //has to be copied for anonymous function or it gets garbage collected away
                    itemBtn.onClick.AddListener(() =>
                    {
                        OnItemClicked(textOfItem);
                    });
                    panelObjects[_panelItems[i]] = itemObjs[i];
                }
            }
            SetInputTextColor();
        }

        /// <summary>
        /// what happens when an item in the list is selected
        /// </summary>
        /// <param name="item"></param>
        private void OnItemClicked(string item)
        {
            //Debug.Log("item " + item + " clicked");
            Text = item;
            _mainInput.text = Text;
            ToggleDropdownPanel(true);
        }

        //private void UpdateSelected()
        //{
        //    SelectedItem = (_selectedIndex > -1 && _selectedIndex < Items.Count) ? Items[_selectedIndex] : null;
        //    if (SelectedItem == null) return;

        //    bool hasImage = SelectedItem.Image != null;
        //    if (hasImage)
        //    {
        //        mainButton.img.sprite = SelectedItem.Image;
        //        mainButton.img.color = Color.white;

        //        //if (Interactable) mainButton.img.color = Color.white;
        //        //else mainButton.img.color = new Color(1, 1, 1, .5f);
        //    }
        //    else
        //    {
        //        mainButton.img.sprite = null;
        //    }

        //    mainButton.txt.text = SelectedItem.Caption;

        //    //update selected index color
        //    for (int i = 0; i < itemsPanelRT.childCount; i++)
        //    {
        //        panelItems[i].btnImg.color = (_selectedIndex == i) ? mainButton.btn.colors.highlightedColor : new Color(0, 0, 0, 0);
        //    }
        //}


        private void RedrawPanel()
        {
            float scrollbarWidth = _panelItems.Count > ItemsToDisplay ? _scrollBarWidth : 0f;//hide the scrollbar if there's not enough items
            //! _panelItems.Count = AvailableOptions.Count vào ban đầu, số lượng sẽ thay đổi khi textField đổi
            //! ItemsToDisplay : Số lượng hiện mỗi lần
            _scrollBarRT.gameObject.SetActive(_panelItems.Count > ItemsToDisplay);

            if (!_hasDrawnOnce || _rectTransform.sizeDelta != _inputRT.sizeDelta)
            {
                _hasDrawnOnce = true;
                _inputRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _rectTransform.sizeDelta.x);
                _inputRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, _rectTransform.sizeDelta.y);

                _scrollPanelRT.SetParent(transform, true);//break the scroll panel from the overlay
                _scrollPanelRT.anchoredPosition = _displayPanelAbove ?
                    new Vector2(0, DropdownOffset + _rectTransform.sizeDelta.y * _panelItems.Count - 1) :
                    new Vector2(0, -_rectTransform.sizeDelta.y);

                //make the overlay fill the screen
                _overlayRT.SetParent(_canvas.transform, false); //attach it to top level object
                _overlayRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _canvasRT.sizeDelta.x);
                _overlayRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, _canvasRT.sizeDelta.y);

                _overlayRT.SetParent(transform, true);//reattach to this object
                _scrollPanelRT.SetParent(_overlayRT, true); //reattach the scrollpanel to the overlay
            }

            if (_panelItems.Count < 1) return;
            //? Chiều cao của dropdown = chiều  cao của searchBar (Combobox) * số lượng hiển thị (lấy nhỏ nhất giữa số lượng hiển thị và số lượng item) + dropdownOffset
            float dropdownHeight = _rectTransform.sizeDelta.y * Mathf.Min(_itemsToDisplay, _panelItems.Count) + DropdownOffset;

            _scrollPanelRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, dropdownHeight);
            _scrollPanelRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _rectTransform.sizeDelta.x);

            _itemsPanelRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _scrollPanelRT.sizeDelta.x - scrollbarWidth);
            _itemsPanelRT.anchoredPosition = new Vector2(5, 0); // 5 is padding from anchor

            _scrollBarRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, scrollbarWidth);
            _scrollBarRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, dropdownHeight);

            if (scrollbarWidth == 0) _scrollHandleRT.gameObject.SetActive(false); else _scrollHandleRT.gameObject.SetActive(true);

            _slidingAreaRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, scrollbarWidth - 5);
            _slidingAreaRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, dropdownHeight - 5);
        }



        //! Method run when the input field value changes
        public void OnValueChanged(string currText)
        {
            Text = currText;

            PruneItems(currText);

            RedrawPanel();
            //Debug.Log("value changed to: " + currText);

            if (_panelItems.Count == 0)
            {
                _isPanelActive = true;//this makes it get turned off
                ToggleDropdownPanel(false);
            }
            else if (!_isPanelActive)
            {
                ToggleDropdownPanel(false);
            }

            bool validity_changed = (_panelItems.Contains(Text.ToLower()) != _selectionIsValid);
            _selectionIsValid = _panelItems.Contains(Text) || _panelItems.Contains(Text.ToLower());
            OnSelectionChanged.Invoke(Text, _selectionIsValid);
            OnSelectionTextChanged.Invoke(Text);
            if (validity_changed)
            {
                OnSelectionValidityChanged.Invoke(_selectionIsValid);
            }

            SetInputTextColor();
        }

        private void SetInputTextColor()
        {
            if (InputColorMatching)
            {
                if (_selectionIsValid)
                {
                    _mainInput.textComponent.color = ValidSelectionTextColor;
                }
                else if (_panelItems.Count > 0)
                {
                    _mainInput.textComponent.color = MatchingItemsRemainingTextColor;
                }
                else
                {
                    _mainInput.textComponent.color = NoItemsRemainingTextColor;
                }
            }
        }



        /// <summary>
        /// Toggle the drop down list
        /// </summary>
        /// <param name="directClick"> whether an item was directly clicked on</param>

        public void ToggleDropdownPanel(bool directClick = false)
        {
            _isPanelActive = !_isPanelActive;
            if (_isPanelActive)
            {
                _arrow_Button_Down.SetActive(false);
                _arrow_Button_Up.SetActive(true);
            }
            else
            {
                _arrow_Button_Down.SetActive(true);
                _arrow_Button_Up.SetActive(false);
            }
            _overlayRT.gameObject.SetActive(_isPanelActive);

            if (_isPanelActive)
            {
                transform.SetAsLastSibling(); //! SetAsLastSibling: Đưa đối tượng này lên trên cùng trong danh sách sắp xếp của cha
            }
            else if (directClick)
            {
                // scrollOffset = Mathf.RoundToInt(itemsPanelRT.anchoredPosition.y / _rectTransform.sizeDelta.y); 
            }
        }


        private void PruneItems(string currText)
        {
            if (autocompleteSearchType == AutoCompleteSearchType.Linq) //! Default là AutoCompleteSearchType.Linq
            {
                PruneItemsLinq(currText); //? Sử dụng Linq để lọc các mục
            }
            else
            {
                PruneItemsArray(currText); //? Duyệt qua mảng thủ công để lọc các mục.
            }
        }

        private void PruneItemsLinq(string currText)
        {
            currText = currText.ToLower();
            //! Lưu ý rằng _panelItems khởi tạo ngay từ đầu bằng với AvailableOptions
            //? Lọc _panelItems ra List<string> không chứa currText và chuyển thành dạng Array [string]
            var toPrune = _panelItems.Where(x => !x.ToLower().Contains(currText)).ToArray();

            foreach (string key in toPrune)
            {
                panelObjects[key].SetActive(false); //Ẩn mục không khớp
                _panelItems.Remove(key);            //Loại bỏ mục không khớp khỏi danh sách hiển thị
                _prunedPanelItems.Add(key);         //Thêm mục không khớp vào danh sách bị loại bỏ
            }
            //? Lọc _prunedPanelItems ra List<string> chứa currText và chuyển thành dạng Array [string]
            var toAddBack = _prunedPanelItems.Where(x => x.ToLower().Contains(currText)).ToArray();
            foreach (string key in toAddBack)
            {
                panelObjects[key].SetActive(true); //Hiện mục khớp
                _panelItems.Add(key);              //Thêm mục khớp vào danh sách hiển thị
                _prunedPanelItems.Remove(key);     //Loại bỏ mục khớp khỏi danh sách bị loại bỏ
            }
            //! ==> Kết qủa cuối cùng là danh sách hiển thị chỉ chứa các mục khớp với currText => _panelItems.count
        }

        //Updated to not use Linq
        private void PruneItemsArray(string currText)
        {
            string _currText = currText.ToLower();

            for (int i = _panelItems.Count - 1; i >= 0; i--)
            {
                string _item = _panelItems[i];
                if (!_item.Contains(_currText))
                {
                    panelObjects[_panelItems[i]].SetActive(false);
                    _panelItems.RemoveAt(i);
                    _prunedPanelItems.Add(_item);
                }
            }
            for (int i = _prunedPanelItems.Count - 1; i >= 0; i--)
            {
                string _item = _prunedPanelItems[i];
                if (_item.Contains(_currText))
                {
                    panelObjects[_prunedPanelItems[i]].SetActive(true);
                    _prunedPanelItems.RemoveAt(i);
                    _panelItems.Add(_item);
                }
            }
        }
    }
}
