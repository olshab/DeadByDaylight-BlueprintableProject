// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMenuAddonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMenuAddonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuAddonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuAddonViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreMenuAddonWidget::execGetWidgetParentDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetWidgetParentDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuAddonWidget::execSetAddonDisabled)
	{
		P_GET_UBOOL(Z_Param_isParentAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAddonDisabled(Z_Param_isParentAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuAddonWidget::execSetMenuAddonData)
	{
		P_GET_OBJECT(UMenuAddonViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuAddonData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuAddonWidget::execSetMenuAddonTooltipData)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuAddonTooltipData(Z_Param_Out_tooltipData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreMenuAddonWidget_SetWhitePlusIconVisibility = FName(TEXT("SetWhitePlusIconVisibility"));
	void UCoreMenuAddonWidget::SetWhitePlusIconVisibility(bool isVisible)
	{
		CoreMenuAddonWidget_eventSetWhitePlusIconVisibility_Parms Parms;
		Parms.isVisible=isVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuAddonWidget_SetWhitePlusIconVisibility),&Parms);
	}
	static FName NAME_UCoreMenuAddonWidget_UpdateWidgetScale = FName(TEXT("UpdateWidgetScale"));
	void UCoreMenuAddonWidget::UpdateWidgetScale()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuAddonWidget_UpdateWidgetScale),NULL);
	}
	void UCoreMenuAddonWidget::StaticRegisterNativesUCoreMenuAddonWidget()
	{
		UClass* Class = UCoreMenuAddonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWidgetParentDisplayName", &UCoreMenuAddonWidget::execGetWidgetParentDisplayName },
			{ "SetAddonDisabled", &UCoreMenuAddonWidget::execSetAddonDisabled },
			{ "SetMenuAddonData", &UCoreMenuAddonWidget::execSetMenuAddonData },
			{ "SetMenuAddonTooltipData", &UCoreMenuAddonWidget::execSetMenuAddonTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics
	{
		struct CoreMenuAddonWidget_eventGetWidgetParentDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuAddonWidget_eventGetWidgetParentDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuAddonWidget, nullptr, "GetWidgetParentDisplayName", nullptr, nullptr, sizeof(CoreMenuAddonWidget_eventGetWidgetParentDisplayName_Parms), Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics
	{
		struct CoreMenuAddonWidget_eventSetAddonDisabled_Parms
		{
			bool isParentAvailable;
		};
		static void NewProp_isParentAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isParentAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::NewProp_isParentAvailable_SetBit(void* Obj)
	{
		((CoreMenuAddonWidget_eventSetAddonDisabled_Parms*)Obj)->isParentAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::NewProp_isParentAvailable = { "isParentAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreMenuAddonWidget_eventSetAddonDisabled_Parms), &Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::NewProp_isParentAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::NewProp_isParentAvailable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuAddonWidget, nullptr, "SetAddonDisabled", nullptr, nullptr, sizeof(CoreMenuAddonWidget_eventSetAddonDisabled_Parms), Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics
	{
		struct CoreMenuAddonWidget_eventSetMenuAddonData_Parms
		{
			const UMenuAddonViewData* data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuAddonWidget_eventSetMenuAddonData_Parms, data), Z_Construct_UClass_UMenuAddonViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuAddonWidget, nullptr, "SetMenuAddonData", nullptr, nullptr, sizeof(CoreMenuAddonWidget_eventSetMenuAddonData_Parms), Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics
	{
		struct CoreMenuAddonWidget_eventSetMenuAddonTooltipData_Parms
		{
			FLoadoutTooltipData tooltipData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::NewProp_tooltipData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::NewProp_tooltipData = { "tooltipData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuAddonWidget_eventSetMenuAddonTooltipData_Parms, tooltipData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::NewProp_tooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::NewProp_tooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::NewProp_tooltipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuAddonWidget, nullptr, "SetMenuAddonTooltipData", nullptr, nullptr, sizeof(CoreMenuAddonWidget_eventSetMenuAddonTooltipData_Parms), Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((CoreMenuAddonWidget_eventSetWhitePlusIconVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreMenuAddonWidget_eventSetWhitePlusIconVisibility_Parms), &Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuAddonWidget, nullptr, "SetWhitePlusIconVisibility", nullptr, nullptr, sizeof(CoreMenuAddonWidget_eventSetWhitePlusIconVisibility_Parms), Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuAddonWidget, nullptr, "UpdateWidgetScale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister()
	{
		return UCoreMenuAddonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMenuAddonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisabledState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonInventoryScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__addonInventoryScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMenuAddonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMenuAddonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMenuAddonWidget_GetWidgetParentDisplayName, "GetWidgetParentDisplayName" }, // 3418443569
		{ &Z_Construct_UFunction_UCoreMenuAddonWidget_SetAddonDisabled, "SetAddonDisabled" }, // 2959618943
		{ &Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonData, "SetMenuAddonData" }, // 1717352007
		{ &Z_Construct_UFunction_UCoreMenuAddonWidget_SetMenuAddonTooltipData, "SetMenuAddonTooltipData" }, // 3718880381
		{ &Z_Construct_UFunction_UCoreMenuAddonWidget_SetWhitePlusIconVisibility, "SetWhitePlusIconVisibility" }, // 3595659845
		{ &Z_Construct_UFunction_UCoreMenuAddonWidget_UpdateWidgetScale, "UpdateWidgetScale" }, // 3795269741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuAddonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMenuAddonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp_DisabledState_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuAddonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp_DisabledState = { "DisabledState", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuAddonWidget, DisabledState), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp_DisabledState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp_DisabledState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp__addonInventoryScale_MetaData[] = {
		{ "Category", "CoreMenuAddonWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuAddonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp__addonInventoryScale = { "_addonInventoryScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuAddonWidget, _addonInventoryScale), METADATA_PARAMS(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp__addonInventoryScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp__addonInventoryScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreMenuAddonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp_DisabledState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuAddonWidget_Statics::NewProp__addonInventoryScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMenuAddonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMenuAddonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMenuAddonWidget_Statics::ClassParams = {
		&UCoreMenuAddonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreMenuAddonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuAddonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMenuAddonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMenuAddonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMenuAddonWidget, 668912739);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMenuAddonWidget>()
	{
		return UCoreMenuAddonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMenuAddonWidget(Z_Construct_UClass_UCoreMenuAddonWidget, &UCoreMenuAddonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMenuAddonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMenuAddonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
