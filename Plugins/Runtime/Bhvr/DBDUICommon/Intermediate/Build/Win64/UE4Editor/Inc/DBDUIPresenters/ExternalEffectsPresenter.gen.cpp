// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ExternalEffectsPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalEffectsPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UExternalEffectsPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UExternalEffectsPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EExternalEffectSource();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FExternalEffectData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExternalEffectsPresenter::execOnHideExternalEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemId);
		P_GET_ENUM(EExternalEffectSource,Z_Param_externalEffectSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideExternalEffect(Z_Param_itemId,EExternalEffectSource(Z_Param_externalEffectSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExternalEffectsPresenter::execOnShowExternalEffect)
	{
		P_GET_STRUCT_REF(FExternalEffectData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowExternalEffect(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void UExternalEffectsPresenter::StaticRegisterNativesUExternalEffectsPresenter()
	{
		UClass* Class = UExternalEffectsPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHideExternalEffect", &UExternalEffectsPresenter::execOnHideExternalEffect },
			{ "OnShowExternalEffect", &UExternalEffectsPresenter::execOnShowExternalEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics
	{
		struct ExternalEffectsPresenter_eventOnHideExternalEffect_Parms
		{
			FName itemId;
			EExternalEffectSource externalEffectSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_externalEffectSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalEffectSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_externalEffectSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalEffectsPresenter_eventOnHideExternalEffect_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource = { "externalEffectSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalEffectsPresenter_eventOnHideExternalEffect_Parms, externalEffectSource), Z_Construct_UEnum_DeadByDaylight_EExternalEffectSource, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::NewProp_externalEffectSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalEffectsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalEffectsPresenter, nullptr, "OnHideExternalEffect", nullptr, nullptr, sizeof(ExternalEffectsPresenter_eventOnHideExternalEffect_Parms), Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics
	{
		struct ExternalEffectsPresenter_eventOnShowExternalEffect_Parms
		{
			FExternalEffectData data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalEffectsPresenter_eventOnShowExternalEffect_Parms, data), Z_Construct_UScriptStruct_FExternalEffectData, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalEffectsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalEffectsPresenter, nullptr, "OnShowExternalEffect", nullptr, nullptr, sizeof(ExternalEffectsPresenter_eventOnShowExternalEffect_Parms), Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExternalEffectsPresenter_NoRegister()
	{
		return UExternalEffectsPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UExternalEffectsPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreExternalEffectsWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreExternalEffectsWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExternalEffectsPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExternalEffectsPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExternalEffectsPresenter_OnHideExternalEffect, "OnHideExternalEffect" }, // 478675531
		{ &Z_Construct_UFunction_UExternalEffectsPresenter_OnShowExternalEffect, "OnShowExternalEffect" }, // 2994905812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalEffectsPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExternalEffectsPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExternalEffectsPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalEffectsPresenter_Statics::NewProp_CoreExternalEffectsWidgetClass_MetaData[] = {
		{ "Category", "ExternalEffectsPresenter" },
		{ "ModuleRelativePath", "Public/ExternalEffectsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExternalEffectsPresenter_Statics::NewProp_CoreExternalEffectsWidgetClass = { "CoreExternalEffectsWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExternalEffectsPresenter, CoreExternalEffectsWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExternalEffectsPresenter_Statics::NewProp_CoreExternalEffectsWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExternalEffectsPresenter_Statics::NewProp_CoreExternalEffectsWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExternalEffectsPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalEffectsPresenter_Statics::NewProp_CoreExternalEffectsWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExternalEffectsPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalEffectsPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExternalEffectsPresenter_Statics::ClassParams = {
		&UExternalEffectsPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExternalEffectsPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExternalEffectsPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExternalEffectsPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExternalEffectsPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExternalEffectsPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExternalEffectsPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExternalEffectsPresenter, 1511755657);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UExternalEffectsPresenter>()
	{
		return UExternalEffectsPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExternalEffectsPresenter(Z_Construct_UClass_UExternalEffectsPresenter, &UExternalEffectsPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UExternalEffectsPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalEffectsPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
