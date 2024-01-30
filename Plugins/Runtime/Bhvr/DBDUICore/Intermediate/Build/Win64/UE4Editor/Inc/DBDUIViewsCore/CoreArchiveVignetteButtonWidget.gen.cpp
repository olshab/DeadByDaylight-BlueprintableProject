// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveVignetteButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveVignetteButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteViewData();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveVignetteButtonWidget::execSetData)
	{
		P_GET_STRUCT_REF(FArchivesVignetteViewData,Z_Param_Out_vignetteDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_vignetteDataList);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveVignetteButtonWidget_SetVignetteRead = FName(TEXT("SetVignetteRead"));
	void UCoreArchiveVignetteButtonWidget::SetVignetteRead(bool isRead)
	{
		CoreArchiveVignetteButtonWidget_eventSetVignetteRead_Parms Parms;
		Parms.isRead=isRead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveVignetteButtonWidget_SetVignetteRead),&Parms);
	}
	static FName NAME_UCoreArchiveVignetteButtonWidget_SetVisualData = FName(TEXT("SetVisualData"));
	void UCoreArchiveVignetteButtonWidget::SetVisualData(FText const& vignetteTitle, FText const& vignetteSubtitle, FText const& vignetteProgressText, bool displayProgress, const float vignetteProgress, bool isUnread, FText const& unreadIndicatorText, bool showCinematics, bool lockCinematics)
	{
		CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms Parms;
		Parms.vignetteTitle=vignetteTitle;
		Parms.vignetteSubtitle=vignetteSubtitle;
		Parms.vignetteProgressText=vignetteProgressText;
		Parms.displayProgress=displayProgress ? true : false;
		Parms.vignetteProgress=vignetteProgress;
		Parms.isUnread=isUnread ? true : false;
		Parms.unreadIndicatorText=unreadIndicatorText;
		Parms.showCinematics=showCinematics ? true : false;
		Parms.lockCinematics=lockCinematics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveVignetteButtonWidget_SetVisualData),&Parms);
	}
	void UCoreArchiveVignetteButtonWidget::StaticRegisterNativesUCoreArchiveVignetteButtonWidget()
	{
		UClass* Class = UCoreArchiveVignetteButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UCoreArchiveVignetteButtonWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics
	{
		struct CoreArchiveVignetteButtonWidget_eventSetData_Parms
		{
			FArchivesVignetteViewData vignetteDataList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vignetteDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::NewProp_vignetteDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::NewProp_vignetteDataList = { "vignetteDataList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteButtonWidget_eventSetData_Parms, vignetteDataList), Z_Construct_UScriptStruct_FArchivesVignetteViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::NewProp_vignetteDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::NewProp_vignetteDataList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::NewProp_vignetteDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteButtonWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreArchiveVignetteButtonWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRead_MetaData[];
#endif
		static void NewProp_isRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead_SetBit(void* Obj)
	{
		((CoreArchiveVignetteButtonWidget_eventSetVignetteRead_Parms*)Obj)->isRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead = { "isRead", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteButtonWidget_eventSetVignetteRead_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::NewProp_isRead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteButtonWidget, nullptr, "SetVignetteRead", nullptr, nullptr, sizeof(CoreArchiveVignetteButtonWidget_eventSetVignetteRead_Parms), Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_vignetteTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteSubtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_vignetteSubtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteProgressText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_vignetteProgressText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayProgress_MetaData[];
#endif
		static void NewProp_displayProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_displayProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vignetteProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUnread_MetaData[];
#endif
		static void NewProp_isUnread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUnread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unreadIndicatorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_unreadIndicatorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_showCinematics_MetaData[];
#endif
		static void NewProp_showCinematics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showCinematics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lockCinematics_MetaData[];
#endif
		static void NewProp_lockCinematics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lockCinematics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteTitle = { "vignetteTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms, vignetteTitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteSubtitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteSubtitle = { "vignetteSubtitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms, vignetteSubtitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteSubtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteSubtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgressText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgressText = { "vignetteProgressText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms, vignetteProgressText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgressText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress_SetBit(void* Obj)
	{
		((CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms*)Obj)->displayProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress = { "displayProgress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgress = { "vignetteProgress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms, vignetteProgress), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread_SetBit(void* Obj)
	{
		((CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms*)Obj)->isUnread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread = { "isUnread", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText = { "unreadIndicatorText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms, unreadIndicatorText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics_SetBit(void* Obj)
	{
		((CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms*)Obj)->showCinematics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics = { "showCinematics", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics_SetBit(void* Obj)
	{
		((CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms*)Obj)->lockCinematics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics = { "lockCinematics", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteSubtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgressText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_displayProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_vignetteProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_isUnread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_showCinematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::NewProp_lockCinematics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteButtonWidget, nullptr, "SetVisualData", nullptr, nullptr, sizeof(CoreArchiveVignetteButtonWidget_eventSetVisualData_Parms), Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_NoRegister()
	{
		return UCoreArchiveVignetteButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__subtitleMaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__subtitleMaxLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetData, "SetData" }, // 17141321
		{ &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVignetteRead, "SetVignetteRead" }, // 746307434
		{ &Z_Construct_UFunction_UCoreArchiveVignetteButtonWidget_SetVisualData, "SetVisualData" }, // 884084856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveVignetteButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::NewProp__subtitleMaxLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveVignetteButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::NewProp__subtitleMaxLength = { "_subtitleMaxLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteButtonWidget, _subtitleMaxLength), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::NewProp__subtitleMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::NewProp__subtitleMaxLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::NewProp__subtitleMaxLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveVignetteButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::ClassParams = {
		&UCoreArchiveVignetteButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveVignetteButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveVignetteButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveVignetteButtonWidget, 1798904287);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveVignetteButtonWidget>()
	{
		return UCoreArchiveVignetteButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveVignetteButtonWidget(Z_Construct_UClass_UCoreArchiveVignetteButtonWidget, &UCoreArchiveVignetteButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveVignetteButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveVignetteButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
