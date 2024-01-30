// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ETooltipVerticalAlignment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETooltipVerticalAlignment() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* ETooltipVerticalAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("ETooltipVerticalAlignment"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<ETooltipVerticalAlignment>()
	{
		return ETooltipVerticalAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETooltipVerticalAlignment(ETooltipVerticalAlignment_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("ETooltipVerticalAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment_Hash() { return 1249584099U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETooltipVerticalAlignment"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETooltipVerticalAlignment::Default", (int64)ETooltipVerticalAlignment::Default },
				{ "ETooltipVerticalAlignment::Top", (int64)ETooltipVerticalAlignment::Top },
				{ "ETooltipVerticalAlignment::Bottom", (int64)ETooltipVerticalAlignment::Bottom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bottom.Name", "ETooltipVerticalAlignment::Bottom" },
				{ "Default.Name", "ETooltipVerticalAlignment::Default" },
				{ "ModuleRelativePath", "Public/ETooltipVerticalAlignment.h" },
				{ "Top.Name", "ETooltipVerticalAlignment::Top" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"ETooltipVerticalAlignment",
				"ETooltipVerticalAlignment",
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
