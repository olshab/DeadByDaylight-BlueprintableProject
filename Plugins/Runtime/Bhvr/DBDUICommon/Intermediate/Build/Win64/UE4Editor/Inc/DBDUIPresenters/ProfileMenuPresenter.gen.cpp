// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ProfileMenuPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EProfileMenuState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuStatsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProfileMenuPresenter::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProfileMenuPresenter::execOnSettingsButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProfileMenuPresenter::execSetMenuState)
	{
		P_GET_ENUM(EProfileMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuState(EProfileMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	void UProfileMenuPresenter::StaticRegisterNativesUProfileMenuPresenter()
	{
		UClass* Class = UProfileMenuPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackButtonClicked", &UProfileMenuPresenter::execOnBackButtonClicked },
			{ "OnSettingsButtonClicked", &UProfileMenuPresenter::execOnSettingsButtonClicked },
			{ "SetMenuState", &UProfileMenuPresenter::execSetMenuState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuPresenter, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuPresenter, nullptr, "OnSettingsButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics
	{
		struct ProfileMenuPresenter_eventSetMenuState_Parms
		{
			EProfileMenuState menuState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuPresenter_eventSetMenuState_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EProfileMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuPresenter, nullptr, "SetMenuState", nullptr, nullptr, sizeof(ProfileMenuPresenter_eventSetMenuState_Parms), Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuPresenter_NoRegister()
	{
		return UProfileMenuPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProfileMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statsSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statsSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__badgeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__badgeSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bannerSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bannerSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeSubPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuPresenter_OnBackButtonClicked, "OnBackButtonClicked" }, // 3023934583
		{ &Z_Construct_UFunction_UProfileMenuPresenter_OnSettingsButtonClicked, "OnSettingsButtonClicked" }, // 394200619
		{ &Z_Construct_UFunction_UProfileMenuPresenter_SetMenuState, "SetMenuState" }, // 2599882120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProfileMenuPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp_ProfileMenuWidgetClass_MetaData[] = {
		{ "Category", "ProfileMenuPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp_ProfileMenuWidgetClass = { "ProfileMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPresenter, ProfileMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp_ProfileMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp_ProfileMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__statsSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileMenuPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__statsSubPresenter = { "_statsSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPresenter, _statsSubPresenter), Z_Construct_UClass_UProfileMenuStatsSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__statsSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__statsSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__badgeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileMenuPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__badgeSubPresenter = { "_badgeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPresenter, _badgeSubPresenter), Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__badgeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__badgeSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__bannerSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileMenuPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__bannerSubPresenter = { "_bannerSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPresenter, _bannerSubPresenter), Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__bannerSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__bannerSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileMenuPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__activeSubPresenter = { "_activeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPresenter, _activeSubPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileMenuPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp_ProfileMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__statsSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__badgeSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__bannerSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPresenter_Statics::NewProp__activeSubPresenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileMenuPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuPresenter_Statics::ClassParams = {
		&UProfileMenuPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProfileMenuPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuPresenter, 1880061607);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UProfileMenuPresenter>()
	{
		return UProfileMenuPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuPresenter(Z_Construct_UClass_UProfileMenuPresenter, &UProfileMenuPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UProfileMenuPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
