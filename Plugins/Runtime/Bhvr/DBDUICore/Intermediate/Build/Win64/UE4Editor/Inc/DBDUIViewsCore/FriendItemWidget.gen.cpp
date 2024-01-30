// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/FriendItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UFriendItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UFriendItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	void UFriendItemWidget::StaticRegisterNativesUFriendItemWidget()
	{
	}
	UClass* Z_Construct_UClass_UFriendItemWidget_NoRegister()
	{
		return UFriendItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFriendItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InviteIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrossplayIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FriendItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FriendItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FriendItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendItemWidget, PlayerNameText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_PlayerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_PlayerNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_StatusText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FriendItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendItemWidget, StatusText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_StatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_StatusText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_InviteIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FriendItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_InviteIcon = { "InviteIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendItemWidget, InviteIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_InviteIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_InviteIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_CrossplayIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FriendItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_CrossplayIcon = { "CrossplayIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendItemWidget, CrossplayIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_CrossplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_CrossplayIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFriendItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_PlayerNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_StatusText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_InviteIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendItemWidget_Statics::NewProp_CrossplayIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriendItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendItemWidget_Statics::ClassParams = {
		&UFriendItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFriendItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFriendItemWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriendItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendItemWidget, 2473995631);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UFriendItemWidget>()
	{
		return UFriendItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendItemWidget(Z_Construct_UClass_UFriendItemWidget, &UFriendItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UFriendItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
