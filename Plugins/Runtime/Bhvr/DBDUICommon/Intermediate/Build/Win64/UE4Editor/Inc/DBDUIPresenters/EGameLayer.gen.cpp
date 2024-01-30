// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EGameLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameLayer() {}
// Cross Module References
	DBDUIPRESENTERS_API UEnum* Z_Construct_UEnum_DBDUIPresenters_EGameLayer();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	static UEnum* EGameLayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIPresenters_EGameLayer, Z_Construct_UPackage__Script_DBDUIPresenters(), TEXT("EGameLayer"));
		}
		return Singleton;
	}
	template<> DBDUIPRESENTERS_API UEnum* StaticEnum<EGameLayer>()
	{
		return EGameLayer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameLayer(EGameLayer_StaticEnum, TEXT("/Script/DBDUIPresenters"), TEXT("EGameLayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIPresenters_EGameLayer_Hash() { return 3778566401U; }
	UEnum* Z_Construct_UEnum_DBDUIPresenters_EGameLayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIPresenters();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameLayer"), 0, Get_Z_Construct_UEnum_DBDUIPresenters_EGameLayer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameLayer::Default", (int64)EGameLayer::Default },
				{ "EGameLayer::Overlay", (int64)EGameLayer::Overlay },
				{ "EGameLayer::UMGPopup", (int64)EGameLayer::UMGPopup },
				{ "EGameLayer::HighOverlay", (int64)EGameLayer::HighOverlay },
				{ "EGameLayer::Alerts", (int64)EGameLayer::Alerts },
				{ "EGameLayer::Tooltip", (int64)EGameLayer::Tooltip },
				{ "EGameLayer::Watermark", (int64)EGameLayer::Watermark },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alerts.Name", "EGameLayer::Alerts" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EGameLayer::Default" },
				{ "HighOverlay.Name", "EGameLayer::HighOverlay" },
				{ "ModuleRelativePath", "Public/EGameLayer.h" },
				{ "Overlay.Name", "EGameLayer::Overlay" },
				{ "Tooltip.Name", "EGameLayer::Tooltip" },
				{ "UMGPopup.Name", "EGameLayer::UMGPopup" },
				{ "Watermark.Name", "EGameLayer::Watermark" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIPresenters,
				nullptr,
				"EGameLayer",
				"EGameLayer",
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
