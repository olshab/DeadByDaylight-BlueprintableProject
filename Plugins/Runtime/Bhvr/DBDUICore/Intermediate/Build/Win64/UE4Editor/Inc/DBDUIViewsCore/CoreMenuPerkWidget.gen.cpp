// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMenuPerkWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMenuPerkWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPerkWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPerkViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
// End Cross Module References
	DEFINE_FUNCTION(UCoreMenuPerkWidget::execSetMenuPerkData)
	{
		P_GET_OBJECT(UMenuPerkViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuPerkData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuPerkWidget::execSetMenuPerkTooltipData)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuPerkTooltipData(Z_Param_Out_tooltipData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreMenuPerkWidget_SetEmptyPerk = FName(TEXT("SetEmptyPerk"));
	void UCoreMenuPerkWidget::SetEmptyPerk()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuPerkWidget_SetEmptyPerk),NULL);
	}
	static FName NAME_UCoreMenuPerkWidget_SetMenuPerkLevel = FName(TEXT("SetMenuPerkLevel"));
	void UCoreMenuPerkWidget::SetMenuPerkLevel(int32 level)
	{
		CoreMenuPerkWidget_eventSetMenuPerkLevel_Parms Parms;
		Parms.level=level;
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuPerkWidget_SetMenuPerkLevel),&Parms);
	}
	void UCoreMenuPerkWidget::StaticRegisterNativesUCoreMenuPerkWidget()
	{
		UClass* Class = UCoreMenuPerkWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMenuPerkData", &UCoreMenuPerkWidget::execSetMenuPerkData },
			{ "SetMenuPerkTooltipData", &UCoreMenuPerkWidget::execSetMenuPerkTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuPerkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuPerkWidget, nullptr, "SetEmptyPerk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics
	{
		struct CoreMenuPerkWidget_eventSetMenuPerkData_Parms
		{
			const UMenuPerkViewData* data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuPerkWidget_eventSetMenuPerkData_Parms, data), Z_Construct_UClass_UMenuPerkViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuPerkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuPerkWidget, nullptr, "SetMenuPerkData", nullptr, nullptr, sizeof(CoreMenuPerkWidget_eventSetMenuPerkData_Parms), Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuPerkWidget_eventSetMenuPerkLevel_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuPerkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuPerkWidget, nullptr, "SetMenuPerkLevel", nullptr, nullptr, sizeof(CoreMenuPerkWidget_eventSetMenuPerkLevel_Parms), Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics
	{
		struct CoreMenuPerkWidget_eventSetMenuPerkTooltipData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::NewProp_tooltipData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::NewProp_tooltipData = { "tooltipData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuPerkWidget_eventSetMenuPerkTooltipData_Parms, tooltipData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::NewProp_tooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::NewProp_tooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::NewProp_tooltipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuPerkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuPerkWidget, nullptr, "SetMenuPerkTooltipData", nullptr, nullptr, sizeof(CoreMenuPerkWidget_eventSetMenuPerkTooltipData_Parms), Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister()
	{
		return UCoreMenuPerkWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMenuPerkWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMenuPerkWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMenuPerkWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMenuPerkWidget_SetEmptyPerk, "SetEmptyPerk" }, // 641775572
		{ &Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkData, "SetMenuPerkData" }, // 3280986206
		{ &Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkLevel, "SetMenuPerkLevel" }, // 1967219237
		{ &Z_Construct_UFunction_UCoreMenuPerkWidget_SetMenuPerkTooltipData, "SetMenuPerkTooltipData" }, // 3801701408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuPerkWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMenuPerkWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuPerkWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMenuPerkWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMenuPerkWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMenuPerkWidget_Statics::ClassParams = {
		&UCoreMenuPerkWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreMenuPerkWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuPerkWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMenuPerkWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMenuPerkWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMenuPerkWidget, 2294747351);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMenuPerkWidget>()
	{
		return UCoreMenuPerkWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMenuPerkWidget(Z_Construct_UClass_UCoreMenuPerkWidget, &UCoreMenuPerkWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMenuPerkWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMenuPerkWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
