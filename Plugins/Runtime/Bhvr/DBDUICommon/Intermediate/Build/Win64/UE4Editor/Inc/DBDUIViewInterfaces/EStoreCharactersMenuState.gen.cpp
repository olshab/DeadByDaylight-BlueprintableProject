// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EStoreCharactersMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreCharactersMenuState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCharactersMenuState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EStoreCharactersMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCharactersMenuState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EStoreCharactersMenuState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EStoreCharactersMenuState>()
	{
		return EStoreCharactersMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreCharactersMenuState(EStoreCharactersMenuState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EStoreCharactersMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCharactersMenuState_Hash() { return 1089186415U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCharactersMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreCharactersMenuState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreCharactersMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreCharactersMenuState::Selection", (int64)EStoreCharactersMenuState::Selection },
				{ "EStoreCharactersMenuState::Customizations", (int64)EStoreCharactersMenuState::Customizations },
				{ "EStoreCharactersMenuState::Bio", (int64)EStoreCharactersMenuState::Bio },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bio.Name", "EStoreCharactersMenuState::Bio" },
				{ "BlueprintType", "true" },
				{ "Customizations.Name", "EStoreCharactersMenuState::Customizations" },
				{ "ModuleRelativePath", "Public/EStoreCharactersMenuState.h" },
				{ "Selection.Name", "EStoreCharactersMenuState::Selection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EStoreCharactersMenuState",
				"EStoreCharactersMenuState",
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
