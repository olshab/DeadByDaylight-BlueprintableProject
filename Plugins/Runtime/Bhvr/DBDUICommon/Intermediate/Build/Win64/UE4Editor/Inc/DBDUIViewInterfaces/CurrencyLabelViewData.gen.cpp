// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CurrencyLabelViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyLabelViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyLabelViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
// End Cross Module References
class UScriptStruct* FCurrencyLabelViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyLabelViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyLabelViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CurrencyLabelViewData"), sizeof(FCurrencyLabelViewData), Get_Z_Construct_UScriptStruct_FCurrencyLabelViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCurrencyLabelViewData>()
{
	return FCurrencyLabelViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyLabelViewData(FCurrencyLabelViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CurrencyLabelViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyLabelViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyLabelViewData()
	{
		UScriptStruct::DeferCppStructOps<FCurrencyLabelViewData>(FName(TEXT("CurrencyLabelViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyLabelViewData;
	struct Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayBonusAnimation_MetaData[];
#endif
		static void NewProp_PlayBonusAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayBonusAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClickable_MetaData[];
#endif
		static void NewProp_IsClickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClickable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyLabelViewData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "CurrencyLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyLabelViewData, Type), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "CurrencyLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyLabelViewData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "CurrencyLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyLabelViewData, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation_MetaData[] = {
		{ "Category", "CurrencyLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation_SetBit(void* Obj)
	{
		((FCurrencyLabelViewData*)Obj)->PlayBonusAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation = { "PlayBonusAnimation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCurrencyLabelViewData), &Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable_MetaData[] = {
		{ "Category", "CurrencyLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable_SetBit(void* Obj)
	{
		((FCurrencyLabelViewData*)Obj)->IsClickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable = { "IsClickable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCurrencyLabelViewData), &Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_TooltipData_MetaData[] = {
		{ "Category", "CurrencyLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyLabelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_TooltipData = { "TooltipData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyLabelViewData, TooltipData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_TooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_TooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_PlayBonusAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_IsClickable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::NewProp_TooltipData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CurrencyLabelViewData",
		sizeof(FCurrencyLabelViewData),
		alignof(FCurrencyLabelViewData),
		Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyLabelViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyLabelViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyLabelViewData"), sizeof(FCurrencyLabelViewData), Get_Z_Construct_UScriptStruct_FCurrencyLabelViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyLabelViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyLabelViewData_Hash() { return 737391381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
