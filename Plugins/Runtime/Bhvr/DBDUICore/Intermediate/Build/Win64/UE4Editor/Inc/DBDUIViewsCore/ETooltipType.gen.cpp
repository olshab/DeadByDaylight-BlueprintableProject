// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ETooltipType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETooltipType() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipType();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* ETooltipType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_ETooltipType, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("ETooltipType"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<ETooltipType>()
	{
		return ETooltipType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETooltipType(ETooltipType_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("ETooltipType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_ETooltipType_Hash() { return 502717161U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETooltipType"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_ETooltipType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETooltipType::None", (int64)ETooltipType::None },
				{ "ETooltipType::ArchiveCompendium", (int64)ETooltipType::ArchiveCompendium },
				{ "ETooltipType::ArchiveNode", (int64)ETooltipType::ArchiveNode },
				{ "ETooltipType::ArchiveRewardNode", (int64)ETooltipType::ArchiveRewardNode },
				{ "ETooltipType::Character", (int64)ETooltipType::Character },
				{ "ETooltipType::CurrencyProgression", (int64)ETooltipType::CurrencyProgression },
				{ "ETooltipType::Customization", (int64)ETooltipType::Customization },
				{ "ETooltipType::Label", (int64)ETooltipType::Label },
				{ "ETooltipType::Loadout", (int64)ETooltipType::Loadout },
				{ "ETooltipType::PlayerLevel", (int64)ETooltipType::PlayerLevel },
				{ "ETooltipType::Rank", (int64)ETooltipType::Rank },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArchiveCompendium.Name", "ETooltipType::ArchiveCompendium" },
				{ "ArchiveNode.Name", "ETooltipType::ArchiveNode" },
				{ "ArchiveRewardNode.Name", "ETooltipType::ArchiveRewardNode" },
				{ "BlueprintType", "true" },
				{ "Character.Name", "ETooltipType::Character" },
				{ "CurrencyProgression.Name", "ETooltipType::CurrencyProgression" },
				{ "Customization.Name", "ETooltipType::Customization" },
				{ "Label.Name", "ETooltipType::Label" },
				{ "Loadout.Name", "ETooltipType::Loadout" },
				{ "ModuleRelativePath", "Public/ETooltipType.h" },
				{ "None.Name", "ETooltipType::None" },
				{ "PlayerLevel.Name", "ETooltipType::PlayerLevel" },
				{ "Rank.Name", "ETooltipType::Rank" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"ETooltipType",
				"ETooltipType",
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
