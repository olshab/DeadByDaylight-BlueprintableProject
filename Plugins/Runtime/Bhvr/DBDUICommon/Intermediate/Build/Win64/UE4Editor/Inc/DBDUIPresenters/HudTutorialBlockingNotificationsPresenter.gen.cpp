// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudTutorialBlockingNotificationsPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudTutorialBlockingNotificationsPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialsUtilities_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudTutorialBlockingNotificationsPresenter::execOnTutorialHudFadeInTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialHudFadeInTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudTutorialBlockingNotificationsPresenter::execOnTutorialHudFadeOutTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialHudFadeOutTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudTutorialBlockingNotificationsPresenter::execOnTutorialNotificationClosedByUserInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialNotificationClosedByUserInput();
		P_NATIVE_END;
	}
	void UHudTutorialBlockingNotificationsPresenter::StaticRegisterNativesUHudTutorialBlockingNotificationsPresenter()
	{
		UClass* Class = UHudTutorialBlockingNotificationsPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTutorialHudFadeInTriggered", &UHudTutorialBlockingNotificationsPresenter::execOnTutorialHudFadeInTriggered },
			{ "OnTutorialHudFadeOutTriggered", &UHudTutorialBlockingNotificationsPresenter::execOnTutorialHudFadeOutTriggered },
			{ "OnTutorialNotificationClosedByUserInput", &UHudTutorialBlockingNotificationsPresenter::execOnTutorialNotificationClosedByUserInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudTutorialBlockingNotificationsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter, nullptr, "OnTutorialHudFadeInTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudTutorialBlockingNotificationsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter, nullptr, "OnTutorialHudFadeOutTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudTutorialBlockingNotificationsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter, nullptr, "OnTutorialNotificationClosedByUserInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_NoRegister()
	{
		return UHudTutorialBlockingNotificationsPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreTutorialBlockingNotificationsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreTutorialBlockingNotificationsWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialsUtilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tutorialsUtilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered, "OnTutorialHudFadeInTriggered" }, // 3124429760
		{ &Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered, "OnTutorialHudFadeOutTriggered" }, // 935819577
		{ &Z_Construct_UFunction_UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput, "OnTutorialNotificationClosedByUserInput" }, // 872763981
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudTutorialBlockingNotificationsPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudTutorialBlockingNotificationsPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp_CoreTutorialBlockingNotificationsWidget_MetaData[] = {
		{ "Category", "HudTutorialBlockingNotificationsPresenter" },
		{ "ModuleRelativePath", "Public/HudTutorialBlockingNotificationsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp_CoreTutorialBlockingNotificationsWidget = { "CoreTutorialBlockingNotificationsWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudTutorialBlockingNotificationsPresenter, CoreTutorialBlockingNotificationsWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp_CoreTutorialBlockingNotificationsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp_CoreTutorialBlockingNotificationsWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp__tutorialsUtilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HudTutorialBlockingNotificationsPresenter" },
		{ "ModuleRelativePath", "Public/HudTutorialBlockingNotificationsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp__tutorialsUtilities = { "_tutorialsUtilities", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudTutorialBlockingNotificationsPresenter, _tutorialsUtilities), Z_Construct_UClass_ATutorialsUtilities_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp__tutorialsUtilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp__tutorialsUtilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp_CoreTutorialBlockingNotificationsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::NewProp__tutorialsUtilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudTutorialBlockingNotificationsPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::ClassParams = {
		&UHudTutorialBlockingNotificationsPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudTutorialBlockingNotificationsPresenter, 1082254660);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudTutorialBlockingNotificationsPresenter>()
	{
		return UHudTutorialBlockingNotificationsPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudTutorialBlockingNotificationsPresenter(Z_Construct_UClass_UHudTutorialBlockingNotificationsPresenter, &UHudTutorialBlockingNotificationsPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudTutorialBlockingNotificationsPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudTutorialBlockingNotificationsPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
