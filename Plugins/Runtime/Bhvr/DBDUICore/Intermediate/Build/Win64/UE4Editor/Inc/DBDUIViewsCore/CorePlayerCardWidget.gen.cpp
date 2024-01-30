// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerCardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerCardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerCardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerCardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerCardViewInterface_NoRegister();
// End Cross Module References
	void UCorePlayerCardWidget::StaticRegisterNativesUCorePlayerCardWidget()
	{
	}
	UClass* Z_Construct_UClass_UCorePlayerCardWidget_NoRegister()
	{
		return UCorePlayerCardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerCardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerCardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerCardWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePlayerCardWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerCardWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerCardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerCardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerCardWidget, Icon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_AnimationContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerCardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerCardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_AnimationContainer = { "AnimationContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerCardWidget, AnimationContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_AnimationContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_AnimationContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerCardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerCardWidget_Statics::NewProp_AnimationContainer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePlayerCardWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerCardViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePlayerCardWidget, IPlayerCardViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerCardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerCardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerCardWidget_Statics::ClassParams = {
		&UCorePlayerCardWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCorePlayerCardWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerCardWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerCardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerCardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerCardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerCardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerCardWidget, 4223212375);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerCardWidget>()
	{
		return UCorePlayerCardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerCardWidget(Z_Construct_UClass_UCorePlayerCardWidget, &UCorePlayerCardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerCardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerCardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
