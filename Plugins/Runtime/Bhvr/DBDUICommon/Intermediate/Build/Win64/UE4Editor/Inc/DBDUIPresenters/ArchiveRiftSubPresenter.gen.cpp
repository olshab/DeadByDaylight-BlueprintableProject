// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveRiftSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveRiftSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveRiftSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveRiftSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveRiftSubPresenter::execOnBonusTierTooltipShown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBonusTierTooltipShown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRiftSubPresenter::execOnClickPurchasePremiumPass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickPurchasePremiumPass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRiftSubPresenter::execOnClickPurchaseTiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickPurchaseTiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRiftSubPresenter::execOnRewardCurrencyClicked)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardCurrencyClicked(ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRiftSubPresenter::execOnRewardItemClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardItemClicked(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRiftSubPresenter::execOnToggleOutfitDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggleOutfitDisplay();
		P_NATIVE_END;
	}
	void UArchiveRiftSubPresenter::StaticRegisterNativesUArchiveRiftSubPresenter()
	{
		UClass* Class = UArchiveRiftSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBonusTierTooltipShown", &UArchiveRiftSubPresenter::execOnBonusTierTooltipShown },
			{ "OnClickPurchasePremiumPass", &UArchiveRiftSubPresenter::execOnClickPurchasePremiumPass },
			{ "OnClickPurchaseTiers", &UArchiveRiftSubPresenter::execOnClickPurchaseTiers },
			{ "OnRewardCurrencyClicked", &UArchiveRiftSubPresenter::execOnRewardCurrencyClicked },
			{ "OnRewardItemClicked", &UArchiveRiftSubPresenter::execOnRewardItemClicked },
			{ "OnToggleOutfitDisplay", &UArchiveRiftSubPresenter::execOnToggleOutfitDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftSubPresenter, nullptr, "OnBonusTierTooltipShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftSubPresenter, nullptr, "OnClickPurchasePremiumPass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftSubPresenter, nullptr, "OnClickPurchaseTiers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics
	{
		struct ArchiveRiftSubPresenter_eventOnRewardCurrencyClicked_Parms
		{
			ECurrencyType currencyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftSubPresenter_eventOnRewardCurrencyClicked_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::NewProp_currencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftSubPresenter, nullptr, "OnRewardCurrencyClicked", nullptr, nullptr, sizeof(ArchiveRiftSubPresenter_eventOnRewardCurrencyClicked_Parms), Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics
	{
		struct ArchiveRiftSubPresenter_eventOnRewardItemClicked_Parms
		{
			FName itemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftSubPresenter_eventOnRewardItemClicked_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftSubPresenter, nullptr, "OnRewardItemClicked", nullptr, nullptr, sizeof(ArchiveRiftSubPresenter_eventOnRewardItemClicked_Parms), Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftSubPresenter, nullptr, "OnToggleOutfitDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveRiftSubPresenter_NoRegister()
	{
		return UArchiveRiftSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveRiftSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveRiftWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveRiftWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveRiftSubPresenter_OnBonusTierTooltipShown, "OnBonusTierTooltipShown" }, // 3673907502
		{ &Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchasePremiumPass, "OnClickPurchasePremiumPass" }, // 807158512
		{ &Z_Construct_UFunction_UArchiveRiftSubPresenter_OnClickPurchaseTiers, "OnClickPurchaseTiers" }, // 1179095926
		{ &Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardCurrencyClicked, "OnRewardCurrencyClicked" }, // 3977089208
		{ &Z_Construct_UFunction_UArchiveRiftSubPresenter_OnRewardItemClicked, "OnRewardItemClicked" }, // 3979680476
		{ &Z_Construct_UFunction_UArchiveRiftSubPresenter_OnToggleOutfitDisplay, "OnToggleOutfitDisplay" }, // 3941739721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveRiftSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::NewProp__archiveRiftWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveRiftSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveRiftSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::NewProp__archiveRiftWidget = { "_archiveRiftWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveRiftSubPresenter, _archiveRiftWidget), Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::NewProp__archiveRiftWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::NewProp__archiveRiftWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::NewProp__archiveRiftWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveRiftSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::ClassParams = {
		&UArchiveRiftSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveRiftSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveRiftSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveRiftSubPresenter, 3464842246);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveRiftSubPresenter>()
	{
		return UArchiveRiftSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveRiftSubPresenter(Z_Construct_UClass_UArchiveRiftSubPresenter, &UArchiveRiftSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveRiftSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveRiftSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
