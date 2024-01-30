// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EButtonWidgetVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEButtonWidgetVisibility() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* EButtonWidgetVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("EButtonWidgetVisibility"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EButtonWidgetVisibility>()
	{
		return EButtonWidgetVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonWidgetVisibility(EButtonWidgetVisibility_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("EButtonWidgetVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility_Hash() { return 2840382440U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonWidgetVisibility"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonWidgetVisibility::Visible", (int64)EButtonWidgetVisibility::Visible },
				{ "EButtonWidgetVisibility::Collapsed", (int64)EButtonWidgetVisibility::Collapsed },
				{ "EButtonWidgetVisibility::Hidden", (int64)EButtonWidgetVisibility::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collapsed.Name", "EButtonWidgetVisibility::Collapsed" },
				{ "Hidden.Name", "EButtonWidgetVisibility::Hidden" },
				{ "ModuleRelativePath", "Public/EButtonWidgetVisibility.h" },
				{ "Visible.Name", "EButtonWidgetVisibility::Visible" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"EButtonWidgetVisibility",
				"EButtonWidgetVisibility",
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
