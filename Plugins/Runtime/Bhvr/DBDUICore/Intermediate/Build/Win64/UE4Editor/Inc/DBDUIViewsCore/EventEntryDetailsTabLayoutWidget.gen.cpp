// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryDetailsTabLayoutWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryDetailsTabLayoutWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventDetailsTabContentData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UEventEntryDetailsTabLayoutWidget_SetData = FName(TEXT("SetData"));
	void UEventEntryDetailsTabLayoutWidget::SetData(FEventEntryPopupSkinUIData const& skinData, TArray<FSpecialEventDetailsTabContentData> const& contentData, TSoftObjectPtr<UTexture2D> const& imageTexture)
	{
		EventEntryDetailsTabLayoutWidget_eventSetData_Parms Parms;
		Parms.skinData=skinData;
		Parms.contentData=contentData;
		Parms.imageTexture=imageTexture;
		ProcessEvent(FindFunctionChecked(NAME_UEventEntryDetailsTabLayoutWidget_SetData),&Parms);
	}
	void UEventEntryDetailsTabLayoutWidget::StaticRegisterNativesUEventEntryDetailsTabLayoutWidget()
	{
	}
	struct Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skinData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_contentData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_contentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_imageTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_imageTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_skinData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_skinData = { "skinData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryDetailsTabLayoutWidget_eventSetData_Parms, skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_skinData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData_Inner = { "contentData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpecialEventDetailsTabContentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData = { "contentData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryDetailsTabLayoutWidget_eventSetData_Parms, contentData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_imageTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_imageTexture = { "imageTexture", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryDetailsTabLayoutWidget_eventSetData_Parms, imageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_imageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_imageTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_skinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_contentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::NewProp_imageTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget, nullptr, "SetData", nullptr, nullptr, sizeof(EventEntryDetailsTabLayoutWidget_eventSetData_Parms), Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_NoRegister()
	{
		return UEventEntryDetailsTabLayoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryDetailsTabLayoutWidget_SetData, "SetData" }, // 2843391873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryDetailsTabLayoutWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabLayoutWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryDetailsTabLayoutWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::ClassParams = {
		&UEventEntryDetailsTabLayoutWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryDetailsTabLayoutWidget, 2673497052);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryDetailsTabLayoutWidget>()
	{
		return UEventEntryDetailsTabLayoutWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryDetailsTabLayoutWidget(Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget, &UEventEntryDetailsTabLayoutWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryDetailsTabLayoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryDetailsTabLayoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
