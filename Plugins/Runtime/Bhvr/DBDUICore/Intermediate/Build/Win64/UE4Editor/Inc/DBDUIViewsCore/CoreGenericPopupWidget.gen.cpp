// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreGenericPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreGenericPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBasePopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PopupAction__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PopupBackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreGenericPopupWidget::execOnAlternativeAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAlternativeAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericPopupWidget::execOnProgressionAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProgressionAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericPopupWidget::execOnRegressionAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRegressionAction();
		P_NATIVE_END;
	}
	void UCoreGenericPopupWidget::StaticRegisterNativesUCoreGenericPopupWidget()
	{
		UClass* Class = UCoreGenericPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAlternativeAction", &UCoreGenericPopupWidget::execOnAlternativeAction },
			{ "OnProgressionAction", &UCoreGenericPopupWidget::execOnProgressionAction },
			{ "OnRegressionAction", &UCoreGenericPopupWidget::execOnRegressionAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericPopupWidget, nullptr, "OnAlternativeAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericPopupWidget, nullptr, "OnProgressionAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericPopupWidget, nullptr, "OnRegressionAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreGenericPopupWidget_NoRegister()
	{
		return UCoreGenericPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreGenericPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegressionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegressionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlternativeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__popupActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__popupActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__popupBackActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__popupBackActionDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreGenericPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBasePopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreGenericPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreGenericPopupWidget_OnAlternativeAction, "OnAlternativeAction" }, // 3487021709
		{ &Z_Construct_UFunction_UCoreGenericPopupWidget_OnProgressionAction, "OnProgressionAction" }, // 1294495024
		{ &Z_Construct_UFunction_UCoreGenericPopupWidget_OnRegressionAction, "OnRegressionAction" }, // 1433343783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreGenericPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_ProgressionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_ProgressionButton = { "ProgressionButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericPopupWidget, ProgressionButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_ProgressionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_ProgressionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_RegressionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_RegressionButton = { "RegressionButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericPopupWidget, RegressionButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_RegressionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_RegressionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_AlternativeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_AlternativeButton = { "AlternativeButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericPopupWidget, AlternativeButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_AlternativeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_AlternativeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreGenericPopupWidget" },
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupActionDelegate = { "_popupActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericPopupWidget, _popupActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PopupAction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupBackActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreGenericPopupWidget" },
		{ "ModuleRelativePath", "Public/CoreGenericPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupBackActionDelegate = { "_popupBackActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericPopupWidget, _popupBackActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PopupBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupBackActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupBackActionDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreGenericPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_ProgressionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_RegressionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp_AlternativeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericPopupWidget_Statics::NewProp__popupBackActionDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreGenericPopupWidget, IGenericPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreGenericPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGenericPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreGenericPopupWidget_Statics::ClassParams = {
		&UCoreGenericPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreGenericPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreGenericPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreGenericPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreGenericPopupWidget, 4183851375);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreGenericPopupWidget>()
	{
		return UCoreGenericPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreGenericPopupWidget(Z_Construct_UClass_UCoreGenericPopupWidget, &UCoreGenericPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreGenericPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGenericPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
