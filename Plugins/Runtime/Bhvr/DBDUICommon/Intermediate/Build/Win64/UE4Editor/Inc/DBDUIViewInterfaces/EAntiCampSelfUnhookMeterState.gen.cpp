// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EAntiCampSelfUnhookMeterState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAntiCampSelfUnhookMeterState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EAntiCampSelfUnhookMeterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EAntiCampSelfUnhookMeterState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EAntiCampSelfUnhookMeterState>()
	{
		return EAntiCampSelfUnhookMeterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAntiCampSelfUnhookMeterState(EAntiCampSelfUnhookMeterState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EAntiCampSelfUnhookMeterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState_Hash() { return 1432534436U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAntiCampSelfUnhookMeterState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAntiCampSelfUnhookMeterState::Hidden", (int64)EAntiCampSelfUnhookMeterState::Hidden },
				{ "EAntiCampSelfUnhookMeterState::FillingUp", (int64)EAntiCampSelfUnhookMeterState::FillingUp },
				{ "EAntiCampSelfUnhookMeterState::Stopped", (int64)EAntiCampSelfUnhookMeterState::Stopped },
				{ "EAntiCampSelfUnhookMeterState::Full", (int64)EAntiCampSelfUnhookMeterState::Full },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FillingUp.Name", "EAntiCampSelfUnhookMeterState::FillingUp" },
				{ "Full.Name", "EAntiCampSelfUnhookMeterState::Full" },
				{ "Hidden.Name", "EAntiCampSelfUnhookMeterState::Hidden" },
				{ "ModuleRelativePath", "Public/EAntiCampSelfUnhookMeterState.h" },
				{ "Stopped.Name", "EAntiCampSelfUnhookMeterState::Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EAntiCampSelfUnhookMeterState",
				"EAntiCampSelfUnhookMeterState",
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
