// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreFeaturedCharacterContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreFeaturedCharacterContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreFeaturedCharacterContainerWidget::execOnTransitionRequested)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionRequested(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCharacterContainerWidget::execSetCharacters)
	{
		P_GET_TARRAY_REF(FStoreFeaturedCharacterViewData,Z_Param_Out_viewDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacters_Implementation(Z_Param_Out_viewDataArray);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters = FName(TEXT("SetCharacters"));
	void UCoreStoreFeaturedCharacterContainerWidget::SetCharacters(TArray<FStoreFeaturedCharacterViewData> const& viewDataArray)
	{
		CoreStoreFeaturedCharacterContainerWidget_eventSetCharacters_Parms Parms;
		Parms.viewDataArray=viewDataArray;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters),&Parms);
	}
	void UCoreStoreFeaturedCharacterContainerWidget::StaticRegisterNativesUCoreStoreFeaturedCharacterContainerWidget()
	{
		UClass* Class = UCoreStoreFeaturedCharacterContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTransitionRequested", &UCoreStoreFeaturedCharacterContainerWidget::execOnTransitionRequested },
			{ "SetCharacters", &UCoreStoreFeaturedCharacterContainerWidget::execSetCharacters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics
	{
		struct CoreStoreFeaturedCharacterContainerWidget_eventOnTransitionRequested_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCharacterContainerWidget_eventOnTransitionRequested_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget, nullptr, "OnTransitionRequested", nullptr, nullptr, sizeof(CoreStoreFeaturedCharacterContainerWidget_eventOnTransitionRequested_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_viewDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray_Inner = { "viewDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray = { "viewDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCharacterContainerWidget_eventSetCharacters_Parms, viewDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::NewProp_viewDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget, nullptr, "SetCharacters", nullptr, nullptr, sizeof(CoreStoreFeaturedCharacterContainerWidget_eventSetCharacters_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_NoRegister()
	{
		return UCoreStoreFeaturedCharacterContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterTileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterTileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_OnTransitionRequested, "OnTransitionRequested" }, // 3831739525
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCharacterContainerWidget_SetCharacters, "SetCharacters" }, // 3671680989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreFeaturedCharacterContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_CharacterTileClass_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCharacterContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_CharacterTileClass = { "CharacterTileClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCharacterContainerWidget, CharacterTileClass), Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_CharacterTileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_CharacterTileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_Root_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedCharacterContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCharacterContainerWidget, Root), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_CharacterTileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreFeaturedCharacterContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::ClassParams = {
		&UCoreStoreFeaturedCharacterContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreFeaturedCharacterContainerWidget, 1124533985);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreFeaturedCharacterContainerWidget>()
	{
		return UCoreStoreFeaturedCharacterContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreFeaturedCharacterContainerWidget(Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget, &UCoreStoreFeaturedCharacterContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreFeaturedCharacterContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreFeaturedCharacterContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
