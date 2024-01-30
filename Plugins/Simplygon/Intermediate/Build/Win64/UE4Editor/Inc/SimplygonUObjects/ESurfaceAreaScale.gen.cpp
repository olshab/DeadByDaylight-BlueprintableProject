// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ESurfaceAreaScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESurfaceAreaScale() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* ESurfaceAreaScale_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ESurfaceAreaScale"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<ESurfaceAreaScale>()
	{
		return ESurfaceAreaScale_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESurfaceAreaScale(ESurfaceAreaScale_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("ESurfaceAreaScale"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale_Hash() { return 2852788734U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESurfaceAreaScale"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESurfaceAreaScale::LargestInstance", (int64)ESurfaceAreaScale::LargestInstance },
				{ "ESurfaceAreaScale::SmallestInstance", (int64)ESurfaceAreaScale::SmallestInstance },
				{ "ESurfaceAreaScale::Average", (int64)ESurfaceAreaScale::Average },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.Name", "ESurfaceAreaScale::Average" },
				{ "BlueprintType", "true" },
				{ "LargestInstance.Name", "ESurfaceAreaScale::LargestInstance" },
				{ "ModuleRelativePath", "Public/ESurfaceAreaScale.h" },
				{ "SmallestInstance.Name", "ESurfaceAreaScale::SmallestInstance" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"ESurfaceAreaScale",
				"ESurfaceAreaScale",
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
