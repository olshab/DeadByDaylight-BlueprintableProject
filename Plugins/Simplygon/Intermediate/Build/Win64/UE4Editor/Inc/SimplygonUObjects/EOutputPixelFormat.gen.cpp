// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EOutputPixelFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOutputPixelFormat() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EOutputPixelFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EOutputPixelFormat"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EOutputPixelFormat>()
	{
		return EOutputPixelFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutputPixelFormat(EOutputPixelFormat_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EOutputPixelFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat_Hash() { return 1965566851U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutputPixelFormat"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOutputPixelFormat::R8G8B8A8", (int64)EOutputPixelFormat::R8G8B8A8 },
				{ "EOutputPixelFormat::R8G8B8", (int64)EOutputPixelFormat::R8G8B8 },
				{ "EOutputPixelFormat::R8", (int64)EOutputPixelFormat::R8 },
				{ "EOutputPixelFormat::R16G16B16A16", (int64)EOutputPixelFormat::R16G16B16A16 },
				{ "EOutputPixelFormat::R16G16B16", (int64)EOutputPixelFormat::R16G16B16 },
				{ "EOutputPixelFormat::R16", (int64)EOutputPixelFormat::R16 },
				{ "EOutputPixelFormat::R32G32B32A32F", (int64)EOutputPixelFormat::R32G32B32A32F },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EOutputPixelFormat.h" },
				{ "R16.Name", "EOutputPixelFormat::R16" },
				{ "R16G16B16.Name", "EOutputPixelFormat::R16G16B16" },
				{ "R16G16B16A16.Name", "EOutputPixelFormat::R16G16B16A16" },
				{ "R32G32B32A32F.Name", "EOutputPixelFormat::R32G32B32A32F" },
				{ "R8.Name", "EOutputPixelFormat::R8" },
				{ "R8G8B8.Name", "EOutputPixelFormat::R8G8B8" },
				{ "R8G8B8A8.Name", "EOutputPixelFormat::R8G8B8A8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EOutputPixelFormat",
				"EOutputPixelFormat",
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
