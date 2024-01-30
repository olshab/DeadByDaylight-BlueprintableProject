// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EOutputDDSCompressionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOutputDDSCompressionType() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EOutputDDSCompressionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EOutputDDSCompressionType"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EOutputDDSCompressionType>()
	{
		return EOutputDDSCompressionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutputDDSCompressionType(EOutputDDSCompressionType_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EOutputDDSCompressionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType_Hash() { return 56200098U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutputDDSCompressionType"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOutputDDSCompressionType::NoCompression", (int64)EOutputDDSCompressionType::NoCompression },
				{ "EOutputDDSCompressionType::BC1", (int64)EOutputDDSCompressionType::BC1 },
				{ "EOutputDDSCompressionType::BC2", (int64)EOutputDDSCompressionType::BC2 },
				{ "EOutputDDSCompressionType::BC3", (int64)EOutputDDSCompressionType::BC3 },
				{ "EOutputDDSCompressionType::BC4", (int64)EOutputDDSCompressionType::BC4 },
				{ "EOutputDDSCompressionType::BC5", (int64)EOutputDDSCompressionType::BC5 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BC1.Name", "EOutputDDSCompressionType::BC1" },
				{ "BC2.Name", "EOutputDDSCompressionType::BC2" },
				{ "BC3.Name", "EOutputDDSCompressionType::BC3" },
				{ "BC4.Name", "EOutputDDSCompressionType::BC4" },
				{ "BC5.Name", "EOutputDDSCompressionType::BC5" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EOutputDDSCompressionType.h" },
				{ "NoCompression.Name", "EOutputDDSCompressionType::NoCompression" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EOutputDDSCompressionType",
				"EOutputDDSCompressionType",
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
