// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCharacterItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCharacterItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreItemWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreCharacterItemWidget::execSetStoreCharacterItemData)
	{
		P_GET_OBJECT(UStoreCharacterItemViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStoreCharacterItemData_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData = FName(TEXT("SetStoreCharacterItemData"));
	void UCoreStoreCharacterItemWidget::SetStoreCharacterItemData(UStoreCharacterItemViewData* data)
	{
		CoreStoreCharacterItemWidget_eventSetStoreCharacterItemData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData),&Parms);
	}
	void UCoreStoreCharacterItemWidget::StaticRegisterNativesUCoreStoreCharacterItemWidget()
	{
		UClass* Class = UCoreStoreCharacterItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStoreCharacterItemData", &UCoreStoreCharacterItemWidget::execSetStoreCharacterItemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterItemWidget_eventSetStoreCharacterItemData_Parms, data), Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterItemWidget, nullptr, "SetStoreCharacterItemData", nullptr, nullptr, sizeof(CoreStoreCharacterItemWidget_eventSetStoreCharacterItemData_Parms), Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister()
	{
		return UCoreStoreCharacterItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreStoreItemWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreCharacterItemWidget_SetStoreCharacterItemData, "SetStoreCharacterItemData" }, // 3235844313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCharacterItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::NewProp__data_MetaData[] = {
		{ "Category", "CoreStoreCharacterItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharacterItemWidget, _data), Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::NewProp__data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::NewProp__data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCharacterItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::ClassParams = {
		&UCoreStoreCharacterItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCharacterItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCharacterItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCharacterItemWidget, 1531646937);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCharacterItemWidget>()
	{
		return UCoreStoreCharacterItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCharacterItemWidget(Z_Construct_UClass_UCoreStoreCharacterItemWidget, &UCoreStoreCharacterItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCharacterItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCharacterItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
