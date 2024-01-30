// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryDetailsTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryDetailsTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDetailsTabLayout();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventDetailsViewInterface_NoRegister();
// End Cross Module References
	void UEventEntryDetailsTabWidget::StaticRegisterNativesUEventEntryDetailsTabWidget()
	{
	}
	UClass* Z_Construct_UClass_UEventEntryDetailsTabWidget_NoRegister()
	{
		return UEventEntryDetailsTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__skinData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutWidgetsMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayoutWidgetsMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LayoutWidgetsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutWidgetsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LayoutWidgetsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryDetailsTabWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp__skinData_MetaData[] = {
		{ "Category", "EventEntryDetailsTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp__skinData = { "_skinData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsTabWidget, _skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp__skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp__skinData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_ValueProp = { "LayoutWidgetsMap", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEventEntryDetailsTabLayoutWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_Key_KeyProp = { "LayoutWidgetsMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EDetailsTabLayout, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_MetaData[] = {
		{ "Category", "EventEntryDetailsTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap = { "LayoutWidgetsMap", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsTabWidget, LayoutWidgetsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp__skinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::NewProp_LayoutWidgetsMap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEventDetailsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UEventEntryDetailsTabWidget, IEventDetailsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryDetailsTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::ClassParams = {
		&UEventEntryDetailsTabWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryDetailsTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryDetailsTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryDetailsTabWidget, 1182007554);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryDetailsTabWidget>()
	{
		return UEventEntryDetailsTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryDetailsTabWidget(Z_Construct_UClass_UEventEntryDetailsTabWidget, &UEventEntryDetailsTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryDetailsTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryDetailsTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
