// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EStoreCollectionsMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreCollectionsMenuState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCollectionsMenuState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EStoreCollectionsMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCollectionsMenuState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EStoreCollectionsMenuState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EStoreCollectionsMenuState>()
	{
		return EStoreCollectionsMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreCollectionsMenuState(EStoreCollectionsMenuState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EStoreCollectionsMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCollectionsMenuState_Hash() { return 1452746845U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCollectionsMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreCollectionsMenuState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCollectionsMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreCollectionsMenuState::Special", (int64)EStoreCollectionsMenuState::Special },
				{ "EStoreCollectionsMenuState::Featured", (int64)EStoreCollectionsMenuState::Featured },
				{ "EStoreCollectionsMenuState::All", (int64)EStoreCollectionsMenuState::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EStoreCollectionsMenuState::All" },
				{ "BlueprintType", "true" },
				{ "Featured.Name", "EStoreCollectionsMenuState::Featured" },
				{ "ModuleRelativePath", "Public/EStoreCollectionsMenuState.h" },
				{ "Special.Name", "EStoreCollectionsMenuState::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EStoreCollectionsMenuState",
				"EStoreCollectionsMenuState",
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
