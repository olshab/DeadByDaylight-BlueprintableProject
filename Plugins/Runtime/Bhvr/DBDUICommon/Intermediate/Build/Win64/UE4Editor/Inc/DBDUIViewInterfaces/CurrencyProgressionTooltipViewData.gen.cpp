// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CurrencyProgressionTooltipViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyProgressionTooltipViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData();
// End Cross Module References
class UScriptStruct* FCurrencyProgressionTooltipViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CurrencyProgressionTooltipViewData"), sizeof(FCurrencyProgressionTooltipViewData), Get_Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCurrencyProgressionTooltipViewData>()
{
	return FCurrencyProgressionTooltipViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyProgressionTooltipViewData(FCurrencyProgressionTooltipViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CurrencyProgressionTooltipViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyProgressionTooltipViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyProgressionTooltipViewData()
	{
		UScriptStruct::DeferCppStructOps<FCurrencyProgressionTooltipViewData>(FName(TEXT("CurrencyProgressionTooltipViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyProgressionTooltipViewData;
	struct Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCurrency_MetaData[];
#endif
		static void NewProp_IsCurrency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipHeaderMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TooltipHeaderMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipDecorationIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TooltipDecorationIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventTimer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpirationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpirationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyProgressionTooltipViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency_SetBit(void* Obj)
	{
		((FCurrencyProgressionTooltipViewData*)Obj)->IsCurrency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency = { "IsCurrency", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCurrencyProgressionTooltipViewData), &Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipHeaderMaterial_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipHeaderMaterial = { "TooltipHeaderMaterial", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, TooltipHeaderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipHeaderMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipHeaderMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipDecorationIcon_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipDecorationIcon = { "TooltipDecorationIcon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, TooltipDecorationIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipDecorationIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipDecorationIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventDescription_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventDescription = { "EventDescription", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, EventDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventTimer_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventTimer = { "EventTimer", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, EventTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventTimer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData_Inner = { "ExpirationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData = { "ExpirationData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionTooltipViewData, ExpirationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_IsCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipHeaderMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_TooltipDecorationIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_EventTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::NewProp_ExpirationData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CurrencyProgressionTooltipViewData",
		sizeof(FCurrencyProgressionTooltipViewData),
		alignof(FCurrencyProgressionTooltipViewData),
		Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyProgressionTooltipViewData"), sizeof(FCurrencyProgressionTooltipViewData), Get_Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData_Hash() { return 3684673129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
