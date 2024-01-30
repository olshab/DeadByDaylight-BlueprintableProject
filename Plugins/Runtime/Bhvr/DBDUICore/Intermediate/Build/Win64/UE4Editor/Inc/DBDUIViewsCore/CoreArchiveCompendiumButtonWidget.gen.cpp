// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveCompendiumButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveCompendiumButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCompendiumButtonData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveCompendiumButtonWidget::execGetTomeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTomeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumButtonWidget::execOnButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumButtonWidget::execOnButtonUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumButtonWidget::execSetButtonData)
	{
		P_GET_STRUCT_REF(FCompendiumButtonData,Z_Param_Out_buttonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonData(Z_Param_Out_buttonData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveCompendiumButtonWidget_ResetVisuals = FName(TEXT("ResetVisuals"));
	void UCoreArchiveCompendiumButtonWidget::ResetVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveCompendiumButtonWidget_ResetVisuals),NULL);
	}
	static FName NAME_UCoreArchiveCompendiumButtonWidget_SetButtonVisual = FName(TEXT("SetButtonVisual"));
	void UCoreArchiveCompendiumButtonWidget::SetButtonVisual(FCompendiumButtonData const& buttonData)
	{
		CoreArchiveCompendiumButtonWidget_eventSetButtonVisual_Parms Parms;
		Parms.buttonData=buttonData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveCompendiumButtonWidget_SetButtonVisual),&Parms);
	}
	static FName NAME_UCoreArchiveCompendiumButtonWidget_SetGhostStory = FName(TEXT("SetGhostStory"));
	void UCoreArchiveCompendiumButtonWidget::SetGhostStory(bool isGhostStory)
	{
		CoreArchiveCompendiumButtonWidget_eventSetGhostStory_Parms Parms;
		Parms.isGhostStory=isGhostStory ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveCompendiumButtonWidget_SetGhostStory),&Parms);
	}
	static FName NAME_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual = FName(TEXT("SetLevelProgressionVisual"));
	void UCoreArchiveCompendiumButtonWidget::SetLevelProgressionVisual(int32 buttonLevel, EArchivesStoryLevelStatus levelStatus)
	{
		CoreArchiveCompendiumButtonWidget_eventSetLevelProgressionVisual_Parms Parms;
		Parms.buttonLevel=buttonLevel;
		Parms.levelStatus=levelStatus;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual),&Parms);
	}
	void UCoreArchiveCompendiumButtonWidget::StaticRegisterNativesUCoreArchiveCompendiumButtonWidget()
	{
		UClass* Class = UCoreArchiveCompendiumButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTomeId", &UCoreArchiveCompendiumButtonWidget::execGetTomeId },
			{ "OnButtonHovered", &UCoreArchiveCompendiumButtonWidget::execOnButtonHovered },
			{ "OnButtonUnhovered", &UCoreArchiveCompendiumButtonWidget::execOnButtonUnhovered },
			{ "SetButtonData", &UCoreArchiveCompendiumButtonWidget::execSetButtonData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics
	{
		struct CoreArchiveCompendiumButtonWidget_eventGetTomeId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumButtonWidget_eventGetTomeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "GetTomeId", nullptr, nullptr, sizeof(CoreArchiveCompendiumButtonWidget_eventGetTomeId_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "OnButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "OnButtonUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "ResetVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics
	{
		struct CoreArchiveCompendiumButtonWidget_eventSetButtonData_Parms
		{
			FCompendiumButtonData buttonData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buttonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::NewProp_buttonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::NewProp_buttonData = { "buttonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumButtonWidget_eventSetButtonData_Parms, buttonData), Z_Construct_UScriptStruct_FCompendiumButtonData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::NewProp_buttonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::NewProp_buttonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::NewProp_buttonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "SetButtonData", nullptr, nullptr, sizeof(CoreArchiveCompendiumButtonWidget_eventSetButtonData_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buttonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::NewProp_buttonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::NewProp_buttonData = { "buttonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumButtonWidget_eventSetButtonVisual_Parms, buttonData), Z_Construct_UScriptStruct_FCompendiumButtonData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::NewProp_buttonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::NewProp_buttonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::NewProp_buttonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "SetButtonVisual", nullptr, nullptr, sizeof(CoreArchiveCompendiumButtonWidget_eventSetButtonVisual_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics
	{
		static void NewProp_isGhostStory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGhostStory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::NewProp_isGhostStory_SetBit(void* Obj)
	{
		((CoreArchiveCompendiumButtonWidget_eventSetGhostStory_Parms*)Obj)->isGhostStory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::NewProp_isGhostStory = { "isGhostStory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveCompendiumButtonWidget_eventSetGhostStory_Parms), &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::NewProp_isGhostStory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::NewProp_isGhostStory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "SetGhostStory", nullptr, nullptr, sizeof(CoreArchiveCompendiumButtonWidget_eventSetGhostStory_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_levelStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_levelStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::NewProp_buttonLevel = { "buttonLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumButtonWidget_eventSetLevelProgressionVisual_Parms, buttonLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::NewProp_levelStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::NewProp_levelStatus = { "levelStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumButtonWidget_eventSetLevelProgressionVisual_Parms, levelStatus), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::NewProp_buttonLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::NewProp_levelStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::NewProp_levelStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, nullptr, "SetLevelProgressionVisual", nullptr, nullptr, sizeof(CoreArchiveCompendiumButtonWidget_eventSetLevelProgressionVisual_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister()
	{
		return UCoreArchiveCompendiumButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeProgressStyleTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TomeProgressStyleTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__compendiumButtonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__compendiumButtonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_GetTomeId, "GetTomeId" }, // 2825312151
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonHovered, "OnButtonHovered" }, // 1096967555
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered, "OnButtonUnhovered" }, // 2211873150
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_ResetVisuals, "ResetVisuals" }, // 1665083211
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonData, "SetButtonData" }, // 3083661223
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetButtonVisual, "SetButtonVisual" }, // 3779028102
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetGhostStory, "SetGhostStory" }, // 1524287043
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual, "SetLevelProgressionVisual" }, // 3022991169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveCompendiumButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "CoreArchiveCompendiumButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, HorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "CoreArchiveCompendiumButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, VerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_TomeProgressStyleTexture_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveCompendiumButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_TomeProgressStyleTexture = { "TomeProgressStyleTexture", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, TomeProgressStyleTexture), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_TomeProgressStyleTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_TomeProgressStyleTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VolumeIndex_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveCompendiumButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VolumeIndex = { "VolumeIndex", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, VolumeIndex), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VolumeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VolumeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp__compendiumButtonData_MetaData[] = {
		{ "Category", "CoreArchiveCompendiumButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp__compendiumButtonData = { "_compendiumButtonData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, _compendiumButtonData), Z_Construct_UScriptStruct_FCompendiumButtonData, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp__compendiumButtonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp__compendiumButtonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_TomeProgressStyleTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp_VolumeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::NewProp__compendiumButtonData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveCompendiumButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::ClassParams = {
		&UCoreArchiveCompendiumButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveCompendiumButtonWidget, 3831788351);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveCompendiumButtonWidget>()
	{
		return UCoreArchiveCompendiumButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveCompendiumButtonWidget(Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget, &UCoreArchiveCompendiumButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveCompendiumButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveCompendiumButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
