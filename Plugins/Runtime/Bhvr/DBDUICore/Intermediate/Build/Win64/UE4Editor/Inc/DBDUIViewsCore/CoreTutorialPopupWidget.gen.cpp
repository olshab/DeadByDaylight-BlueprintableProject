// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTutorialPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTutorialPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_NotifTutoConfirmButtonClickDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialPopupViewInterface_NoRegister();
// End Cross Module References
	void UCoreTutorialPopupWidget::StaticRegisterNativesUCoreTutorialPopupWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreTutorialPopupWidget_NoRegister()
	{
		return UCoreTutorialPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTutorialPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosePopupSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClosePopupSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__notifTutoConfirmButtonClickDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__notifTutoConfirmButtonClickDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreTutorialPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreTutorialPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ProgressionInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreTutorialPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTutorialPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ProgressionInputSwitcher = { "ProgressionInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialPopupWidget, ProgressionInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ProgressionInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ProgressionInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ClosePopupSfx_MetaData[] = {
		{ "Category", "CoreTutorialPopupWidget" },
		{ "ModuleRelativePath", "Public/CoreTutorialPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ClosePopupSfx = { "ClosePopupSfx", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialPopupWidget, ClosePopupSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ClosePopupSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ClosePopupSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp__notifTutoConfirmButtonClickDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreTutorialPopupWidget" },
		{ "ModuleRelativePath", "Public/CoreTutorialPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp__notifTutoConfirmButtonClickDelegate = { "_notifTutoConfirmButtonClickDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialPopupWidget, _notifTutoConfirmButtonClickDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_NotifTutoConfirmButtonClickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp__notifTutoConfirmButtonClickDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp__notifTutoConfirmButtonClickDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ProgressionInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp_ClosePopupSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::NewProp__notifTutoConfirmButtonClickDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTutorialPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreTutorialPopupWidget, ITutorialPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTutorialPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::ClassParams = {
		&UCoreTutorialPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTutorialPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTutorialPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTutorialPopupWidget, 3833139504);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTutorialPopupWidget>()
	{
		return UCoreTutorialPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTutorialPopupWidget(Z_Construct_UClass_UCoreTutorialPopupWidget, &UCoreTutorialPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTutorialPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTutorialPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
