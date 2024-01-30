// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/DisplayStandPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStandPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UDisplayStandPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UDisplayStandPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EContext();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorData();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayStandPresenter::execIsContextEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContextEntered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayStandPresenter::execOnDisplayStandRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisplayStandRotation(Z_Param_distance);
		P_NATIVE_END;
	}
	void UDisplayStandPresenter::StaticRegisterNativesUDisplayStandPresenter()
	{
		UClass* Class = UDisplayStandPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsContextEntered", &UDisplayStandPresenter::execIsContextEntered },
			{ "OnDisplayStandRotation", &UDisplayStandPresenter::execOnDisplayStandRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics
	{
		struct DisplayStandPresenter_eventIsContextEntered_Parms
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
	void Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayStandPresenter_eventIsContextEntered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DisplayStandPresenter_eventIsContextEntered_Parms), &Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayStandPresenter, nullptr, "IsContextEntered", nullptr, nullptr, sizeof(DisplayStandPresenter_eventIsContextEntered_Parms), Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics
	{
		struct DisplayStandPresenter_eventOnDisplayStandRotation_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisplayStandPresenter_eventOnDisplayStandRotation_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayStandPresenter, nullptr, "OnDisplayStandRotation", nullptr, nullptr, sizeof(DisplayStandPresenter_eventOnDisplayStandRotation_Parms), Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDisplayStandPresenter_NoRegister()
	{
		return UDisplayStandPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayStandPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreDisplayStandWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreDisplayStandWidgetClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObservedContext_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObservedContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayStandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayStandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragZoneLayoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragZoneLayoutData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragZonePositionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragZonePositionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragZonePositionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragZonePositionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragZoneSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragZoneSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragZoneSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragZoneSizeY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayStandPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayStandPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayStandPresenter_IsContextEntered, "IsContextEntered" }, // 2835011259
		{ &Z_Construct_UFunction_UDisplayStandPresenter_OnDisplayStandRotation, "OnDisplayStandRotation" }, // 1754828025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DisplayStandPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_CoreDisplayStandWidgetClass_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_CoreDisplayStandWidgetClass = { "CoreDisplayStandWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, CoreDisplayStandWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_CoreDisplayStandWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_CoreDisplayStandWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext = { "ObservedContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, ObservedContext), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DisplayStandName_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DisplayStandName = { "DisplayStandName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, DisplayStandName), METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DisplayStandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DisplayStandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneLayoutData_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneLayoutData = { "DragZoneLayoutData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, DragZoneLayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneLayoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneLayoutData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionX_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionX = { "DragZonePositionX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, DragZonePositionX), METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionY_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionY = { "DragZonePositionY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, DragZonePositionY), METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeX_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeX = { "DragZoneSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, DragZoneSizeX), METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeY_MetaData[] = {
		{ "Category", "DisplayStandPresenter" },
		{ "ModuleRelativePath", "Public/DisplayStandPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeY = { "DragZoneSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandPresenter, DragZoneSizeY), METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayStandPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_CoreDisplayStandWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_ObservedContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DisplayStandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneLayoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZonePositionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandPresenter_Statics::NewProp_DragZoneSizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayStandPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayStandPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisplayStandPresenter_Statics::ClassParams = {
		&UDisplayStandPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisplayStandPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayStandPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayStandPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisplayStandPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisplayStandPresenter, 1075109111);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UDisplayStandPresenter>()
	{
		return UDisplayStandPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisplayStandPresenter(Z_Construct_UClass_UDisplayStandPresenter, &UDisplayStandPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UDisplayStandPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayStandPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
