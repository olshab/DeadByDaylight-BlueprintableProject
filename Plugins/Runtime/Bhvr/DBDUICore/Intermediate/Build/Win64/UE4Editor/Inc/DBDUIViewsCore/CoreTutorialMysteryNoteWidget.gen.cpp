// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTutorialMysteryNoteWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTutorialMysteryNoteWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialMysteryNoteWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialMysteryNoteViewInterface_NoRegister();
// End Cross Module References
	void UCoreTutorialMysteryNoteWidget::StaticRegisterNativesUCoreTutorialMysteryNoteWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_NoRegister()
	{
		return UCoreTutorialMysteryNoteWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreTutorialMysteryNoteWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreTutorialMysteryNoteWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTutorialMysteryNoteViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreTutorialMysteryNoteWidget, ITutorialMysteryNoteViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTutorialMysteryNoteWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::ClassParams = {
		&UCoreTutorialMysteryNoteWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTutorialMysteryNoteWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTutorialMysteryNoteWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTutorialMysteryNoteWidget, 1889534315);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTutorialMysteryNoteWidget>()
	{
		return UCoreTutorialMysteryNoteWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTutorialMysteryNoteWidget(Z_Construct_UClass_UCoreTutorialMysteryNoteWidget, &UCoreTutorialMysteryNoteWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTutorialMysteryNoteWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTutorialMysteryNoteWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
