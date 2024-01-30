// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMenuItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMenuItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
// End Cross Module References
	DEFINE_FUNCTION(UCoreMenuItemWidget::execSetMenuItemData)
	{
		P_GET_OBJECT(UMenuItemViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuItemData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuItemWidget::execSetMenuItemTooltipData)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuItemTooltipData(Z_Param_Out_tooltipData);
		P_NATIVE_END;
	}
	void UCoreMenuItemWidget::StaticRegisterNativesUCoreMenuItemWidget()
	{
		UClass* Class = UCoreMenuItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMenuItemData", &UCoreMenuItemWidget::execSetMenuItemData },
			{ "SetMenuItemTooltipData", &UCoreMenuItemWidget::execSetMenuItemTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics
	{
		struct CoreMenuItemWidget_eventSetMenuItemData_Parms
		{
			const UMenuItemViewData* data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuItemWidget_eventSetMenuItemData_Parms, data), Z_Construct_UClass_UMenuItemViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuItemWidget, nullptr, "SetMenuItemData", nullptr, nullptr, sizeof(CoreMenuItemWidget_eventSetMenuItemData_Parms), Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics
	{
		struct CoreMenuItemWidget_eventSetMenuItemTooltipData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::NewProp_tooltipData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::NewProp_tooltipData = { "tooltipData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuItemWidget_eventSetMenuItemTooltipData_Parms, tooltipData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::NewProp_tooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::NewProp_tooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::NewProp_tooltipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuItemWidget, nullptr, "SetMenuItemTooltipData", nullptr, nullptr, sizeof(CoreMenuItemWidget_eventSetMenuItemTooltipData_Parms), Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMenuItemWidget_NoRegister()
	{
		return UCoreMenuItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMenuItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMenuItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMenuItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemData, "SetMenuItemData" }, // 2780942073
		{ &Z_Construct_UFunction_UCoreMenuItemWidget_SetMenuItemTooltipData, "SetMenuItemTooltipData" }, // 1061268907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMenuItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuItemWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMenuItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMenuItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMenuItemWidget_Statics::ClassParams = {
		&UCoreMenuItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreMenuItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMenuItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMenuItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMenuItemWidget, 1971447358);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMenuItemWidget>()
	{
		return UCoreMenuItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMenuItemWidget(Z_Construct_UClass_UCoreMenuItemWidget, &UCoreMenuItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMenuItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMenuItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
