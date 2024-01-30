// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreKeyListenerButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreKeyListenerButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreKeyListenerButtonWidget::execSetKeyOverride)
	{
		P_GET_STRUCT(FKey,Z_Param_keyOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyOverride(Z_Param_keyOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerButtonWidget::execSetUIAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIAction(EUIActionType(Z_Param_actionType));
		P_NATIVE_END;
	}
	void UCoreKeyListenerButtonWidget::StaticRegisterNativesUCoreKeyListenerButtonWidget()
	{
		UClass* Class = UCoreKeyListenerButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetKeyOverride", &UCoreKeyListenerButtonWidget::execSetKeyOverride },
			{ "SetUIAction", &UCoreKeyListenerButtonWidget::execSetUIAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics
	{
		struct CoreKeyListenerButtonWidget_eventSetKeyOverride_Parms
		{
			FKey keyOverride;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::NewProp_keyOverride = { "keyOverride", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerButtonWidget_eventSetKeyOverride_Parms, keyOverride), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::NewProp_keyOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerButtonWidget, nullptr, "SetKeyOverride", nullptr, nullptr, sizeof(CoreKeyListenerButtonWidget_eventSetKeyOverride_Parms), Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics
	{
		struct CoreKeyListenerButtonWidget_eventSetUIAction_Parms
		{
			EUIActionType actionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerButtonWidget_eventSetUIAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::NewProp_actionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerButtonWidget, nullptr, "SetUIAction", nullptr, nullptr, sizeof(CoreKeyListenerButtonWidget_eventSetUIAction_Parms), Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister()
	{
		return UCoreKeyListenerButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKeyboardLabelVisible_MetaData[];
#endif
		static void NewProp_IsKeyboardLabelVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKeyboardLabelVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNameTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputNameTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetKeyOverride, "SetKeyOverride" }, // 1217678645
		{ &Z_Construct_UFunction_UCoreKeyListenerButtonWidget_SetUIAction, "SetUIAction" }, // 3154775705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreKeyListenerButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible_MetaData[] = {
		{ "Category", "CoreKeyListenerButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtonWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible_SetBit(void* Obj)
	{
		((UCoreKeyListenerButtonWidget*)Obj)->IsKeyboardLabelVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible = { "IsKeyboardLabelVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreKeyListenerButtonWidget), &Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_InputNameTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreKeyListenerButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_InputNameTB = { "InputNameTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerButtonWidget, InputNameTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_InputNameTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_InputNameTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_IsKeyboardLabelVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::NewProp_InputNameTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreKeyListenerButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::ClassParams = {
		&UCoreKeyListenerButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreKeyListenerButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreKeyListenerButtonWidget, 3075267518);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreKeyListenerButtonWidget>()
	{
		return UCoreKeyListenerButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreKeyListenerButtonWidget(Z_Construct_UClass_UCoreKeyListenerButtonWidget, &UCoreKeyListenerButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreKeyListenerButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreKeyListenerButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
