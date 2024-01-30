// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMenuPowerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMenuPowerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPowerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPowerViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
// End Cross Module References
	DEFINE_FUNCTION(UCoreMenuPowerWidget::execSetMenuPowerData)
	{
		P_GET_OBJECT(UMenuPowerViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuPowerData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuPowerWidget::execSetMenuPowerTooltipData)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuPowerTooltipData(Z_Param_Out_tooltipData);
		P_NATIVE_END;
	}
	void UCoreMenuPowerWidget::StaticRegisterNativesUCoreMenuPowerWidget()
	{
		UClass* Class = UCoreMenuPowerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMenuPowerData", &UCoreMenuPowerWidget::execSetMenuPowerData },
			{ "SetMenuPowerTooltipData", &UCoreMenuPowerWidget::execSetMenuPowerTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics
	{
		struct CoreMenuPowerWidget_eventSetMenuPowerData_Parms
		{
			const UMenuPowerViewData* data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuPowerWidget_eventSetMenuPowerData_Parms, data), Z_Construct_UClass_UMenuPowerViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuPowerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuPowerWidget, nullptr, "SetMenuPowerData", nullptr, nullptr, sizeof(CoreMenuPowerWidget_eventSetMenuPowerData_Parms), Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics
	{
		struct CoreMenuPowerWidget_eventSetMenuPowerTooltipData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::NewProp_tooltipData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::NewProp_tooltipData = { "tooltipData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuPowerWidget_eventSetMenuPowerTooltipData_Parms, tooltipData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::NewProp_tooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::NewProp_tooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::NewProp_tooltipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuPowerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuPowerWidget, nullptr, "SetMenuPowerTooltipData", nullptr, nullptr, sizeof(CoreMenuPowerWidget_eventSetMenuPowerTooltipData_Parms), Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister()
	{
		return UCoreMenuPowerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMenuPowerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMenuPowerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMenuPowerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerData, "SetMenuPowerData" }, // 1894076676
		{ &Z_Construct_UFunction_UCoreMenuPowerWidget_SetMenuPowerTooltipData, "SetMenuPowerTooltipData" }, // 2396533546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuPowerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMenuPowerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuPowerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMenuPowerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMenuPowerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMenuPowerWidget_Statics::ClassParams = {
		&UCoreMenuPowerWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreMenuPowerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuPowerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMenuPowerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMenuPowerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMenuPowerWidget, 3964989184);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMenuPowerWidget>()
	{
		return UCoreMenuPowerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMenuPowerWidget(Z_Construct_UClass_UCoreMenuPowerWidget, &UCoreMenuPowerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMenuPowerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMenuPowerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
