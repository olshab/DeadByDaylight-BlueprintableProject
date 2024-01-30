// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EHoleFilling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoleFilling() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EHoleFilling();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EHoleFilling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EHoleFilling, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EHoleFilling"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EHoleFilling>()
	{
		return EHoleFilling_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoleFilling(EHoleFilling_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EHoleFilling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EHoleFilling_Hash() { return 2689880923U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EHoleFilling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoleFilling"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EHoleFilling_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoleFilling::Disabled", (int64)EHoleFilling::Disabled },
				{ "EHoleFilling::Low", (int64)EHoleFilling::Low },
				{ "EHoleFilling::Medium", (int64)EHoleFilling::Medium },
				{ "EHoleFilling::High", (int64)EHoleFilling::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "EHoleFilling::Disabled" },
				{ "High.Name", "EHoleFilling::High" },
				{ "Low.Name", "EHoleFilling::Low" },
				{ "Medium.Name", "EHoleFilling::Medium" },
				{ "ModuleRelativePath", "Public/EHoleFilling.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EHoleFilling",
				"EHoleFilling",
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
