// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorsSdk/Public/EMirrorsRequestLogLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMirrorsRequestLogLevel() {}
// Cross Module References
	MIRRORSSDK_API UEnum* Z_Construct_UEnum_MirrorsSdk_EMirrorsRequestLogLevel();
	UPackage* Z_Construct_UPackage__Script_MirrorsSdk();
// End Cross Module References
	static UEnum* EMirrorsRequestLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MirrorsSdk_EMirrorsRequestLogLevel, Z_Construct_UPackage__Script_MirrorsSdk(), TEXT("EMirrorsRequestLogLevel"));
		}
		return Singleton;
	}
	template<> MIRRORSSDK_API UEnum* StaticEnum<EMirrorsRequestLogLevel>()
	{
		return EMirrorsRequestLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMirrorsRequestLogLevel(EMirrorsRequestLogLevel_StaticEnum, TEXT("/Script/MirrorsSdk"), TEXT("EMirrorsRequestLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MirrorsSdk_EMirrorsRequestLogLevel_Hash() { return 1945756884U; }
	UEnum* Z_Construct_UEnum_MirrorsSdk_EMirrorsRequestLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MirrorsSdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMirrorsRequestLogLevel"), 0, Get_Z_Construct_UEnum_MirrorsSdk_EMirrorsRequestLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMirrorsRequestLogLevel::None", (int64)EMirrorsRequestLogLevel::None },
				{ "EMirrorsRequestLogLevel::NetworkError", (int64)EMirrorsRequestLogLevel::NetworkError },
				{ "EMirrorsRequestLogLevel::HttpError", (int64)EMirrorsRequestLogLevel::HttpError },
				{ "EMirrorsRequestLogLevel::All", (int64)EMirrorsRequestLogLevel::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EMirrorsRequestLogLevel::All" },
				{ "BlueprintType", "true" },
				{ "HttpError.Name", "EMirrorsRequestLogLevel::HttpError" },
				{ "ModuleRelativePath", "Public/EMirrorsRequestLogLevel.h" },
				{ "NetworkError.Name", "EMirrorsRequestLogLevel::NetworkError" },
				{ "None.Name", "EMirrorsRequestLogLevel::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MirrorsSdk,
				nullptr,
				"EMirrorsRequestLogLevel",
				"EMirrorsRequestLogLevel",
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
