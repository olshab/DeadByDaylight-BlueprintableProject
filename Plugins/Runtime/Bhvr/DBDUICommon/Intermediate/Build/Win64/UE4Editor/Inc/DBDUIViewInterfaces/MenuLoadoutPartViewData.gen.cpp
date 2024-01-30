// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MenuLoadoutPartViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuLoadoutPartViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuLoadoutPartViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuLoadoutPartViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
// End Cross Module References
	void UMenuLoadoutPartViewData::StaticRegisterNativesUMenuLoadoutPartViewData()
	{
	}
	UClass* Z_Construct_UClass_UMenuLoadoutPartViewData_NoRegister()
	{
		return UMenuLoadoutPartViewData::StaticClass();
	}
	struct Z_Construct_UClass_UMenuLoadoutPartViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconTexture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ParentDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKillSwitchEnabled_MetaData[];
#endif
		static void NewProp_IsKillSwitchEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKillSwitchEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MenuLoadoutPartViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuLoadoutPartViewData, ItemId), METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuLoadoutPartViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IconTexture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuLoadoutPartViewData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuLoadoutPartViewData, StackCount), METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ParentDisplayName_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ParentDisplayName = { "ParentDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuLoadoutPartViewData, ParentDisplayName), METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ParentDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ParentDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	void Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((UMenuLoadoutPartViewData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMenuLoadoutPartViewData), &Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuLoadoutPartViewData, Availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled_MetaData[] = {
		{ "Category", "MenuLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/MenuLoadoutPartViewData.h" },
	};
#endif
	void Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled_SetBit(void* Obj)
	{
		((UMenuLoadoutPartViewData*)Obj)->IsKillSwitchEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled = { "IsKillSwitchEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMenuLoadoutPartViewData), &Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_StackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_ParentDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::NewProp_IsKillSwitchEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuLoadoutPartViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::ClassParams = {
		&UMenuLoadoutPartViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuLoadoutPartViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuLoadoutPartViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuLoadoutPartViewData, 2828583348);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UMenuLoadoutPartViewData>()
	{
		return UMenuLoadoutPartViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuLoadoutPartViewData(Z_Construct_UClass_UMenuLoadoutPartViewData, &UMenuLoadoutPartViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UMenuLoadoutPartViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuLoadoutPartViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
