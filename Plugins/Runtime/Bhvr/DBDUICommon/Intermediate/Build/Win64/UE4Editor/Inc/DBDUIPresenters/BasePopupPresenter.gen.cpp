// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/BasePopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBasePopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBasePopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBasePopupPresenter::execIsContextEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContextEntered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePopupPresenter::execOnContextEnter)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextEnter(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePopupPresenter::execOnContextLeave)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextLeave(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	void UBasePopupPresenter::StaticRegisterNativesUBasePopupPresenter()
	{
		UClass* Class = UBasePopupPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsContextEntered", &UBasePopupPresenter::execIsContextEntered },
			{ "OnContextEnter", &UBasePopupPresenter::execOnContextEnter },
			{ "OnContextLeave", &UBasePopupPresenter::execOnContextLeave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics
	{
		struct BasePopupPresenter_eventIsContextEntered_Parms
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
	void Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasePopupPresenter_eventIsContextEntered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BasePopupPresenter_eventIsContextEntered_Parms), &Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePopupPresenter, nullptr, "IsContextEntered", nullptr, nullptr, sizeof(BasePopupPresenter_eventIsContextEntered_Parms), Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics
	{
		struct BasePopupPresenter_eventOnContextEnter_Parms
		{
			EContext context;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_context_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePopupPresenter_eventOnContextEnter_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePopupPresenter, nullptr, "OnContextEnter", nullptr, nullptr, sizeof(BasePopupPresenter_eventOnContextEnter_Parms), Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics
	{
		struct BasePopupPresenter_eventOnContextLeave_Parms
		{
			EContext context;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_context_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePopupPresenter_eventOnContextLeave_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePopupPresenter, nullptr, "OnContextLeave", nullptr, nullptr, sizeof(BasePopupPresenter_eventOnContextLeave_Parms), Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBasePopupPresenter_NoRegister()
	{
		return UBasePopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UBasePopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObservedContext_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObservedContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PopupWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePopupPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePopupPresenter_IsContextEntered, "IsContextEntered" }, // 321681639
		{ &Z_Construct_UFunction_UBasePopupPresenter_OnContextEnter, "OnContextEnter" }, // 3484865873
		{ &Z_Construct_UFunction_UBasePopupPresenter_OnContextLeave, "OnContextLeave" }, // 356178482
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasePopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext_MetaData[] = {
		{ "Category", "BasePopupPresenter" },
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext = { "ObservedContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePopupPresenter, ObservedContext), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_PopupWidgetClass_MetaData[] = {
		{ "Category", "BasePopupPresenter" },
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_PopupWidgetClass = { "PopupWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePopupPresenter, PopupWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_PopupWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_PopupWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp__viewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasePopupPresenter" },
		{ "ModuleRelativePath", "Public/BasePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp__viewData = { "_viewData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePopupPresenter, _viewData), Z_Construct_UClass_UBasePopupViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp__viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp__viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePopupPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_ObservedContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp_PopupWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePopupPresenter_Statics::NewProp__viewData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePopupPresenter_Statics::ClassParams = {
		&UBasePopupPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasePopupPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupPresenter_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePopupPresenter, 1883663048);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UBasePopupPresenter>()
	{
		return UBasePopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePopupPresenter(Z_Construct_UClass_UBasePopupPresenter, &UBasePopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UBasePopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
