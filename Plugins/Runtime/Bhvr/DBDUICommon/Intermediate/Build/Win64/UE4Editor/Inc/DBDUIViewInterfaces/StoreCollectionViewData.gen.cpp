// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCollectionViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCollectionViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStoreCollectionViewData::execHasHeroImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasHeroImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCollectionViewData::execHasHeroVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasHeroVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCollectionViewData::execIsCollectionActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCollectionActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCollectionViewData::execIsSpecialActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpecialActive();
		P_NATIVE_END;
	}
	void UStoreCollectionViewData::StaticRegisterNativesUStoreCollectionViewData()
	{
		UClass* Class = UStoreCollectionViewData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasHeroImage", &UStoreCollectionViewData::execHasHeroImage },
			{ "HasHeroVideo", &UStoreCollectionViewData::execHasHeroVideo },
			{ "IsCollectionActive", &UStoreCollectionViewData::execIsCollectionActive },
			{ "IsSpecialActive", &UStoreCollectionViewData::execIsSpecialActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics
	{
		struct StoreCollectionViewData_eventHasHeroImage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StoreCollectionViewData_eventHasHeroImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreCollectionViewData_eventHasHeroImage_Parms), &Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionViewData, nullptr, "HasHeroImage", nullptr, nullptr, sizeof(StoreCollectionViewData_eventHasHeroImage_Parms), Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics
	{
		struct StoreCollectionViewData_eventHasHeroVideo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StoreCollectionViewData_eventHasHeroVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreCollectionViewData_eventHasHeroVideo_Parms), &Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionViewData, nullptr, "HasHeroVideo", nullptr, nullptr, sizeof(StoreCollectionViewData_eventHasHeroVideo_Parms), Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics
	{
		struct StoreCollectionViewData_eventIsCollectionActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StoreCollectionViewData_eventIsCollectionActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreCollectionViewData_eventIsCollectionActive_Parms), &Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionViewData, nullptr, "IsCollectionActive", nullptr, nullptr, sizeof(StoreCollectionViewData_eventIsCollectionActive_Parms), Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics
	{
		struct StoreCollectionViewData_eventIsSpecialActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StoreCollectionViewData_eventIsSpecialActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreCollectionViewData_eventIsSpecialActive_Parms), &Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionViewData, nullptr, "IsSpecialActive", nullptr, nullptr, sizeof(StoreCollectionViewData_eventIsSpecialActive_Parms), Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCollectionViewData_NoRegister()
	{
		return UStoreCollectionViewData::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCollectionViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplaySubtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplaySubtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeroImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HeroVideo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalImages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFeatured_MetaData[];
#endif
		static void NewProp_IsFeatured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFeatured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSpecial_MetaData[];
#endif
		static void NewProp_IsSpecial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSpecial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialEndDate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCollectionViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCollectionViewData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCollectionViewData_HasHeroImage, "HasHeroImage" }, // 3257011262
		{ &Z_Construct_UFunction_UStoreCollectionViewData_HasHeroVideo, "HasHeroVideo" }, // 3431281096
		{ &Z_Construct_UFunction_UStoreCollectionViewData_IsCollectionActive, "IsCollectionActive" }, // 837091708
		{ &Z_Construct_UFunction_UStoreCollectionViewData_IsSpecialActive, "IsSpecialActive" }, // 3785452147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreCollectionViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_CollectionId_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_CollectionId = { "CollectionId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, CollectionId), METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_CollectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_CollectionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplayTitle_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplayTitle = { "DisplayTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, DisplayTitle), METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplayTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplayTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplaySubtitle_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplaySubtitle = { "DisplaySubtitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, DisplaySubtitle), METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplaySubtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplaySubtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveFrom_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveFrom = { "ActiveFrom", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, ActiveFrom), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveTo_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveTo = { "ActiveTo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, ActiveTo), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroImage_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroImage = { "HeroImage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, HeroImage), Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroVideo_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroVideo = { "HeroVideo", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, HeroVideo), Z_Construct_UClass_UFileMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroVideo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages_Inner = { "AdditionalImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages = { "AdditionalImages", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, AdditionalImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((UStoreCollectionViewData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCollectionViewData), &Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured_SetBit(void* Obj)
	{
		((UStoreCollectionViewData*)Obj)->IsFeatured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured = { "IsFeatured", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCollectionViewData), &Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial_SetBit(void* Obj)
	{
		((UStoreCollectionViewData*)Obj)->IsSpecial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial = { "IsSpecial", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCollectionViewData), &Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialStartDate_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialStartDate = { "SpecialStartDate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, SpecialStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialEndDate_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialEndDate = { "SpecialEndDate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, SpecialEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialEndDate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "StoreCollectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCollectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCollectionViewData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreCollectionViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_CollectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplayTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_DisplaySubtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_ActiveTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_HeroVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_AdditionalImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsFeatured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_IsSpecial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_SpecialEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCollectionViewData_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCollectionViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreCollectionViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCollectionViewData_Statics::ClassParams = {
		&UStoreCollectionViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreCollectionViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCollectionViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCollectionViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCollectionViewData, 1737292201);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCollectionViewData>()
	{
		return UStoreCollectionViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCollectionViewData(Z_Construct_UClass_UStoreCollectionViewData, &UStoreCollectionViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCollectionViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCollectionViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
