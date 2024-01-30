// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreSpectateBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSpectateBarWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSpectateBarWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSpectateBarWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpectateLeaveTriggeredDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpectateLeftArrowTriggeredDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpectateRightArrowTriggeredelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USpectateBarViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreSpectateBarWidget::execOnLeaveTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSpectateBarWidget::execOnLeftArrowTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftArrowTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSpectateBarWidget::execOnRightArrowTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightArrowTriggered();
		P_NATIVE_END;
	}
	void UCoreSpectateBarWidget::StaticRegisterNativesUCoreSpectateBarWidget()
	{
		UClass* Class = UCoreSpectateBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLeaveTriggered", &UCoreSpectateBarWidget::execOnLeaveTriggered },
			{ "OnLeftArrowTriggered", &UCoreSpectateBarWidget::execOnLeftArrowTriggered },
			{ "OnRightArrowTriggered", &UCoreSpectateBarWidget::execOnRightArrowTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSpectateBarWidget, nullptr, "OnLeaveTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSpectateBarWidget, nullptr, "OnLeftArrowTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSpectateBarWidget, nullptr, "OnRightArrowTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreSpectateBarWidget_NoRegister()
	{
		return UCoreSpectateBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSpectateBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaveInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArrowInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftArrowInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrowInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArrowInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leaveTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__leaveTriggeredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftArrowTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__leftArrowTriggeredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightArrowTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__rightArrowTriggeredDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSpectateBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreSpectateBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeaveTriggered, "OnLeaveTriggered" }, // 3458505983
		{ &Z_Construct_UFunction_UCoreSpectateBarWidget_OnLeftArrowTriggered, "OnLeftArrowTriggered" }, // 4242824822
		{ &Z_Construct_UFunction_UCoreSpectateBarWidget_OnRightArrowTriggered, "OnRightArrowTriggered" }, // 909205959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreSpectateBarWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeaveInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreSpectateBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeaveInputSwitcher = { "LeaveInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSpectateBarWidget, LeaveInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeaveInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeaveInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeftArrowInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreSpectateBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeftArrowInputSwitcher = { "LeftArrowInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSpectateBarWidget, LeftArrowInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeftArrowInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeftArrowInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_RightArrowInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreSpectateBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_RightArrowInputSwitcher = { "RightArrowInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSpectateBarWidget, RightArrowInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_RightArrowInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_RightArrowInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leaveTriggeredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreSpectateBarWidget" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leaveTriggeredDelegate = { "_leaveTriggeredDelegate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSpectateBarWidget, _leaveTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpectateLeaveTriggeredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leaveTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leaveTriggeredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leftArrowTriggeredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreSpectateBarWidget" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leftArrowTriggeredDelegate = { "_leftArrowTriggeredDelegate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSpectateBarWidget, _leftArrowTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpectateLeftArrowTriggeredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leftArrowTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leftArrowTriggeredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__rightArrowTriggeredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreSpectateBarWidget" },
		{ "ModuleRelativePath", "Public/CoreSpectateBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__rightArrowTriggeredDelegate = { "_rightArrowTriggeredDelegate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSpectateBarWidget, _rightArrowTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpectateRightArrowTriggeredelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__rightArrowTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__rightArrowTriggeredDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSpectateBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeaveInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_LeftArrowInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp_RightArrowInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leaveTriggeredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__leftArrowTriggeredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSpectateBarWidget_Statics::NewProp__rightArrowTriggeredDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USpectateBarViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreSpectateBarWidget, ISpectateBarViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSpectateBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSpectateBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreSpectateBarWidget_Statics::ClassParams = {
		&UCoreSpectateBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreSpectateBarWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSpectateBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreSpectateBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreSpectateBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreSpectateBarWidget, 1969389429);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreSpectateBarWidget>()
	{
		return UCoreSpectateBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreSpectateBarWidget(Z_Construct_UClass_UCoreSpectateBarWidget, &UCoreSpectateBarWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreSpectateBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSpectateBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
