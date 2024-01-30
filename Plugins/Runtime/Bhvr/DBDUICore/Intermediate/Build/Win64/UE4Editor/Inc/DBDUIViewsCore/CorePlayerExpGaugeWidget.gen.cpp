// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerExpGaugeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerExpGaugeWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerExpGaugeWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerExpGaugeWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelViewData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerExpGaugeWidget, nullptr, "OnPlayerExpUpdateCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UCorePlayerExpGaugeWidget_Add = FName(TEXT("Add"));
	void UCorePlayerExpGaugeWidget::Add(const int32 bonusXp)
	{
		CorePlayerExpGaugeWidget_eventAdd_Parms Parms;
		Parms.bonusXp=bonusXp;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerExpGaugeWidget_Add),&Parms);
	}
	static FName NAME_UCorePlayerExpGaugeWidget_OnUpdateComplete = FName(TEXT("OnUpdateComplete"));
	void UCorePlayerExpGaugeWidget::OnUpdateComplete(UUITweenInstance* tween)
	{
		CorePlayerExpGaugeWidget_eventOnUpdateComplete_Parms Parms;
		Parms.tween=tween;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerExpGaugeWidget_OnUpdateComplete),&Parms);
	}
	static FName NAME_UCorePlayerExpGaugeWidget_OnUpdateProgress = FName(TEXT("OnUpdateProgress"));
	void UCorePlayerExpGaugeWidget::OnUpdateProgress(UUITweenInstance* tween)
	{
		CorePlayerExpGaugeWidget_eventOnUpdateProgress_Parms Parms;
		Parms.tween=tween;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerExpGaugeWidget_OnUpdateProgress),&Parms);
	}
	static FName NAME_UCorePlayerExpGaugeWidget_SetViewData = FName(TEXT("SetViewData"));
	void UCorePlayerExpGaugeWidget::SetViewData(FPlayerLevelViewData const& playerViewData)
	{
		CorePlayerExpGaugeWidget_eventSetViewData_Parms Parms;
		Parms.playerViewData=playerViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerExpGaugeWidget_SetViewData),&Parms);
	}
	void UCorePlayerExpGaugeWidget::StaticRegisterNativesUCorePlayerExpGaugeWidget()
	{
	}
	struct Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonusXp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bonusXp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::NewProp_bonusXp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::NewProp_bonusXp = { "bonusXp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerExpGaugeWidget_eventAdd_Parms, bonusXp), METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::NewProp_bonusXp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::NewProp_bonusXp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::NewProp_bonusXp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerExpGaugeWidget, nullptr, "Add", nullptr, nullptr, sizeof(CorePlayerExpGaugeWidget_eventAdd_Parms), Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerExpGaugeWidget_eventOnUpdateComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerExpGaugeWidget, nullptr, "OnUpdateComplete", nullptr, nullptr, sizeof(CorePlayerExpGaugeWidget_eventOnUpdateComplete_Parms), Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerExpGaugeWidget_eventOnUpdateProgress_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerExpGaugeWidget, nullptr, "OnUpdateProgress", nullptr, nullptr, sizeof(CorePlayerExpGaugeWidget_eventOnUpdateProgress_Parms), Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::NewProp_playerViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::NewProp_playerViewData = { "playerViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerExpGaugeWidget_eventSetViewData_Parms, playerViewData), Z_Construct_UScriptStruct_FPlayerLevelViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::NewProp_playerViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::NewProp_playerViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::NewProp_playerViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerExpGaugeWidget, nullptr, "SetViewData", nullptr, nullptr, sizeof(CorePlayerExpGaugeWidget_eventSetViewData_Parms), Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerExpGaugeWidget_NoRegister()
	{
		return UCorePlayerExpGaugeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onPlayerExpUpdateCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__onPlayerExpUpdateCompletedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XpText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_XpText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProgressText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerExpGaugeWidget_Add, "Add" }, // 701528553
		{ &Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature, "OnPlayerExpUpdateCompleted__DelegateSignature" }, // 1047356176
		{ &Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateComplete, "OnUpdateComplete" }, // 836766482
		{ &Z_Construct_UFunction_UCorePlayerExpGaugeWidget_OnUpdateProgress, "OnUpdateProgress" }, // 3873500026
		{ &Z_Construct_UFunction_UCorePlayerExpGaugeWidget_SetViewData, "SetViewData" }, // 4181072314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePlayerExpGaugeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp__onPlayerExpUpdateCompletedDelegate_MetaData[] = {
		{ "Category", "CorePlayerExpGaugeWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp__onPlayerExpUpdateCompletedDelegate = { "_onPlayerExpUpdateCompletedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerExpGaugeWidget, _onPlayerExpUpdateCompletedDelegate), Z_Construct_UDelegateFunction_UCorePlayerExpGaugeWidget_OnPlayerExpUpdateCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp__onPlayerExpUpdateCompletedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp__onPlayerExpUpdateCompletedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_XpText_MetaData[] = {
		{ "Category", "CorePlayerExpGaugeWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_XpText = { "XpText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerExpGaugeWidget, XpText), METADATA_PARAMS(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_XpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_XpText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_ProgressText_MetaData[] = {
		{ "Category", "CorePlayerExpGaugeWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerExpGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_ProgressText = { "ProgressText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerExpGaugeWidget, ProgressText), METADATA_PARAMS(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_ProgressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_ProgressText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp__onPlayerExpUpdateCompletedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_XpText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::NewProp_ProgressText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerExpGaugeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::ClassParams = {
		&UCorePlayerExpGaugeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerExpGaugeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerExpGaugeWidget, 286359483);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerExpGaugeWidget>()
	{
		return UCorePlayerExpGaugeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerExpGaugeWidget(Z_Construct_UClass_UCorePlayerExpGaugeWidget, &UCorePlayerExpGaugeWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerExpGaugeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerExpGaugeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
