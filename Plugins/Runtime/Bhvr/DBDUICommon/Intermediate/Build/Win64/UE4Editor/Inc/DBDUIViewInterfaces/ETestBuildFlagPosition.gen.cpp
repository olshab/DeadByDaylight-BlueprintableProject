// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ETestBuildFlagPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETestBuildFlagPosition() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_ETestBuildFlagPosition();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* ETestBuildFlagPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_ETestBuildFlagPosition, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ETestBuildFlagPosition"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<ETestBuildFlagPosition>()
	{
		return ETestBuildFlagPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETestBuildFlagPosition(ETestBuildFlagPosition_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ETestBuildFlagPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_ETestBuildFlagPosition_Hash() { return 936559284U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_ETestBuildFlagPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETestBuildFlagPosition"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_ETestBuildFlagPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETestBuildFlagPosition::Hud", (int64)ETestBuildFlagPosition::Hud },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hud.Name", "ETestBuildFlagPosition::Hud" },
				{ "ModuleRelativePath", "Public/ETestBuildFlagPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"ETestBuildFlagPosition",
				"ETestBuildFlagPosition",
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
