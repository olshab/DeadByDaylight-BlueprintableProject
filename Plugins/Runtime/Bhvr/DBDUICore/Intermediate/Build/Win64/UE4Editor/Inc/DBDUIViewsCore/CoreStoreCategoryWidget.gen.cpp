// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCategoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCategoryWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCategoryWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCategoryWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCategoryViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreCategoryWidget::execSetData)
	{
		P_GET_STRUCT_REF(FStoreCategoryViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreCategoryWidget_SetData = FName(TEXT("SetData"));
	void UCoreStoreCategoryWidget::SetData(FStoreCategoryViewData const& data)
	{
		CoreStoreCategoryWidget_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCategoryWidget_SetData),&Parms);
	}
	void UCoreStoreCategoryWidget::StaticRegisterNativesUCoreStoreCategoryWidget()
	{
		UClass* Class = UCoreStoreCategoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UCoreStoreCategoryWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCategoryWidget_eventSetData_Parms, data), Z_Construct_UScriptStruct_FStoreCategoryViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCategoryWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreStoreCategoryWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreCategoryWidget_NoRegister()
	{
		return UCoreStoreCategoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCategoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoverBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHoverBorder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreCategoryWidget_SetData, "SetData" }, // 3966135563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCategoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCategoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp_OnHoverBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCategoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp_OnHoverBorder = { "OnHoverBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCategoryWidget, OnHoverBorder), Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp_OnHoverBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp_OnHoverBorder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category_MetaData[] = {
		{ "Category", "CoreStoreCategoryWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category = { "_category", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCategoryWidget, _category), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp_OnHoverBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::NewProp__category,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCategoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::ClassParams = {
		&UCoreStoreCategoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCategoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCategoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCategoryWidget, 3445196684);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCategoryWidget>()
	{
		return UCoreStoreCategoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCategoryWidget(Z_Construct_UClass_UCoreStoreCategoryWidget, &UCoreStoreCategoryWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCategoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCategoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
