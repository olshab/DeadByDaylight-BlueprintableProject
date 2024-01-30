// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreFeaturedCharacterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreFeaturedCharacterWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnTransitionButtonClickedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreFeaturedCharacterWidget::execGetCharacterViewData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStoreFeaturedCharacterViewData*)Z_Param__Result=P_THIS->GetCharacterViewData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCharacterWidget::execSetCharacterData)
	{
		P_GET_STRUCT_REF(FStoreFeaturedCharacterViewData,Z_Param_Out_characterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterData_Implementation(Z_Param_Out_characterData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreFeaturedCharacterWidget_SetCharacterData = FName(TEXT("SetCharacterData"));
	void UCoreStoreFeaturedCharacterWidget::SetCharacterData(FStoreFeaturedCharacterViewData const& characterData)
	{
		CoreStoreFeaturedCharacterWidget_eventSetCharacterData_Parms Parms;
		Parms.characterData=characterData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreFeaturedCharacterWidget_SetCharacterData),&Parms);
	}
	void UCoreStoreFeaturedCharacterWidget::StaticRegisterNativesUCoreStoreFeaturedCharacterWidget()
	{
		UClass* Class = UCoreStoreFeaturedCharacterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterViewData", &UCoreStoreFeaturedCharacterWidget::execGetCharacterViewData },
			{ "SetCharacterData", &UCoreStoreFeaturedCharacterWidget::execSetCharacterData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics
	{
		struct CoreStoreFeaturedCharacterWidget_eventGetCharacterViewData_Parms
		{
			FStoreFeaturedCharacterViewData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCharacterWidget_eventGetCharacterViewData_Parms, ReturnValue), Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget, nullptr, "GetCharacterViewData", nullptr, nullptr, sizeof(CoreStoreFeaturedCharacterWidget_eventGetCharacterViewData_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::NewProp_characterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::NewProp_characterData = { "characterData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCharacterWidget_eventSetCharacterData_Parms, characterData), Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::NewProp_characterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::NewProp_characterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::NewProp_characterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget, nullptr, "SetCharacterData", nullptr, nullptr, sizeof(CoreStoreFeaturedCharacterWidget_eventSetCharacterData_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_NoRegister()
	{
		return UCoreStoreFeaturedCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTransitionButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransitionButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransitionButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_GetCharacterViewData, "GetCharacterViewData" }, // 3998073921
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCharacterWidget_SetCharacterData, "SetCharacterData" }, // 2663383087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreFeaturedCharacterWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_OnTransitionButtonClickedDelegate_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCharacterWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_OnTransitionButtonClickedDelegate = { "OnTransitionButtonClickedDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCharacterWidget, OnTransitionButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnTransitionButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_OnTransitionButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_OnTransitionButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_TransitionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedCharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_TransitionButton = { "TransitionButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCharacterWidget, TransitionButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_TransitionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_TransitionButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_OnTransitionButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::NewProp_TransitionButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreFeaturedCharacterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::ClassParams = {
		&UCoreStoreFeaturedCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreFeaturedCharacterWidget, 3154352097);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreFeaturedCharacterWidget>()
	{
		return UCoreStoreFeaturedCharacterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreFeaturedCharacterWidget(Z_Construct_UClass_UCoreStoreFeaturedCharacterWidget, &UCoreStoreFeaturedCharacterWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreFeaturedCharacterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreFeaturedCharacterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
