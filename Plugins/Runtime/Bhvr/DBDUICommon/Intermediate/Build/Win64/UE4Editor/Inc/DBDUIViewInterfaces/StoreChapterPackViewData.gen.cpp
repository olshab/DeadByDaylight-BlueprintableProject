// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreChapterPackViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreChapterPackViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPackViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPackViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
// End Cross Module References
	void UStoreChapterPackViewData::StaticRegisterNativesUStoreChapterPackViewData()
	{
	}
	UClass* Z_Construct_UClass_UStoreChapterPackViewData_NoRegister()
	{
		return UStoreChapterPackViewData::StaticClass();
	}
	struct Z_Construct_UClass_UStoreChapterPackViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PackImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTagData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriceTagData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharactersData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharactersData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomizationsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreChapterPackViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreChapterPackViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, Id), METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_DisplayTitle_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_DisplayTitle = { "DisplayTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, DisplayTitle), METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_DisplayTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_DisplayTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PackImage_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PackImage = { "PackImage", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, PackImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PackImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PackImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PriceTagData_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PriceTagData = { "PriceTagData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, PriceTagData), Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PriceTagData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PriceTagData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData_Inner = { "CharactersData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData = { "CharactersData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, CharactersData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData_Inner = { "CustomizationsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData = { "CustomizationsData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, CustomizationsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreChapterPackViewData, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((UStoreChapterPackViewData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreChapterPackViewData), &Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "StoreChapterPackViewData" },
		{ "ModuleRelativePath", "Public/StoreChapterPackViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((UStoreChapterPackViewData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreChapterPackViewData), &Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreChapterPackViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_DisplayTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PackImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_PriceTagData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CharactersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_CustomizationsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreChapterPackViewData_Statics::NewProp_IsOwned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreChapterPackViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreChapterPackViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreChapterPackViewData_Statics::ClassParams = {
		&UStoreChapterPackViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStoreChapterPackViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPackViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPackViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreChapterPackViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreChapterPackViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreChapterPackViewData, 3986795262);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreChapterPackViewData>()
	{
		return UStoreChapterPackViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreChapterPackViewData(Z_Construct_UClass_UStoreChapterPackViewData, &UStoreChapterPackViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreChapterPackViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreChapterPackViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
