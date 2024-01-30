// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EBillboardMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBillboardMode() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EBillboardMode();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EBillboardMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EBillboardMode, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EBillboardMode"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EBillboardMode>()
	{
		return EBillboardMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBillboardMode(EBillboardMode_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EBillboardMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EBillboardMode_Hash() { return 3082309623U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EBillboardMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBillboardMode"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EBillboardMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBillboardMode::OuterShell", (int64)EBillboardMode::OuterShell },
				{ "EBillboardMode::Foliage", (int64)EBillboardMode::Foliage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Foliage.Name", "EBillboardMode::Foliage" },
				{ "ModuleRelativePath", "Public/EBillboardMode.h" },
				{ "OuterShell.Name", "EBillboardMode::OuterShell" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EBillboardMode",
				"EBillboardMode",
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
