// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveObjectiveWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveObjectiveWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveObjectiveWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveObjectiveWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveObjectiveWidget::execSetData)
	{
		P_GET_STRUCT_REF(FArchiveNodeObjectiveViewData,Z_Param_Out_objectiveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_objectiveData);
		P_NATIVE_END;
	}
	void UCoreArchiveObjectiveWidget::StaticRegisterNativesUCoreArchiveObjectiveWidget()
	{
		UClass* Class = UCoreArchiveObjectiveWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UCoreArchiveObjectiveWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics
	{
		struct CoreArchiveObjectiveWidget_eventSetData_Parms
		{
			FArchiveNodeObjectiveViewData objectiveData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectiveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_objectiveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::NewProp_objectiveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::NewProp_objectiveData = { "objectiveData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveObjectiveWidget_eventSetData_Parms, objectiveData), Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::NewProp_objectiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::NewProp_objectiveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::NewProp_objectiveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveObjectiveWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreArchiveObjectiveWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveObjectiveWidget_NoRegister()
	{
		return UCoreArchiveObjectiveWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDescriptionRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveDescriptionRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgressTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentProgressTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgressTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxProgressTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveObjectiveWidget_SetData, "SetData" }, // 2832668206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveObjectiveWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveObjectiveWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ObjectiveDescriptionRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ObjectiveDescriptionRTB = { "ObjectiveDescriptionRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveObjectiveWidget, ObjectiveDescriptionRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ObjectiveDescriptionRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ObjectiveDescriptionRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveObjectiveWidget, ProgressBar), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_CurrentProgressTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_CurrentProgressTB = { "CurrentProgressTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveObjectiveWidget, CurrentProgressTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_CurrentProgressTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_CurrentProgressTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_MaxProgressTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_MaxProgressTB = { "MaxProgressTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveObjectiveWidget, MaxProgressTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_MaxProgressTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_MaxProgressTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ObjectiveDescriptionRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_ProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_CurrentProgressTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::NewProp_MaxProgressTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveObjectiveWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::ClassParams = {
		&UCoreArchiveObjectiveWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveObjectiveWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveObjectiveWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveObjectiveWidget, 2714056863);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveObjectiveWidget>()
	{
		return UCoreArchiveObjectiveWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveObjectiveWidget(Z_Construct_UClass_UCoreArchiveObjectiveWidget, &UCoreArchiveObjectiveWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveObjectiveWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveObjectiveWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
