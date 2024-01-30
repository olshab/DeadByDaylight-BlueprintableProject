// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/TooltipRoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTooltipRoot() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipRoot_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipRoot();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void UTooltipRoot::StaticRegisterNativesUTooltipRoot()
	{
	}
	UClass* Z_Construct_UClass_UTooltipRoot_NoRegister()
	{
		return UTooltipRoot::StaticClass();
	}
	struct Z_Construct_UClass_UTooltipRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canvasPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__canvasPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTooltipRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTooltipRoot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TooltipRoot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TooltipRoot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTooltipRoot_Statics::NewProp__canvasPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TooltipRoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TooltipRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTooltipRoot_Statics::NewProp__canvasPanel = { "_canvasPanel", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTooltipRoot, _canvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTooltipRoot_Statics::NewProp__canvasPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTooltipRoot_Statics::NewProp__canvasPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTooltipRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTooltipRoot_Statics::NewProp__canvasPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTooltipRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTooltipRoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTooltipRoot_Statics::ClassParams = {
		&UTooltipRoot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTooltipRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTooltipRoot_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTooltipRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTooltipRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTooltipRoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTooltipRoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTooltipRoot, 1072542369);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UTooltipRoot>()
	{
		return UTooltipRoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTooltipRoot(Z_Construct_UClass_UTooltipRoot, &UTooltipRoot::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UTooltipRoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTooltipRoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
