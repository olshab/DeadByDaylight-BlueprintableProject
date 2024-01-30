// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMatchResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMatchResultWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMatchResultWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMatchResultWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerMatchResult();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMatchResultViewInterface_NoRegister();
// End Cross Module References
	void UCoreMatchResultWidget::StaticRegisterNativesUCoreMatchResultWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreMatchResultWidget_NoRegister()
	{
		return UCoreMatchResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMatchResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorDefaultResultText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__survivorDefaultResultText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__survivorResultTexts_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__survivorResultTexts_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__survivorResultTexts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorResultTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__survivorResultTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerDefaultResultText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__killerDefaultResultText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__killerResultTexts_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__killerResultTexts_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__killerResultTexts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerResultTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__killerResultTexts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMatchResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMatchResultWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMatchResultWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMatchResultWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorDefaultResultText_MetaData[] = {
		{ "Category", "CoreMatchResultWidget" },
		{ "ModuleRelativePath", "Public/CoreMatchResultWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorDefaultResultText = { "_survivorDefaultResultText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMatchResultWidget, _survivorDefaultResultText), METADATA_PARAMS(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorDefaultResultText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorDefaultResultText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_ValueProp = { "_survivorResultTexts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_Key_KeyProp = { "_survivorResultTexts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_MetaData[] = {
		{ "Category", "CoreMatchResultWidget" },
		{ "ModuleRelativePath", "Public/CoreMatchResultWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts = { "_survivorResultTexts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMatchResultWidget, _survivorResultTexts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerDefaultResultText_MetaData[] = {
		{ "Category", "CoreMatchResultWidget" },
		{ "ModuleRelativePath", "Public/CoreMatchResultWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerDefaultResultText = { "_killerDefaultResultText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMatchResultWidget, _killerDefaultResultText), METADATA_PARAMS(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerDefaultResultText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerDefaultResultText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_ValueProp = { "_killerResultTexts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_Key_KeyProp = { "_killerResultTexts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EKillerMatchResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_MetaData[] = {
		{ "Category", "CoreMatchResultWidget" },
		{ "ModuleRelativePath", "Public/CoreMatchResultWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts = { "_killerResultTexts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMatchResultWidget, _killerResultTexts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreMatchResultWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorDefaultResultText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__survivorResultTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerDefaultResultText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMatchResultWidget_Statics::NewProp__killerResultTexts,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMatchResultViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreMatchResultWidget, IMatchResultViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMatchResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMatchResultWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::ClassParams = {
		&UCoreMatchResultWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreMatchResultWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreMatchResultWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMatchResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMatchResultWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMatchResultWidget, 3423632591);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMatchResultWidget>()
	{
		return UCoreMatchResultWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMatchResultWidget(Z_Construct_UClass_UCoreMatchResultWidget, &UCoreMatchResultWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMatchResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMatchResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
