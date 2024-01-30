// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreToggleButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreToggleButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreToggleButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreToggleButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	DEFINE_FUNCTION(UCoreToggleButtonWidget::execIsToggled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsToggled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreToggleButtonWidget::execSetToDefaultState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToDefaultState();
		P_NATIVE_END;
	}
	static FName NAME_UCoreToggleButtonWidget_SetActiveVisualState = FName(TEXT("SetActiveVisualState"));
	void UCoreToggleButtonWidget::SetActiveVisualState(bool isActive)
	{
		CoreToggleButtonWidget_eventSetActiveVisualState_Parms Parms;
		Parms.isActive=isActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreToggleButtonWidget_SetActiveVisualState),&Parms);
	}
	void UCoreToggleButtonWidget::StaticRegisterNativesUCoreToggleButtonWidget()
	{
		UClass* Class = UCoreToggleButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsToggled", &UCoreToggleButtonWidget::execIsToggled },
			{ "SetToDefaultState", &UCoreToggleButtonWidget::execSetToDefaultState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics
	{
		struct CoreToggleButtonWidget_eventIsToggled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreToggleButtonWidget_eventIsToggled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreToggleButtonWidget_eventIsToggled_Parms), &Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreToggleButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreToggleButtonWidget, nullptr, "IsToggled", nullptr, nullptr, sizeof(CoreToggleButtonWidget_eventIsToggled_Parms), Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((CoreToggleButtonWidget_eventSetActiveVisualState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreToggleButtonWidget_eventSetActiveVisualState_Parms), &Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreToggleButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreToggleButtonWidget, nullptr, "SetActiveVisualState", nullptr, nullptr, sizeof(CoreToggleButtonWidget_eventSetActiveVisualState_Parms), Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreToggleButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreToggleButtonWidget, nullptr, "SetToDefaultState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreToggleButtonWidget_NoRegister()
	{
		return UCoreToggleButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreToggleButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultToggleState_MetaData[];
#endif
		static void NewProp_DefaultToggleState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultToggleState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreToggleButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreToggleButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreToggleButtonWidget_IsToggled, "IsToggled" }, // 410984899
		{ &Z_Construct_UFunction_UCoreToggleButtonWidget_SetActiveVisualState, "SetActiveVisualState" }, // 2714326556
		{ &Z_Construct_UFunction_UCoreToggleButtonWidget_SetToDefaultState, "SetToDefaultState" }, // 3900504172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreToggleButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreToggleButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreToggleButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState_MetaData[] = {
		{ "Category", "CoreToggleButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreToggleButtonWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState_SetBit(void* Obj)
	{
		((UCoreToggleButtonWidget*)Obj)->DefaultToggleState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState = { "DefaultToggleState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreToggleButtonWidget), &Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreToggleButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreToggleButtonWidget_Statics::NewProp_DefaultToggleState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreToggleButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreToggleButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreToggleButtonWidget_Statics::ClassParams = {
		&UCoreToggleButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreToggleButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreToggleButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreToggleButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreToggleButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreToggleButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreToggleButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreToggleButtonWidget, 831550853);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreToggleButtonWidget>()
	{
		return UCoreToggleButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreToggleButtonWidget(Z_Construct_UClass_UCoreToggleButtonWidget, &UCoreToggleButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreToggleButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreToggleButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
