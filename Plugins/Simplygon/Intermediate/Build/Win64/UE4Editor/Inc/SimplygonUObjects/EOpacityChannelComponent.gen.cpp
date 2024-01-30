// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EOpacityChannelComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOpacityChannelComponent() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EOpacityChannelComponent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EOpacityChannelComponent"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EOpacityChannelComponent>()
	{
		return EOpacityChannelComponent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpacityChannelComponent(EOpacityChannelComponent_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EOpacityChannelComponent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent_Hash() { return 373246144U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpacityChannelComponent"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOpacityChannelComponent::Red", (int64)EOpacityChannelComponent::Red },
				{ "EOpacityChannelComponent::Green", (int64)EOpacityChannelComponent::Green },
				{ "EOpacityChannelComponent::Blue", (int64)EOpacityChannelComponent::Blue },
				{ "EOpacityChannelComponent::Alpha", (int64)EOpacityChannelComponent::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Name", "EOpacityChannelComponent::Alpha" },
				{ "Blue.Name", "EOpacityChannelComponent::Blue" },
				{ "BlueprintType", "true" },
				{ "Green.Name", "EOpacityChannelComponent::Green" },
				{ "ModuleRelativePath", "Public/EOpacityChannelComponent.h" },
				{ "Red.Name", "EOpacityChannelComponent::Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EOpacityChannelComponent",
				"EOpacityChannelComponent",
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
