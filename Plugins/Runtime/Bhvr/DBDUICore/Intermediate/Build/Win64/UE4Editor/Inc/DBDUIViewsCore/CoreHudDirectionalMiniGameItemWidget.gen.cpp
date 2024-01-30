// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudDirectionalMiniGameItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudDirectionalMiniGameItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey();
// End Cross Module References
	static FName NAME_UCoreHudDirectionalMiniGameItemWidget_Init = FName(TEXT("Init"));
	void UCoreHudDirectionalMiniGameItemWidget::Init(EDirectionalInputKey direction)
	{
		CoreHudDirectionalMiniGameItemWidget_eventInit_Parms Parms;
		Parms.direction=direction;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudDirectionalMiniGameItemWidget_Init),&Parms);
	}
	static FName NAME_UCoreHudDirectionalMiniGameItemWidget_RevealDirection = FName(TEXT("RevealDirection"));
	void UCoreHudDirectionalMiniGameItemWidget::RevealDirection(bool withAnimation)
	{
		CoreHudDirectionalMiniGameItemWidget_eventRevealDirection_Parms Parms;
		Parms.withAnimation=withAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudDirectionalMiniGameItemWidget_RevealDirection),&Parms);
	}
	static FName NAME_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState = FName(TEXT("UpdateFinaleVisualState"));
	void UCoreHudDirectionalMiniGameItemWidget::UpdateFinaleVisualState(bool isSuccessful)
	{
		CoreHudDirectionalMiniGameItemWidget_eventUpdateFinaleVisualState_Parms Parms;
		Parms.isSuccessful=isSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState),&Parms);
	}
	static FName NAME_UCoreHudDirectionalMiniGameItemWidget_UpdateResult = FName(TEXT("UpdateResult"));
	void UCoreHudDirectionalMiniGameItemWidget::UpdateResult(bool isSuccessful)
	{
		CoreHudDirectionalMiniGameItemWidget_eventUpdateResult_Parms Parms;
		Parms.isSuccessful=isSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudDirectionalMiniGameItemWidget_UpdateResult),&Parms);
	}
	void UCoreHudDirectionalMiniGameItemWidget::StaticRegisterNativesUCoreHudDirectionalMiniGameItemWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudDirectionalMiniGameItemWidget_eventInit_Parms, direction), Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::NewProp_direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget, nullptr, "Init", nullptr, nullptr, sizeof(CoreHudDirectionalMiniGameItemWidget_eventInit_Parms), Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics
	{
		static void NewProp_withAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_withAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::NewProp_withAnimation_SetBit(void* Obj)
	{
		((CoreHudDirectionalMiniGameItemWidget_eventRevealDirection_Parms*)Obj)->withAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::NewProp_withAnimation = { "withAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreHudDirectionalMiniGameItemWidget_eventRevealDirection_Parms), &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::NewProp_withAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::NewProp_withAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget, nullptr, "RevealDirection", nullptr, nullptr, sizeof(CoreHudDirectionalMiniGameItemWidget_eventRevealDirection_Parms), Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics
	{
		static void NewProp_isSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::NewProp_isSuccessful_SetBit(void* Obj)
	{
		((CoreHudDirectionalMiniGameItemWidget_eventUpdateFinaleVisualState_Parms*)Obj)->isSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::NewProp_isSuccessful = { "isSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreHudDirectionalMiniGameItemWidget_eventUpdateFinaleVisualState_Parms), &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::NewProp_isSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::NewProp_isSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget, nullptr, "UpdateFinaleVisualState", nullptr, nullptr, sizeof(CoreHudDirectionalMiniGameItemWidget_eventUpdateFinaleVisualState_Parms), Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics
	{
		static void NewProp_isSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::NewProp_isSuccessful_SetBit(void* Obj)
	{
		((CoreHudDirectionalMiniGameItemWidget_eventUpdateResult_Parms*)Obj)->isSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::NewProp_isSuccessful = { "isSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreHudDirectionalMiniGameItemWidget_eventUpdateResult_Parms), &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::NewProp_isSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::NewProp_isSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget, nullptr, "UpdateResult", nullptr, nullptr, sizeof(CoreHudDirectionalMiniGameItemWidget_eventUpdateResult_Parms), Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister()
	{
		return UCoreHudDirectionalMiniGameItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_Init, "Init" }, // 259342756
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_RevealDirection, "RevealDirection" }, // 453719839
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateFinaleVisualState, "UpdateFinaleVisualState" }, // 3605490423
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameItemWidget_UpdateResult, "UpdateResult" }, // 649080465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreHudDirectionalMiniGameItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameItemWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudDirectionalMiniGameItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::ClassParams = {
		&UCoreHudDirectionalMiniGameItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudDirectionalMiniGameItemWidget, 2284688208);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudDirectionalMiniGameItemWidget>()
	{
		return UCoreHudDirectionalMiniGameItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudDirectionalMiniGameItemWidget(Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget, &UCoreHudDirectionalMiniGameItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudDirectionalMiniGameItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudDirectionalMiniGameItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
