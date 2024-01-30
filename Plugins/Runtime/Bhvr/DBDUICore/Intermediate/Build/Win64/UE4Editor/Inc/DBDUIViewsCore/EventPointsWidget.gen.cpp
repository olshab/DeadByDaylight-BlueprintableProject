// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventPointsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventPointsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventPointsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventPointsWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static FName NAME_UEventPointsWidget_Highlight = FName(TEXT("Highlight"));
	void UEventPointsWidget::Highlight(bool isHighlighted)
	{
		EventPointsWidget_eventHighlight_Parms Parms;
		Parms.isHighlighted=isHighlighted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEventPointsWidget_Highlight),&Parms);
	}
	static FName NAME_UEventPointsWidget_SetValue = FName(TEXT("SetValue"));
	void UEventPointsWidget::SetValue(int32 newValue)
	{
		EventPointsWidget_eventSetValue_Parms Parms;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_UEventPointsWidget_SetValue),&Parms);
	}
	void UEventPointsWidget::StaticRegisterNativesUEventPointsWidget()
	{
	}
	struct Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics
	{
		static void NewProp_isHighlighted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHighlighted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::NewProp_isHighlighted_SetBit(void* Obj)
	{
		((EventPointsWidget_eventHighlight_Parms*)Obj)->isHighlighted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::NewProp_isHighlighted = { "isHighlighted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventPointsWidget_eventHighlight_Parms), &Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::NewProp_isHighlighted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::NewProp_isHighlighted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPointsWidget, nullptr, "Highlight", nullptr, nullptr, sizeof(EventPointsWidget_eventHighlight_Parms), Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPointsWidget_Highlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPointsWidget_Highlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventPointsWidget_eventSetValue_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventPointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventPointsWidget, nullptr, "SetValue", nullptr, nullptr, sizeof(EventPointsWidget_eventSetValue_Parms), Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventPointsWidget_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventPointsWidget_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventPointsWidget_NoRegister()
	{
		return UEventPointsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventPointsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventPointsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventPointsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventPointsWidget_Highlight, "Highlight" }, // 746515017
		{ &Z_Construct_UFunction_UEventPointsWidget_SetValue, "SetValue" }, // 1952835397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventPointsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventPointsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventPointsWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventPointsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventPointsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventPointsWidget_Statics::ClassParams = {
		&UEventPointsWidget::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventPointsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventPointsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventPointsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventPointsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventPointsWidget, 2962194651);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventPointsWidget>()
	{
		return UEventPointsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventPointsWidget(Z_Construct_UClass_UEventPointsWidget, &UEventPointsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventPointsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventPointsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
