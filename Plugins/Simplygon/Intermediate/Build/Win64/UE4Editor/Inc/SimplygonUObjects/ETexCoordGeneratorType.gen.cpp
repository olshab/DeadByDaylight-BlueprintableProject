// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ETexCoordGeneratorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETexCoordGeneratorType() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* ETexCoordGeneratorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ETexCoordGeneratorType"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<ETexCoordGeneratorType>()
	{
		return ETexCoordGeneratorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETexCoordGeneratorType(ETexCoordGeneratorType_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("ETexCoordGeneratorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType_Hash() { return 4202467632U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETexCoordGeneratorType"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETexCoordGeneratorType::Parameterizer", (int64)ETexCoordGeneratorType::Parameterizer },
				{ "ETexCoordGeneratorType::ChartAggregator", (int64)ETexCoordGeneratorType::ChartAggregator },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChartAggregator.Name", "ETexCoordGeneratorType::ChartAggregator" },
				{ "ModuleRelativePath", "Public/ETexCoordGeneratorType.h" },
				{ "Parameterizer.Name", "ETexCoordGeneratorType::Parameterizer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"ETexCoordGeneratorType",
				"ETexCoordGeneratorType",
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
