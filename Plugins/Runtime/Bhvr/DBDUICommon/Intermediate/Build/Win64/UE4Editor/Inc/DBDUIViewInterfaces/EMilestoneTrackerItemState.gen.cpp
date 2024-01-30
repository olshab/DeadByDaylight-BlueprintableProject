// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EMilestoneTrackerItemState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMilestoneTrackerItemState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EMilestoneTrackerItemState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EMilestoneTrackerItemState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EMilestoneTrackerItemState>()
	{
		return EMilestoneTrackerItemState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMilestoneTrackerItemState(EMilestoneTrackerItemState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EMilestoneTrackerItemState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState_Hash() { return 1210464301U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMilestoneTrackerItemState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMilestoneTrackerItemState::Unlocked", (int64)EMilestoneTrackerItemState::Unlocked },
				{ "EMilestoneTrackerItemState::InProgress", (int64)EMilestoneTrackerItemState::InProgress },
				{ "EMilestoneTrackerItemState::Locked", (int64)EMilestoneTrackerItemState::Locked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InProgress.Name", "EMilestoneTrackerItemState::InProgress" },
				{ "Locked.Name", "EMilestoneTrackerItemState::Locked" },
				{ "ModuleRelativePath", "Public/EMilestoneTrackerItemState.h" },
				{ "Unlocked.Name", "EMilestoneTrackerItemState::Unlocked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EMilestoneTrackerItemState",
				"EMilestoneTrackerItemState",
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
