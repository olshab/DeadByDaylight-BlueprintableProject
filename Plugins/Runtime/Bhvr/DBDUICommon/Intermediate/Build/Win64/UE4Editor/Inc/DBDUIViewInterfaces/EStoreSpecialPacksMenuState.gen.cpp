// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EStoreSpecialPacksMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreSpecialPacksMenuState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreSpecialPacksMenuState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EStoreSpecialPacksMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EStoreSpecialPacksMenuState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EStoreSpecialPacksMenuState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EStoreSpecialPacksMenuState>()
	{
		return EStoreSpecialPacksMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreSpecialPacksMenuState(EStoreSpecialPacksMenuState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EStoreSpecialPacksMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreSpecialPacksMenuState_Hash() { return 3639481079U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreSpecialPacksMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreSpecialPacksMenuState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreSpecialPacksMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreSpecialPacksMenuState::Special", (int64)EStoreSpecialPacksMenuState::Special },
				{ "EStoreSpecialPacksMenuState::Chapter", (int64)EStoreSpecialPacksMenuState::Chapter },
				{ "EStoreSpecialPacksMenuState::Heritage", (int64)EStoreSpecialPacksMenuState::Heritage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chapter.Name", "EStoreSpecialPacksMenuState::Chapter" },
				{ "Heritage.Name", "EStoreSpecialPacksMenuState::Heritage" },
				{ "ModuleRelativePath", "Public/EStoreSpecialPacksMenuState.h" },
				{ "Special.Name", "EStoreSpecialPacksMenuState::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EStoreSpecialPacksMenuState",
				"EStoreSpecialPacksMenuState",
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
