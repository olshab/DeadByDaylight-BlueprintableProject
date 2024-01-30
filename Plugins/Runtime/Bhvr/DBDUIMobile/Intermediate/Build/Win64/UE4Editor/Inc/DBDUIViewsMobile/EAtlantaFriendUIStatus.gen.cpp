// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/EAtlantaFriendUIStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtlantaFriendUIStatus() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	static UEnum* EAtlantaFriendUIStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("EAtlantaFriendUIStatus"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<EAtlantaFriendUIStatus>()
	{
		return EAtlantaFriendUIStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtlantaFriendUIStatus(EAtlantaFriendUIStatus_StaticEnum, TEXT("/Script/DBDUIViewsMobile"), TEXT("EAtlantaFriendUIStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus_Hash() { return 1218463157U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtlantaFriendUIStatus"), 0, Get_Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtlantaFriendUIStatus::Undefined", (int64)EAtlantaFriendUIStatus::Undefined },
				{ "EAtlantaFriendUIStatus::FriendSuggestion", (int64)EAtlantaFriendUIStatus::FriendSuggestion },
				{ "EAtlantaFriendUIStatus::FriendRequestSent", (int64)EAtlantaFriendUIStatus::FriendRequestSent },
				{ "EAtlantaFriendUIStatus::FriendRequestReceived", (int64)EAtlantaFriendUIStatus::FriendRequestReceived },
				{ "EAtlantaFriendUIStatus::Available", (int64)EAtlantaFriendUIStatus::Available },
				{ "EAtlantaFriendUIStatus::InAMatch", (int64)EAtlantaFriendUIStatus::InAMatch },
				{ "EAtlantaFriendUIStatus::Offline", (int64)EAtlantaFriendUIStatus::Offline },
				{ "EAtlantaFriendUIStatus::AddFriendToSeeStatus", (int64)EAtlantaFriendUIStatus::AddFriendToSeeStatus },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddFriendToSeeStatus.Name", "EAtlantaFriendUIStatus::AddFriendToSeeStatus" },
				{ "Available.Name", "EAtlantaFriendUIStatus::Available" },
				{ "BlueprintType", "true" },
				{ "FriendRequestReceived.Name", "EAtlantaFriendUIStatus::FriendRequestReceived" },
				{ "FriendRequestSent.Name", "EAtlantaFriendUIStatus::FriendRequestSent" },
				{ "FriendSuggestion.Name", "EAtlantaFriendUIStatus::FriendSuggestion" },
				{ "InAMatch.Name", "EAtlantaFriendUIStatus::InAMatch" },
				{ "ModuleRelativePath", "Public/EAtlantaFriendUIStatus.h" },
				{ "Offline.Name", "EAtlantaFriendUIStatus::Offline" },
				{ "Undefined.Name", "EAtlantaFriendUIStatus::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
				nullptr,
				"EAtlantaFriendUIStatus",
				"EAtlantaFriendUIStatus",
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
