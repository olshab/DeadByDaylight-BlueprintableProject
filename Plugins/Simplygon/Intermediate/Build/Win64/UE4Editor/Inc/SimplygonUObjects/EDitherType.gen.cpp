// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EDitherType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDitherType() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EDitherType();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EDitherType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EDitherType, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EDitherType"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EDitherType>()
	{
		return EDitherType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDitherType(EDitherType_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EDitherType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EDitherType_Hash() { return 3505430417U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EDitherType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDitherType"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EDitherType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDitherType::NoDither", (int64)EDitherType::NoDither },
				{ "EDitherType::FloydSteinberg", (int64)EDitherType::FloydSteinberg },
				{ "EDitherType::JarvisJudiceNinke", (int64)EDitherType::JarvisJudiceNinke },
				{ "EDitherType::Sierra", (int64)EDitherType::Sierra },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FloydSteinberg.Name", "EDitherType::FloydSteinberg" },
				{ "JarvisJudiceNinke.Name", "EDitherType::JarvisJudiceNinke" },
				{ "ModuleRelativePath", "Public/EDitherType.h" },
				{ "NoDither.Name", "EDitherType::NoDither" },
				{ "Sierra.Name", "EDitherType::Sierra" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EDitherType",
				"EDitherType",
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
