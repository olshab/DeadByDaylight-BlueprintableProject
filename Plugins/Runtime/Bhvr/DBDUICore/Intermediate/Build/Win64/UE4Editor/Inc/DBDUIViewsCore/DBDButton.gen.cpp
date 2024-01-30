// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDButton() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	void UDBDButton::StaticRegisterNativesUDBDButton()
	{
	}
	UClass* Z_Construct_UClass_UDBDButton_NoRegister()
	{
		return UDBDButton::StaticClass();
	}
	struct Z_Construct_UClass_UDBDButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendAnalyticsData_MetaData[];
#endif
		static void NewProp_SendAnalyticsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendAnalyticsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnalyticsName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData_MetaData[] = {
		{ "Category", "DBDButton" },
		{ "ModuleRelativePath", "Public/DBDButton.h" },
	};
#endif
	void Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData_SetBit(void* Obj)
	{
		((UDBDButton*)Obj)->SendAnalyticsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData = { "SendAnalyticsData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDButton), &Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDButton_Statics::NewProp_AnalyticsName_MetaData[] = {
		{ "Category", "DBDButton" },
		{ "ModuleRelativePath", "Public/DBDButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDButton_Statics::NewProp_AnalyticsName = { "AnalyticsName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDButton, AnalyticsName), METADATA_PARAMS(Z_Construct_UClass_UDBDButton_Statics::NewProp_AnalyticsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDButton_Statics::NewProp_AnalyticsName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDButton_Statics::NewProp_SendAnalyticsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDButton_Statics::NewProp_AnalyticsName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDButton_Statics::ClassParams = {
		&UDBDButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDButton_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDButton, 3966318117);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDButton>()
	{
		return UDBDButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDButton(Z_Construct_UClass_UDBDButton, &UDBDButton::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
