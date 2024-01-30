// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EStoreItemLayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreItemLayout() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EStoreItemLayout_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EStoreItemLayout"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EStoreItemLayout>()
	{
		return EStoreItemLayout_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreItemLayout(EStoreItemLayout_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EStoreItemLayout"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout_Hash() { return 380561625U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreItemLayout"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreItemLayout::None", (int64)EStoreItemLayout::None },
				{ "EStoreItemLayout::OwnedTag", (int64)EStoreItemLayout::OwnedTag },
				{ "EStoreItemLayout::LockedTag", (int64)EStoreItemLayout::LockedTag },
				{ "EStoreItemLayout::TimerTags", (int64)EStoreItemLayout::TimerTags },
				{ "EStoreItemLayout::PriceTags", (int64)EStoreItemLayout::PriceTags },
				{ "EStoreItemLayout::EventCheckmarkTag", (int64)EStoreItemLayout::EventCheckmarkTag },
				{ "EStoreItemLayout::EventIconTag", (int64)EStoreItemLayout::EventIconTag },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EventCheckmarkTag.Name", "EStoreItemLayout::EventCheckmarkTag" },
				{ "EventIconTag.Name", "EStoreItemLayout::EventIconTag" },
				{ "LockedTag.Name", "EStoreItemLayout::LockedTag" },
				{ "ModuleRelativePath", "Public/EStoreItemLayout.h" },
				{ "None.Name", "EStoreItemLayout::None" },
				{ "OwnedTag.Name", "EStoreItemLayout::OwnedTag" },
				{ "PriceTags.Name", "EStoreItemLayout::PriceTags" },
				{ "TimerTags.Name", "EStoreItemLayout::TimerTags" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EStoreItemLayout",
				"EStoreItemLayout",
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
