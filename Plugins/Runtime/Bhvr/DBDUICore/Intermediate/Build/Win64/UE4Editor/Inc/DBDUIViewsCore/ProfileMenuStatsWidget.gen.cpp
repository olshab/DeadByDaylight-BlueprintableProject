// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ProfileMenuStatsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuStatsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UProfileMenuStatsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UProfileMenuStatsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister();
// End Cross Module References
	void UProfileMenuStatsWidget::StaticRegisterNativesUProfileMenuStatsWidget()
	{
	}
	UClass* Z_Construct_UClass_UProfileMenuStatsWidget_NoRegister()
	{
		return UProfileMenuStatsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuStatsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayerLevelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelAndDevotionDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayerLevelAndDevotionDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerAndSurvivorGradesDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KillerAndSurvivorGradesDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuStatsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProfileMenuStatsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelText_MetaData[] = {
		{ "Category", "ProfileMenuStatsWidget" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelText = { "PlayerLevelText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuStatsWidget, PlayerLevelText), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelAndDevotionDescription_MetaData[] = {
		{ "Category", "ProfileMenuStatsWidget" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelAndDevotionDescription = { "PlayerLevelAndDevotionDescription", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuStatsWidget, PlayerLevelAndDevotionDescription), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelAndDevotionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelAndDevotionDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_KillerAndSurvivorGradesDescription_MetaData[] = {
		{ "Category", "ProfileMenuStatsWidget" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_KillerAndSurvivorGradesDescription = { "KillerAndSurvivorGradesDescription", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuStatsWidget, KillerAndSurvivorGradesDescription), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_KillerAndSurvivorGradesDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_KillerAndSurvivorGradesDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileMenuStatsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_PlayerLevelAndDevotionDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuStatsWidget_Statics::NewProp_KillerAndSurvivorGradesDescription,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProfileMenuStatsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UProfileMenuStatsWidget, IProfileMenuStatsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuStatsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileMenuStatsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuStatsWidget_Statics::ClassParams = {
		&UProfileMenuStatsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProfileMenuStatsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuStatsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuStatsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuStatsWidget, 1566980882);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UProfileMenuStatsWidget>()
	{
		return UProfileMenuStatsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuStatsWidget(Z_Construct_UClass_UProfileMenuStatsWidget, &UProfileMenuStatsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UProfileMenuStatsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuStatsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
