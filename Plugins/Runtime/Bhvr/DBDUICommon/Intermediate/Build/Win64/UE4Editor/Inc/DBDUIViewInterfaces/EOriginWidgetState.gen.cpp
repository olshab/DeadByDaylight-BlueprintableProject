// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EOriginWidgetState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOriginWidgetState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EOriginWidgetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EOriginWidgetState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EOriginWidgetState>()
	{
		return EOriginWidgetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOriginWidgetState(EOriginWidgetState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EOriginWidgetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState_Hash() { return 3034160757U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOriginWidgetState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOriginWidgetState::None", (int64)EOriginWidgetState::None },
				{ "EOriginWidgetState::CurrencyPurchase", (int64)EOriginWidgetState::CurrencyPurchase },
				{ "EOriginWidgetState::Store", (int64)EOriginWidgetState::Store },
				{ "EOriginWidgetState::Archives", (int64)EOriginWidgetState::Archives },
				{ "EOriginWidgetState::Gameplay", (int64)EOriginWidgetState::Gameplay },
				{ "EOriginWidgetState::MilestonePoints", (int64)EOriginWidgetState::MilestonePoints },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Archives.Name", "EOriginWidgetState::Archives" },
				{ "BlueprintType", "true" },
				{ "CurrencyPurchase.Name", "EOriginWidgetState::CurrencyPurchase" },
				{ "Gameplay.Name", "EOriginWidgetState::Gameplay" },
				{ "MilestonePoints.Name", "EOriginWidgetState::MilestonePoints" },
				{ "ModuleRelativePath", "Public/EOriginWidgetState.h" },
				{ "None.Name", "EOriginWidgetState::None" },
				{ "Store.Name", "EOriginWidgetState::Store" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EOriginWidgetState",
				"EOriginWidgetState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
