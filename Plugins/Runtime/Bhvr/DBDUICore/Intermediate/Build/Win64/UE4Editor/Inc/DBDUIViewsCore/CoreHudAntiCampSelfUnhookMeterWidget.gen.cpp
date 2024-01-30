// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudAntiCampSelfUnhookMeterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudAntiCampSelfUnhookMeterWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreHudAntiCampSelfUnhookMeterWidget::execGetPreviousState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAntiCampSelfUnhookMeterState*)Z_Param__Result=P_THIS->GetPreviousState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAntiCampSelfUnhookMeterWidget::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAntiCampSelfUnhookMeterWidget::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAntiCampSelfUnhookMeterState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	static FName NAME_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState = FName(TEXT("SetVisualState"));
	void UCoreHudAntiCampSelfUnhookMeterWidget::SetVisualState(const EAntiCampSelfUnhookMeterState newState)
	{
		CoreHudAntiCampSelfUnhookMeterWidget_eventSetVisualState_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState),&Parms);
	}
	void UCoreHudAntiCampSelfUnhookMeterWidget::StaticRegisterNativesUCoreHudAntiCampSelfUnhookMeterWidget()
	{
		UClass* Class = UCoreHudAntiCampSelfUnhookMeterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPreviousState", &UCoreHudAntiCampSelfUnhookMeterWidget::execGetPreviousState },
			{ "GetProgress", &UCoreHudAntiCampSelfUnhookMeterWidget::execGetProgress },
			{ "GetState", &UCoreHudAntiCampSelfUnhookMeterWidget::execGetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics
	{
		struct CoreHudAntiCampSelfUnhookMeterWidget_eventGetPreviousState_Parms
		{
			EAntiCampSelfUnhookMeterState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAntiCampSelfUnhookMeterWidget_eventGetPreviousState_Parms, ReturnValue), Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAntiCampSelfUnhookMeterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget, nullptr, "GetPreviousState", nullptr, nullptr, sizeof(CoreHudAntiCampSelfUnhookMeterWidget_eventGetPreviousState_Parms), Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics
	{
		struct CoreHudAntiCampSelfUnhookMeterWidget_eventGetProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAntiCampSelfUnhookMeterWidget_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAntiCampSelfUnhookMeterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget, nullptr, "GetProgress", nullptr, nullptr, sizeof(CoreHudAntiCampSelfUnhookMeterWidget_eventGetProgress_Parms), Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics
	{
		struct CoreHudAntiCampSelfUnhookMeterWidget_eventGetState_Parms
		{
			EAntiCampSelfUnhookMeterState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAntiCampSelfUnhookMeterWidget_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAntiCampSelfUnhookMeterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget, nullptr, "GetState", nullptr, nullptr, sizeof(CoreHudAntiCampSelfUnhookMeterWidget_eventGetState_Parms), Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAntiCampSelfUnhookMeterWidget_eventSetVisualState_Parms, newState), Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAntiCampSelfUnhookMeterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget, nullptr, "SetVisualState", nullptr, nullptr, sizeof(CoreHudAntiCampSelfUnhookMeterWidget_eventSetVisualState_Parms), Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_NoRegister()
	{
		return UCoreHudAntiCampSelfUnhookMeterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetPreviousState, "GetPreviousState" }, // 2096865337
		{ &Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetProgress, "GetProgress" }, // 3188900706
		{ &Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_GetState, "GetState" }, // 2311014199
		{ &Z_Construct_UFunction_UCoreHudAntiCampSelfUnhookMeterWidget_SetVisualState, "SetVisualState" }, // 346979914
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreHudAntiCampSelfUnhookMeterWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAntiCampSelfUnhookMeterWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudAntiCampSelfUnhookMeterWidget, IAntiCampSelfUnhookMeterViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudAntiCampSelfUnhookMeterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::ClassParams = {
		&UCoreHudAntiCampSelfUnhookMeterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudAntiCampSelfUnhookMeterWidget, 750533656);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudAntiCampSelfUnhookMeterWidget>()
	{
		return UCoreHudAntiCampSelfUnhookMeterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudAntiCampSelfUnhookMeterWidget(Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget, &UCoreHudAntiCampSelfUnhookMeterWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudAntiCampSelfUnhookMeterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudAntiCampSelfUnhookMeterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
