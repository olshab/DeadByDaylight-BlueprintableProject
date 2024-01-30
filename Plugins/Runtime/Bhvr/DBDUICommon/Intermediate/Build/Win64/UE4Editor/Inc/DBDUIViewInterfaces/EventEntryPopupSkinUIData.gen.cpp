// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EventEntryPopupSkinUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryPopupSkinUIData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEventEntryPopupSkinUIData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEventEntryPopupSkinUIData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FEventEntryPopupSkinUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EventEntryPopupSkinUIData"), sizeof(FEventEntryPopupSkinUIData), Get_Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FEventEntryPopupSkinUIData>()
{
	return FEventEntryPopupSkinUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventEntryPopupSkinUIData(FEventEntryPopupSkinUIData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EventEntryPopupSkinUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFEventEntryPopupSkinUIData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFEventEntryPopupSkinUIData()
	{
		UScriptStruct::DeferCppStructOps<FEventEntryPopupSkinUIData>(FName(TEXT("EventEntryPopupSkinUIData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFEventEntryPopupSkinUIData;
	struct Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EventImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAreaBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewAreaBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundCenterImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundCenterImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TabMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingBackgroundTexture_MetaData[];
#endif
		static void NewProp_IsUsingBackgroundTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingBackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleBannerMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TitleBannerMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TitleIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderBackgroundMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HeaderBackgroundMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneTrackerBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MilestoneTrackerBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneTrackerHighlightBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MilestoneTrackerHighlightBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBGTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewBGTintColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventEntryPopupSkinUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_ScrollBarColor_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_ScrollBarColor = { "ScrollBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, ScrollBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_ScrollBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_ScrollBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_EventImage_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_EventImage = { "EventImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, EventImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_EventImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_EventImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewAreaBackground_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewAreaBackground = { "PreviewAreaBackground", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, PreviewAreaBackground), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewAreaBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewAreaBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, BaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundTexture_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, BackgroundTexture), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundCenterImage_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundCenterImage = { "BackgroundCenterImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, BackgroundCenterImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundCenterImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundCenterImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TabMaterialInstance_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TabMaterialInstance = { "TabMaterialInstance", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, TabMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TabMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TabMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture_SetBit(void* Obj)
	{
		((FEventEntryPopupSkinUIData*)Obj)->IsUsingBackgroundTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture = { "IsUsingBackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventEntryPopupSkinUIData), &Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleBannerMaterial_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleBannerMaterial = { "TitleBannerMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, TitleBannerMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleBannerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleBannerMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleIcon_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleIcon = { "TitleIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, TitleIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_HeaderBackgroundMaterial_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_HeaderBackgroundMaterial = { "HeaderBackgroundMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, HeaderBackgroundMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_HeaderBackgroundMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_HeaderBackgroundMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerBackground_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerBackground = { "MilestoneTrackerBackground", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, MilestoneTrackerBackground), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerHighlightBar_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerHighlightBar = { "MilestoneTrackerHighlightBar", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, MilestoneTrackerHighlightBar), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerHighlightBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerHighlightBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewBGTintColor_MetaData[] = {
		{ "Category", "EventEntryPopupSkinUIData" },
		{ "ModuleRelativePath", "Public/EventEntryPopupSkinUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewBGTintColor = { "PreviewBGTintColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventEntryPopupSkinUIData, PreviewBGTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewBGTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewBGTintColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_ScrollBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_EventImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewAreaBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_BackgroundCenterImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TabMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_IsUsingBackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleBannerMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_TitleIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_HeaderBackgroundMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_MilestoneTrackerHighlightBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::NewProp_PreviewBGTintColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EventEntryPopupSkinUIData",
		sizeof(FEventEntryPopupSkinUIData),
		alignof(FEventEntryPopupSkinUIData),
		Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventEntryPopupSkinUIData"), sizeof(FEventEntryPopupSkinUIData), Get_Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData_Hash() { return 3123686205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
