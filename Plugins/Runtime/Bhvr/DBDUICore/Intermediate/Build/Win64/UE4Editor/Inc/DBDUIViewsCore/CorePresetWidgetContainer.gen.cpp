// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePresetWidgetContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePresetWidgetContainer() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePresetWidgetContainer();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePresetWidgetContainer_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics
	{
		struct CorePresetWidgetContainer_eventOnSelectedPresetDelegate_Parms
		{
			int32 selectedPreset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::NewProp_selectedPreset = { "selectedPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresetWidgetContainer_eventOnSelectedPresetDelegate_Parms, selectedPreset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::NewProp_selectedPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresetWidgetContainer, nullptr, "OnSelectedPresetDelegate__DelegateSignature", nullptr, nullptr, sizeof(CorePresetWidgetContainer_eventOnSelectedPresetDelegate_Parms), Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCorePresetWidgetContainer::execSetPreset)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_presetData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreset(Z_Param_Out_presetData,Z_Param_selectedPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresetWidgetContainer::execSetSelectedPreset)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedPreset(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	void UCorePresetWidgetContainer::StaticRegisterNativesUCorePresetWidgetContainer()
	{
		UClass* Class = UCorePresetWidgetContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPreset", &UCorePresetWidgetContainer::execSetPreset },
			{ "SetSelectedPreset", &UCorePresetWidgetContainer::execSetSelectedPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics
	{
		struct CorePresetWidgetContainer_eventSetPreset_Parms
		{
			TArray<int32> presetData;
			int32 selectedPreset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_presetData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_presetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData_Inner = { "presetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData = { "presetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresetWidgetContainer_eventSetPreset_Parms, presetData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_selectedPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_selectedPreset = { "selectedPreset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresetWidgetContainer_eventSetPreset_Parms, selectedPreset), METADATA_PARAMS(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_selectedPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_selectedPreset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_presetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::NewProp_selectedPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresetWidgetContainer, nullptr, "SetPreset", nullptr, nullptr, sizeof(CorePresetWidgetContainer_eventSetPreset_Parms), Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics
	{
		struct CorePresetWidgetContainer_eventSetSelectedPreset_Parms
		{
			UCoreSelectableButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresetWidgetContainer_eventSetSelectedPreset_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresetWidgetContainer, nullptr, "SetSelectedPreset", nullptr, nullptr, sizeof(CorePresetWidgetContainer_eventSetSelectedPreset_Parms), Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePresetWidgetContainer_NoRegister()
	{
		return UCorePresetWidgetContainer::StaticClass();
	}
	struct Z_Construct_UClass_UCorePresetWidgetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedPresetDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedPresetDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Preset_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Preset_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Preset_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Preset_4;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__presetWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__presetWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__presetWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePresetWidgetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePresetWidgetContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature, "OnSelectedPresetDelegate__DelegateSignature" }, // 1071163105
		{ &Z_Construct_UFunction_UCorePresetWidgetContainer_SetPreset, "SetPreset" }, // 2152300402
		{ &Z_Construct_UFunction_UCorePresetWidgetContainer_SetSelectedPreset, "SetSelectedPreset" }, // 1397766861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePresetWidgetContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_OnSelectedPresetDelegate_MetaData[] = {
		{ "Category", "CorePresetWidgetContainer" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_OnSelectedPresetDelegate = { "OnSelectedPresetDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresetWidgetContainer, OnSelectedPresetDelegate), Z_Construct_UDelegateFunction_UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_OnSelectedPresetDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_OnSelectedPresetDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePresetWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_1 = { "Preset_1", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_1), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePresetWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_2 = { "Preset_2", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_2), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePresetWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_3 = { "Preset_3", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_3), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePresetWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_4 = { "Preset_4", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_4), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_4_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets_Inner = { "_presetWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CorePresetWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePresetWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets = { "_presetWidgets", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresetWidgetContainer, _presetWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePresetWidgetContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_OnSelectedPresetDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp_Preset_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresetWidgetContainer_Statics::NewProp__presetWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePresetWidgetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePresetWidgetContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePresetWidgetContainer_Statics::ClassParams = {
		&UCorePresetWidgetContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePresetWidgetContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresetWidgetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePresetWidgetContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePresetWidgetContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePresetWidgetContainer, 518238784);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePresetWidgetContainer>()
	{
		return UCorePresetWidgetContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePresetWidgetContainer(Z_Construct_UClass_UCorePresetWidgetContainer, &UCorePresetWidgetContainer::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePresetWidgetContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePresetWidgetContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
