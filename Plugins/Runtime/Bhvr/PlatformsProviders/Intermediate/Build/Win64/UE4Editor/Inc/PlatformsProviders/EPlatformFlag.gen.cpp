// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformsProviders/Public/EPlatformFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlatformFlag() {}
// Cross Module References
	PLATFORMSPROVIDERS_API UEnum* Z_Construct_UEnum_PlatformsProviders_EPlatformFlag();
	UPackage* Z_Construct_UPackage__Script_PlatformsProviders();
// End Cross Module References
	static UEnum* EPlatformFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlatformsProviders_EPlatformFlag, Z_Construct_UPackage__Script_PlatformsProviders(), TEXT("EPlatformFlag"));
		}
		return Singleton;
	}
	template<> PLATFORMSPROVIDERS_API UEnum* StaticEnum<EPlatformFlag>()
	{
		return EPlatformFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlatformFlag(EPlatformFlag_StaticEnum, TEXT("/Script/PlatformsProviders"), TEXT("EPlatformFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlatformsProviders_EPlatformFlag_Hash() { return 2414565762U; }
	UEnum* Z_Construct_UEnum_PlatformsProviders_EPlatformFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformsProviders();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlatformFlag"), 0, Get_Z_Construct_UEnum_PlatformsProviders_EPlatformFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlatformFlag::None", (int64)EPlatformFlag::None },
				{ "EPlatformFlag::Android", (int64)EPlatformFlag::Android },
				{ "EPlatformFlag::DMM", (int64)EPlatformFlag::DMM },
				{ "EPlatformFlag::IOS", (int64)EPlatformFlag::IOS },
				{ "EPlatformFlag::Switch", (int64)EPlatformFlag::Switch },
				{ "EPlatformFlag::PS4", (int64)EPlatformFlag::PS4 },
				{ "EPlatformFlag::Steam", (int64)EPlatformFlag::Steam },
				{ "EPlatformFlag::WinGDK", (int64)EPlatformFlag::WinGDK },
				{ "EPlatformFlag::Xbox", (int64)EPlatformFlag::Xbox },
				{ "EPlatformFlag::PS5", (int64)EPlatformFlag::PS5 },
				{ "EPlatformFlag::XSX", (int64)EPlatformFlag::XSX },
				{ "EPlatformFlag::Epic", (int64)EPlatformFlag::Epic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Android.Name", "EPlatformFlag::Android" },
				{ "DMM.Name", "EPlatformFlag::DMM" },
				{ "Epic.Name", "EPlatformFlag::Epic" },
				{ "IOS.Name", "EPlatformFlag::IOS" },
				{ "ModuleRelativePath", "Public/EPlatformFlag.h" },
				{ "None.Name", "EPlatformFlag::None" },
				{ "PS4.Name", "EPlatformFlag::PS4" },
				{ "PS5.Name", "EPlatformFlag::PS5" },
				{ "Steam.Name", "EPlatformFlag::Steam" },
				{ "Switch.Name", "EPlatformFlag::Switch" },
				{ "WinGDK.Name", "EPlatformFlag::WinGDK" },
				{ "Xbox.Name", "EPlatformFlag::Xbox" },
				{ "XSX.Name", "EPlatformFlag::XSX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlatformsProviders,
				nullptr,
				"EPlatformFlag",
				"EPlatformFlag",
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
