﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[7] = 
{
	{ 23565, 0,  0 } /*tableIndex: 0 */,
	{ 10161, 0,  1 } /*tableIndex: 1 */,
	{ 2908, 0,  2 } /*tableIndex: 2 */,
	{ 2672, 0,  3 } /*tableIndex: 3 */,
	{ 18010, 1,  4 } /*tableIndex: 4 */,
	{ 21383, 0,  7 } /*tableIndex: 5 */,
	{ 21381, 0,  8 } /*tableIndex: 6 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"handler",
	"n",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 1 } /* 0x06000001 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 1, 1 } /* 0x06000002 System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 2, 1 } /* 0x06000003 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 3, 1 } /* 0x06000006 System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
	{ 0, 0 } /* 0x06000007 System.Boolean UnityEngine.Analytics.Analytics::IsInitialized() */,
	{ 0, 0 } /* 0x06000008 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean) */,
	{ 0, 0 } /* 0x06000009 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String) */,
	{ 4, 1 } /* 0x0600000A UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000B UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String) */,
	{ 5, 1 } /* 0x0600000D System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 6, 1 } /* 0x0600000E System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[98] = 
{
	{ 61267, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 61267, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 61267, 1, 25, 25, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 61267, 1, 26, 26, 13, 35, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 61267, 1, 27, 27, 13, 33, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 61267, 1, 27, 27, 0, 0, 12, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 61267, 1, 28, 28, 17, 27, 15, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 61267, 1, 28, 28, 17, 27, 16, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 61267, 1, 29, 29, 9, 10, 22, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 61268, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 61268, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 61268, 1, 33, 33, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 61268, 1, 34, 34, 13, 49, 1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 61268, 1, 35, 35, 13, 33, 7, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 61268, 1, 35, 35, 0, 0, 12, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 61268, 1, 36, 36, 17, 27, 15, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 61268, 1, 36, 36, 17, 27, 16, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 61268, 1, 37, 37, 9, 10, 22, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 61269, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 61269, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 61269, 1, 41, 41, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 61269, 1, 42, 42, 13, 37, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 61269, 1, 43, 43, 13, 33, 7, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 61269, 1, 43, 43, 0, 0, 12, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 61269, 1, 44, 44, 17, 78, 15, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 61269, 1, 44, 44, 17, 78, 19, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 61269, 1, 45, 45, 9, 10, 25, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 61272, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 61272, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 61272, 1, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 61272, 1, 178, 178, 13, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 61272, 1, 179, 179, 13, 33, 8, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 61272, 1, 179, 179, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 61272, 1, 180, 180, 17, 51, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 61272, 1, 180, 180, 17, 51, 18, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 61272, 1, 181, 181, 9, 10, 24, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 61276, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 61276, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 61276, 2, 272, 272, 9, 10, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 61276, 2, 273, 273, 13, 37, 1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 61276, 2, 274, 274, 13, 56, 7, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 61276, 2, 274, 274, 13, 56, 7, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 61276, 2, 274, 274, 13, 56, 12, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 61276, 2, 275, 275, 13, 97, 18, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 61276, 2, 275, 275, 13, 97, 26, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 61276, 2, 276, 276, 9, 10, 34, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 61277, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 61277, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 61277, 2, 287, 287, 9, 10, 0, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 61277, 2, 288, 288, 13, 49, 1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 61277, 2, 288, 288, 13, 49, 2, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 61277, 2, 288, 288, 0, 0, 8, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 61277, 2, 289, 289, 17, 97, 11, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 61277, 2, 289, 289, 17, 97, 16, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 61277, 2, 290, 290, 13, 34, 22, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 61277, 2, 290, 290, 13, 34, 22, kSequencePointKind_StepOut, 0, 55 } /* seqPointIndex: 55 */,
	{ 61277, 2, 290, 290, 0, 0, 31, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 61277, 2, 291, 291, 17, 55, 34, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 61277, 2, 292, 292, 13, 125, 38, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 61277, 2, 292, 292, 13, 125, 49, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 61277, 2, 293, 293, 9, 10, 57, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 61278, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 61278, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 61278, 2, 296, 296, 9, 10, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 61278, 2, 297, 297, 13, 49, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 61278, 2, 297, 297, 13, 49, 2, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 61278, 2, 297, 297, 0, 0, 8, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 61278, 2, 298, 298, 17, 97, 11, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 61278, 2, 298, 298, 17, 97, 16, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 61278, 2, 299, 299, 13, 36, 22, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 61278, 2, 299, 299, 0, 0, 27, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 61278, 2, 300, 300, 17, 78, 30, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 61278, 2, 300, 300, 17, 78, 35, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 61278, 2, 301, 301, 13, 34, 41, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 61278, 2, 301, 301, 13, 34, 41, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 61278, 2, 301, 301, 0, 0, 50, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 61278, 2, 302, 302, 17, 55, 53, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 61278, 2, 303, 303, 13, 75, 57, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 61278, 2, 303, 303, 13, 75, 61, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 61278, 2, 304, 304, 9, 10, 69, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 61279, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 61279, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 61279, 3, 26, 26, 9, 10, 0, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 61279, 3, 27, 27, 13, 47, 1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 61279, 3, 28, 28, 13, 33, 7, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 61279, 3, 28, 28, 0, 0, 12, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 61279, 3, 29, 29, 17, 86, 15, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 61279, 3, 29, 29, 17, 86, 20, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 61279, 3, 30, 30, 9, 10, 26, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 61280, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 61280, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 61280, 3, 104, 104, 9, 10, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 61280, 3, 105, 105, 13, 48, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 61280, 3, 106, 106, 13, 33, 7, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 61280, 3, 106, 106, 0, 0, 12, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 61280, 3, 107, 107, 17, 32, 15, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 61280, 3, 107, 107, 17, 32, 17, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 61280, 3, 108, 108, 9, 10, 23, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\RemoteSettings\\RemoteSettings.bindings.cs", { 106, 60, 162, 247, 36, 252, 183, 5, 143, 102, 111, 96, 116, 222, 62, 8} }, //1 
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\Public\\UnityAnalytics.cs", { 72, 29, 148, 175, 182, 106, 235, 142, 159, 214, 100, 118, 120, 138, 218, 255} }, //2 
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\Public\\AnalyticsSessionInfo.bindings.cs", { 159, 171, 218, 211, 43, 69, 52, 219, 243, 244, 170, 90, 38, 135, 126, 190} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[4] = 
{
	{ 8990, 1 },
	{ 8991, 1 },
	{ 8994, 2 },
	{ 8999, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[9] = 
{
	{ 0, 23 },
	{ 0, 23 },
	{ 0, 26 },
	{ 0, 25 },
	{ 0, 36 },
	{ 0, 59 },
	{ 0, 71 },
	{ 0, 27 },
	{ 0, 24 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 23, 0, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 23, 1, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 26, 2, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 25, 3, 1 } /* System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Analytics.Analytics::IsInitialized() */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String) */,
	{ 36, 4, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String) */,
	{ 59, 5, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String) */,
	{ 71, 6, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String) */,
	{ 27, 7, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 24, 8, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	98,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityAnalyticsModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	4,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
