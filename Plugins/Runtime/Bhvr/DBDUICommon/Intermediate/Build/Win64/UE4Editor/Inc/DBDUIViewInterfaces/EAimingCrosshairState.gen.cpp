// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EAimingCrosshairState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAimingCrosshairState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EAimingCrosshairState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EAimingCrosshairState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EAimingCrosshairState>()
	{
		return EAimingCrosshairState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAimingCrosshairState(EAimingCrosshairState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EAimingCrosshairState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState_Hash() { return 4104650165U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAimingCrosshairState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAimingCrosshairState::Hidden", (int64)EAimingCrosshairState::Hidden },
				{ "EAimingCrosshairState::NoTarget", (int64)EAimingCrosshairState::NoTarget },
				{ "EAimingCrosshairState::Cooldown", (int64)EAimingCrosshairState::Cooldown },
				{ "EAimingCrosshairState::Assimilating", (int64)EAimingCrosshairState::Assimilating },
				{ "EAimingCrosshairState::Teleporting", (int64)EAimingCrosshairState::Teleporting },
				{ "EAimingCrosshairState::ProgressPaused", (int64)EAimingCrosshairState::ProgressPaused },
				{ "EAimingCrosshairState::LockedOut", (int64)EAimingCrosshairState::LockedOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Assimilating.Name", "EAimingCrosshairState::Assimilating" },
				{ "BlueprintType", "true" },
				{ "Cooldown.Name", "EAimingCrosshairState::Cooldown" },
				{ "Hidden.Name", "EAimingCrosshairState::Hidden" },
				{ "LockedOut.Name", "EAimingCrosshairState::LockedOut" },
				{ "ModuleRelativePath", "Public/EAimingCrosshairState.h" },
				{ "NoTarget.Name", "EAimingCrosshairState::NoTarget" },
				{ "ProgressPaused.Name", "EAimingCrosshairState::ProgressPaused" },
				{ "Teleporting.Name", "EAimingCrosshairState::Teleporting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EAimingCrosshairState",
				"EAimingCrosshairState",
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
