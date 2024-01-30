// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/NewActiveTomePopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActiveTomePopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UNewActiveTomePopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UNewActiveTomePopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_NewActiveTomePopupButtonClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNewActiveTomePopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNewActiveTomePopupWidget::execOnCurrentTomeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentTomeButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewActiveTomePopupWidget::execOnRiftButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRiftButtonClicked();
		P_NATIVE_END;
	}
	void UNewActiveTomePopupWidget::StaticRegisterNativesUNewActiveTomePopupWidget()
	{
		UClass* Class = UNewActiveTomePopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCurrentTomeButtonClicked", &UNewActiveTomePopupWidget::execOnCurrentTomeButtonClicked },
			{ "OnRiftButtonClicked", &UNewActiveTomePopupWidget::execOnRiftButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActiveTomePopupWidget, nullptr, "OnCurrentTomeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActiveTomePopupWidget, nullptr, "OnRiftButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNewActiveTomePopupWidget_NoRegister()
	{
		return UNewActiveTomePopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNewActiveTomePopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BgImageContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BgImageContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiftTimeLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RiftTimeLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TomeTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TomeDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TomeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiftTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RiftTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiftDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RiftDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiftButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RiftButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTomeButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__currentTomeButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__riftButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__riftButtonClickedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewActiveTomePopupWidget_OnCurrentTomeButtonClicked, "OnCurrentTomeButtonClicked" }, // 2047953242
		{ &Z_Construct_UFunction_UNewActiveTomePopupWidget_OnRiftButtonClicked, "OnRiftButtonClicked" }, // 3164054829
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NewActiveTomePopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_BgImageContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_BgImageContainer = { "BgImageContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, BgImageContainer), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_BgImageContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_BgImageContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTimeLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTimeLabel = { "RiftTimeLabel", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftTimeLabel), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTimeLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTimeLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeTitle = { "TomeTitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, TomeTitle), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeDescription = { "TomeDescription", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, TomeDescription), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeButton = { "TomeButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, TomeButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTitle = { "RiftTitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftTitle), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftDescription = { "RiftDescription", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftDescription), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NewActiveTomePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftButton = { "RiftButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__currentTomeButtonClickedDelegate_MetaData[] = {
		{ "Category", "NewActiveTomePopupWidget" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__currentTomeButtonClickedDelegate = { "_currentTomeButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, _currentTomeButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_NewActiveTomePopupButtonClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__currentTomeButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__currentTomeButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__riftButtonClickedDelegate_MetaData[] = {
		{ "Category", "NewActiveTomePopupWidget" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__riftButtonClickedDelegate = { "_riftButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewActiveTomePopupWidget, _riftButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_NewActiveTomePopupButtonClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__riftButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__riftButtonClickedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_BgImageContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTimeLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_TomeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp_RiftButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__currentTomeButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::NewProp__riftButtonClickedDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNewActiveTomePopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UNewActiveTomePopupWidget, INewActiveTomePopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActiveTomePopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::ClassParams = {
		&UNewActiveTomePopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewActiveTomePopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewActiveTomePopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewActiveTomePopupWidget, 93436735);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UNewActiveTomePopupWidget>()
	{
		return UNewActiveTomePopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewActiveTomePopupWidget(Z_Construct_UClass_UNewActiveTomePopupWidget, &UNewActiveTomePopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UNewActiveTomePopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActiveTomePopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
