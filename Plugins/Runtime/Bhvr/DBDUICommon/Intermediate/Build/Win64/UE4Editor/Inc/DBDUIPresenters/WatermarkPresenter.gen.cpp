// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/WatermarkPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWatermarkPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UWatermarkPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UWatermarkPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWatermarkPresenter::execIsNonShippingBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNonShippingBuild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWatermarkPresenter::execIsSteamBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSteamBuild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWatermarkPresenter::execIsUsingCommandLineArgument)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingCommandLineArgument();
		P_NATIVE_END;
	}
	void UWatermarkPresenter::StaticRegisterNativesUWatermarkPresenter()
	{
		UClass* Class = UWatermarkPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsNonShippingBuild", &UWatermarkPresenter::execIsNonShippingBuild },
			{ "IsSteamBuild", &UWatermarkPresenter::execIsSteamBuild },
			{ "IsUsingCommandLineArgument", &UWatermarkPresenter::execIsUsingCommandLineArgument },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics
	{
		struct WatermarkPresenter_eventIsNonShippingBuild_Parms
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
	void Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WatermarkPresenter_eventIsNonShippingBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WatermarkPresenter_eventIsNonShippingBuild_Parms), &Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WatermarkPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWatermarkPresenter, nullptr, "IsNonShippingBuild", nullptr, nullptr, sizeof(WatermarkPresenter_eventIsNonShippingBuild_Parms), Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics
	{
		struct WatermarkPresenter_eventIsSteamBuild_Parms
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
	void Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WatermarkPresenter_eventIsSteamBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WatermarkPresenter_eventIsSteamBuild_Parms), &Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WatermarkPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWatermarkPresenter, nullptr, "IsSteamBuild", nullptr, nullptr, sizeof(WatermarkPresenter_eventIsSteamBuild_Parms), Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics
	{
		struct WatermarkPresenter_eventIsUsingCommandLineArgument_Parms
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
	void Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WatermarkPresenter_eventIsUsingCommandLineArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WatermarkPresenter_eventIsUsingCommandLineArgument_Parms), &Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WatermarkPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWatermarkPresenter, nullptr, "IsUsingCommandLineArgument", nullptr, nullptr, sizeof(WatermarkPresenter_eventIsUsingCommandLineArgument_Parms), Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWatermarkPresenter_NoRegister()
	{
		return UWatermarkPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UWatermarkPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatermarkWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WatermarkWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWatermarkPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWatermarkPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWatermarkPresenter_IsNonShippingBuild, "IsNonShippingBuild" }, // 766052943
		{ &Z_Construct_UFunction_UWatermarkPresenter_IsSteamBuild, "IsSteamBuild" }, // 1679951849
		{ &Z_Construct_UFunction_UWatermarkPresenter_IsUsingCommandLineArgument, "IsUsingCommandLineArgument" }, // 714195042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWatermarkPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WatermarkPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WatermarkPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWatermarkPresenter_Statics::NewProp_WatermarkWidgetClass_MetaData[] = {
		{ "Category", "WatermarkPresenter" },
		{ "ModuleRelativePath", "Public/WatermarkPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWatermarkPresenter_Statics::NewProp_WatermarkWidgetClass = { "WatermarkWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWatermarkPresenter, WatermarkWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWatermarkPresenter_Statics::NewProp_WatermarkWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWatermarkPresenter_Statics::NewProp_WatermarkWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWatermarkPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWatermarkPresenter_Statics::NewProp_WatermarkWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWatermarkPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWatermarkPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWatermarkPresenter_Statics::ClassParams = {
		&UWatermarkPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWatermarkPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWatermarkPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWatermarkPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWatermarkPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWatermarkPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWatermarkPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWatermarkPresenter, 252999651);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UWatermarkPresenter>()
	{
		return UWatermarkPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWatermarkPresenter(Z_Construct_UClass_UWatermarkPresenter, &UWatermarkPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UWatermarkPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWatermarkPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
