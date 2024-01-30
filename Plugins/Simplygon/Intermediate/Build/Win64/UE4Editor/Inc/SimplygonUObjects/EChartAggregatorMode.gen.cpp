// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EChartAggregatorMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChartAggregatorMode() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EChartAggregatorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EChartAggregatorMode"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EChartAggregatorMode>()
	{
		return EChartAggregatorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChartAggregatorMode(EChartAggregatorMode_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EChartAggregatorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode_Hash() { return 1561609506U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChartAggregatorMode"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChartAggregatorMode::TextureSizeProportions", (int64)EChartAggregatorMode::TextureSizeProportions },
				{ "EChartAggregatorMode::SurfaceArea", (int64)EChartAggregatorMode::SurfaceArea },
				{ "EChartAggregatorMode::OriginalPixelDensity", (int64)EChartAggregatorMode::OriginalPixelDensity },
				{ "EChartAggregatorMode::UVSizeProportions", (int64)EChartAggregatorMode::UVSizeProportions },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EChartAggregatorMode.h" },
				{ "OriginalPixelDensity.Name", "EChartAggregatorMode::OriginalPixelDensity" },
				{ "SurfaceArea.Name", "EChartAggregatorMode::SurfaceArea" },
				{ "TextureSizeProportions.Name", "EChartAggregatorMode::TextureSizeProportions" },
				{ "UVSizeProportions.Name", "EChartAggregatorMode::UVSizeProportions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EChartAggregatorMode",
				"EChartAggregatorMode",
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
