// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EWeightsFromColorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWeightsFromColorComponent() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EWeightsFromColorComponent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EWeightsFromColorComponent"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EWeightsFromColorComponent>()
	{
		return EWeightsFromColorComponent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeightsFromColorComponent(EWeightsFromColorComponent_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EWeightsFromColorComponent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent_Hash() { return 1664502026U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeightsFromColorComponent"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeightsFromColorComponent::Red", (int64)EWeightsFromColorComponent::Red },
				{ "EWeightsFromColorComponent::Green", (int64)EWeightsFromColorComponent::Green },
				{ "EWeightsFromColorComponent::Blue", (int64)EWeightsFromColorComponent::Blue },
				{ "EWeightsFromColorComponent::Alpha", (int64)EWeightsFromColorComponent::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Name", "EWeightsFromColorComponent::Alpha" },
				{ "Blue.Name", "EWeightsFromColorComponent::Blue" },
				{ "BlueprintType", "true" },
				{ "Green.Name", "EWeightsFromColorComponent::Green" },
				{ "ModuleRelativePath", "Public/EWeightsFromColorComponent.h" },
				{ "Red.Name", "EWeightsFromColorComponent::Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EWeightsFromColorComponent",
				"EWeightsFromColorComponent",
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
