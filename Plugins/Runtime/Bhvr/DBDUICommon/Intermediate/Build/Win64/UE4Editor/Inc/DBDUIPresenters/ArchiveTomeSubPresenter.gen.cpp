// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveTomeSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveTomeSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveTomeSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveTomeSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EArchiveTomeMenuState();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveQuestMapSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveEditorSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveJournalSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveTomeSubPresenter::execOnEditorWidgetSwitchComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEditorWidgetSwitchComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveTomeSubPresenter::execOnMenuTabSelected)
	{
		P_GET_ENUM(EArchiveTomeMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(EArchiveTomeMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	void UArchiveTomeSubPresenter::StaticRegisterNativesUArchiveTomeSubPresenter()
	{
		UClass* Class = UArchiveTomeSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEditorWidgetSwitchComplete", &UArchiveTomeSubPresenter::execOnEditorWidgetSwitchComplete },
			{ "OnMenuTabSelected", &UArchiveTomeSubPresenter::execOnMenuTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeSubPresenter, nullptr, "OnEditorWidgetSwitchComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics
	{
		struct ArchiveTomeSubPresenter_eventOnMenuTabSelected_Parms
		{
			EArchiveTomeMenuState menuState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeSubPresenter_eventOnMenuTabSelected_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EArchiveTomeMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeSubPresenter, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(ArchiveTomeSubPresenter_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveTomeSubPresenter_NoRegister()
	{
		return UArchiveTomeSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveTomeSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveQuestMapSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveQuestMapSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveEditorSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveEditorSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveJournalSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveJournalSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveTomeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveTomeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveSideNavSkinMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveSideNavSkinMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete, "OnEditorWidgetSwitchComplete" }, // 2697906400
		{ &Z_Construct_UFunction_UArchiveTomeSubPresenter_OnMenuTabSelected, "OnMenuTabSelected" }, // 787684720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveTomeSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveQuestMapSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveTomeSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveQuestMapSubPresenter = { "_archiveQuestMapSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTomeSubPresenter, _archiveQuestMapSubPresenter), Z_Construct_UClass_UArchiveQuestMapSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveQuestMapSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveQuestMapSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveEditorSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveTomeSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveEditorSubPresenter = { "_archiveEditorSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTomeSubPresenter, _archiveEditorSubPresenter), Z_Construct_UClass_UArchiveEditorSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveEditorSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveEditorSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveJournalSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveTomeSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveJournalSubPresenter = { "_archiveJournalSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTomeSubPresenter, _archiveJournalSubPresenter), Z_Construct_UClass_UArchiveJournalSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveJournalSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveJournalSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__activeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveTomeSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__activeSubPresenter = { "_activeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTomeSubPresenter, _activeSubPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__activeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__activeSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveTomeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveTomeSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveTomeWidget = { "_archiveTomeWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTomeSubPresenter, _archiveTomeWidget), Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveTomeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveTomeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveSideNavSkinMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveTomeSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveTomeSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveSideNavSkinMaterial = { "_archiveSideNavSkinMaterial", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTomeSubPresenter, _archiveSideNavSkinMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveSideNavSkinMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveSideNavSkinMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveQuestMapSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveEditorSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveJournalSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__activeSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveTomeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::NewProp__archiveSideNavSkinMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveTomeSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::ClassParams = {
		&UArchiveTomeSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveTomeSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveTomeSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveTomeSubPresenter, 4261522288);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveTomeSubPresenter>()
	{
		return UArchiveTomeSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveTomeSubPresenter(Z_Construct_UClass_UArchiveTomeSubPresenter, &UArchiveTomeSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveTomeSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveTomeSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
