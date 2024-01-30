// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudAimingCrosshairWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudAimingCrosshairWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudAimingCrosshairWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudAimingCrosshairWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudAimingCrosshairViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreHudAimingCrosshairWidget::execGetPreviousState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAimingCrosshairState*)Z_Param__Result=P_THIS->GetPreviousState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAimingCrosshairWidget::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAimingCrosshairWidget::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAimingCrosshairState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	void UCoreHudAimingCrosshairWidget::StaticRegisterNativesUCoreHudAimingCrosshairWidget()
	{
		UClass* Class = UCoreHudAimingCrosshairWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPreviousState", &UCoreHudAimingCrosshairWidget::execGetPreviousState },
			{ "GetProgress", &UCoreHudAimingCrosshairWidget::execGetProgress },
			{ "GetState", &UCoreHudAimingCrosshairWidget::execGetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics
	{
		struct CoreHudAimingCrosshairWidget_eventGetPreviousState_Parms
		{
			EAimingCrosshairState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAimingCrosshairWidget_eventGetPreviousState_Parms, ReturnValue), Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAimingCrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAimingCrosshairWidget, nullptr, "GetPreviousState", nullptr, nullptr, sizeof(CoreHudAimingCrosshairWidget_eventGetPreviousState_Parms), Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics
	{
		struct CoreHudAimingCrosshairWidget_eventGetProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAimingCrosshairWidget_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAimingCrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAimingCrosshairWidget, nullptr, "GetProgress", nullptr, nullptr, sizeof(CoreHudAimingCrosshairWidget_eventGetProgress_Parms), Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics
	{
		struct CoreHudAimingCrosshairWidget_eventGetState_Parms
		{
			EAimingCrosshairState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAimingCrosshairWidget_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_DBDUIViewInterfaces_EAimingCrosshairState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAimingCrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAimingCrosshairWidget, nullptr, "GetState", nullptr, nullptr, sizeof(CoreHudAimingCrosshairWidget_eventGetState_Parms), Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudAimingCrosshairWidget_NoRegister()
	{
		return UCoreHudAimingCrosshairWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetPreviousState, "GetPreviousState" }, // 2229994037
		{ &Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetProgress, "GetProgress" }, // 2685705175
		{ &Z_Construct_UFunction_UCoreHudAimingCrosshairWidget_GetState, "GetState" }, // 4051690433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreHudAimingCrosshairWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAimingCrosshairWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudAimingCrosshairViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudAimingCrosshairWidget, IHudAimingCrosshairViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudAimingCrosshairWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::ClassParams = {
		&UCoreHudAimingCrosshairWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudAimingCrosshairWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudAimingCrosshairWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudAimingCrosshairWidget, 3744236472);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudAimingCrosshairWidget>()
	{
		return UCoreHudAimingCrosshairWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudAimingCrosshairWidget(Z_Construct_UClass_UCoreHudAimingCrosshairWidget, &UCoreHudAimingCrosshairWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudAimingCrosshairWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudAimingCrosshairWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
