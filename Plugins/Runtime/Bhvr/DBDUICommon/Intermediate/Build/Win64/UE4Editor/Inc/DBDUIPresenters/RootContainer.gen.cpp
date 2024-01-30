// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/RootContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootContainer() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootContainer_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootContainer();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIPRESENTERS_API UEnum* Z_Construct_UEnum_DBDUIPresenters_EGameLayer();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void URootContainer::StaticRegisterNativesURootContainer()
	{
	}
	UClass* Z_Construct_UClass_URootContainer_NoRegister()
	{
		return URootContainer::StaticClass();
	}
	struct Z_Construct_UClass_URootContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameLayer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnfocusedOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnfocusedOpacity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__presenterParentWidgets_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__presenterParentWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__presenterParentWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__presenterParentWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RootContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer_MetaData[] = {
		{ "Category", "RootContainer" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer = { "GameLayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, GameLayer), Z_Construct_UEnum_DBDUIPresenters_EGameLayer, METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity_MetaData[] = {
		{ "Category", "RootContainer" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity = { "UnfocusedOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, UnfocusedOpacity), METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_ValueProp = { "_presenterParentWidgets", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPresenterParentWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_Key_KeyProp = { "_presenterParentWidgets_Key", nullptr, (EPropertyFlags)0x0004000000080009, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPresenterParentWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets = { "_presenterParentWidgets", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, _presenterParentWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget = { "_rootWidget", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, _rootWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp_GameLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp__presenterParentWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootContainer_Statics::ClassParams = {
		&URootContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootContainer, 3967088106);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<URootContainer>()
	{
		return URootContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootContainer(Z_Construct_UClass_URootContainer, &URootContainer::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("URootContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
