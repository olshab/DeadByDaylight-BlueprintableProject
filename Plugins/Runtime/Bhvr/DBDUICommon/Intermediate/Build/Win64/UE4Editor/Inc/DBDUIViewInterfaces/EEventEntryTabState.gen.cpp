// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EEventEntryTabState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventEntryTabState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EEventEntryTabState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EEventEntryTabState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EEventEntryTabState>()
	{
		return EEventEntryTabState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventEntryTabState(EEventEntryTabState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EEventEntryTabState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState_Hash() { return 2390583635U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventEntryTabState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventEntryTabState::Event", (int64)EEventEntryTabState::Event },
				{ "EEventEntryTabState::Details", (int64)EEventEntryTabState::Details },
				{ "EEventEntryTabState::Collection", (int64)EEventEntryTabState::Collection },
				{ "EEventEntryTabState::Store", (int64)EEventEntryTabState::Store },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collection.Name", "EEventEntryTabState::Collection" },
				{ "Details.Name", "EEventEntryTabState::Details" },
				{ "Event.Name", "EEventEntryTabState::Event" },
				{ "ModuleRelativePath", "Public/EEventEntryTabState.h" },
				{ "Store.Name", "EEventEntryTabState::Store" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EEventEntryTabState",
				"EEventEntryTabState",
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
