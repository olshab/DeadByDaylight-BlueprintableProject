// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EPresenterPhase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPresenterPhase() {}
// Cross Module References
	DBDUIPRESENTERS_API UEnum* Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	static UEnum* EPresenterPhase_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase, Z_Construct_UPackage__Script_DBDUIPresenters(), TEXT("EPresenterPhase"));
		}
		return Singleton;
	}
	template<> DBDUIPRESENTERS_API UEnum* StaticEnum<EPresenterPhase>()
	{
		return EPresenterPhase_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPresenterPhase(EPresenterPhase_StaticEnum, TEXT("/Script/DBDUIPresenters"), TEXT("EPresenterPhase"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase_Hash() { return 4126568459U; }
	UEnum* Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIPresenters();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPresenterPhase"), 0, Get_Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPresenterPhase::Initialization", (int64)EPresenterPhase::Initialization },
				{ "EPresenterPhase::StartPresenting", (int64)EPresenterPhase::StartPresenting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Initialization.Name", "EPresenterPhase::Initialization" },
				{ "ModuleRelativePath", "Public/EPresenterPhase.h" },
				{ "StartPresenting.Name", "EPresenterPhase::StartPresenting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIPresenters,
				nullptr,
				"EPresenterPhase",
				"EPresenterPhase",
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
