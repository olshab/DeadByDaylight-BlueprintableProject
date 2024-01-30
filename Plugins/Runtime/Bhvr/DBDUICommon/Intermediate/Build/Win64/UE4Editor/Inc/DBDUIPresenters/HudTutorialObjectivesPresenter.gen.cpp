// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudTutorialObjectivesPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudTutorialObjectivesPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudTutorialObjectivesPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudTutorialObjectivesPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudTutorialObjectivesPresenter::execIsInTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTutorial();
		P_NATIVE_END;
	}
	void UHudTutorialObjectivesPresenter::StaticRegisterNativesUHudTutorialObjectivesPresenter()
	{
		UClass* Class = UHudTutorialObjectivesPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInTutorial", &UHudTutorialObjectivesPresenter::execIsInTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics
	{
		struct HudTutorialObjectivesPresenter_eventIsInTutorial_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HudTutorialObjectivesPresenter_eventIsInTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudTutorialObjectivesPresenter_eventIsInTutorial_Parms), &Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudTutorialObjectivesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudTutorialObjectivesPresenter, nullptr, "IsInTutorial", nullptr, nullptr, sizeof(HudTutorialObjectivesPresenter_eventIsInTutorial_Parms), Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudTutorialObjectivesPresenter_NoRegister()
	{
		return UHudTutorialObjectivesPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialObjectivesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialObjectivesWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudTutorialObjectivesPresenter_IsInTutorial, "IsInTutorial" }, // 4088920136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudTutorialObjectivesPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudTutorialObjectivesPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::NewProp_TutorialObjectivesWidgetClass_MetaData[] = {
		{ "Category", "HudTutorialObjectivesPresenter" },
		{ "ModuleRelativePath", "Public/HudTutorialObjectivesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::NewProp_TutorialObjectivesWidgetClass = { "TutorialObjectivesWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudTutorialObjectivesPresenter, TutorialObjectivesWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::NewProp_TutorialObjectivesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::NewProp_TutorialObjectivesWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::NewProp_TutorialObjectivesWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudTutorialObjectivesPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::ClassParams = {
		&UHudTutorialObjectivesPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudTutorialObjectivesPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudTutorialObjectivesPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudTutorialObjectivesPresenter, 1546043198);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudTutorialObjectivesPresenter>()
	{
		return UHudTutorialObjectivesPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudTutorialObjectivesPresenter(Z_Construct_UClass_UHudTutorialObjectivesPresenter, &UHudTutorialObjectivesPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudTutorialObjectivesPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudTutorialObjectivesPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
