// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudDirectionalMiniGameViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudDirectionalMiniGameViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudDirectionalMiniGameViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalMiniGameType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalMinigameResult();
// End Cross Module References
	DEFINE_FUNCTION(IHudDirectionalMiniGameViewInterface::execInit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxItems);
		P_GET_ENUM(EDirectionalMiniGameType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_maxItems,EDirectionalMiniGameType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudDirectionalMiniGameViewInterface::execShow)
	{
		P_GET_TARRAY_REF(EDirectionalInputKey,Z_Param_Out_directions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Show_Implementation(Z_Param_Out_directions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudDirectionalMiniGameViewInterface::execUpdateResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_UBOOL(Z_Param_isSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateResult_Implementation(Z_Param_index,Z_Param_isSuccessful);
		P_NATIVE_END;
	}
	void IHudDirectionalMiniGameViewInterface::Hide()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Hide instead.");
	}
	void IHudDirectionalMiniGameViewInterface::Init(int32 maxItems, EDirectionalMiniGameType type)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void IHudDirectionalMiniGameViewInterface::Show(TArray<EDirectionalInputKey> const& directions)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Show instead.");
	}
	void IHudDirectionalMiniGameViewInterface::UpdateFinalResult(EDirectionalMinigameResult finalResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateFinalResult instead.");
	}
	void IHudDirectionalMiniGameViewInterface::UpdateResult(int32 index, bool isSuccessful)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateResult instead.");
	}
	void UHudDirectionalMiniGameViewInterface::StaticRegisterNativesUHudDirectionalMiniGameViewInterface()
	{
		UClass* Class = UHudDirectionalMiniGameViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &IHudDirectionalMiniGameViewInterface::execInit },
			{ "Show", &IHudDirectionalMiniGameViewInterface::execShow },
			{ "UpdateResult", &IHudDirectionalMiniGameViewInterface::execUpdateResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudDirectionalMiniGameViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudDirectionalMiniGameViewInterface, nullptr, "Hide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxItems;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::NewProp_maxItems = { "maxItems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudDirectionalMiniGameViewInterface_eventInit_Parms, maxItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudDirectionalMiniGameViewInterface_eventInit_Parms, type), Z_Construct_UEnum_DBDSharedTypes_EDirectionalMiniGameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::NewProp_maxItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudDirectionalMiniGameViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudDirectionalMiniGameViewInterface, nullptr, "Init", nullptr, nullptr, sizeof(HudDirectionalMiniGameViewInterface_eventInit_Parms), Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directions_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_directions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_directions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_Inner = { "directions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions = { "directions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudDirectionalMiniGameViewInterface_eventShow_Parms, directions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::NewProp_directions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudDirectionalMiniGameViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudDirectionalMiniGameViewInterface, nullptr, "Show", nullptr, nullptr, sizeof(HudDirectionalMiniGameViewInterface_eventShow_Parms), Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_finalResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_finalResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::NewProp_finalResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::NewProp_finalResult = { "finalResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudDirectionalMiniGameViewInterface_eventUpdateFinalResult_Parms, finalResult), Z_Construct_UEnum_DBDSharedTypes_EDirectionalMinigameResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::NewProp_finalResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::NewProp_finalResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudDirectionalMiniGameViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudDirectionalMiniGameViewInterface, nullptr, "UpdateFinalResult", nullptr, nullptr, sizeof(HudDirectionalMiniGameViewInterface_eventUpdateFinalResult_Parms), Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_isSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudDirectionalMiniGameViewInterface_eventUpdateResult_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::NewProp_isSuccessful_SetBit(void* Obj)
	{
		((HudDirectionalMiniGameViewInterface_eventUpdateResult_Parms*)Obj)->isSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::NewProp_isSuccessful = { "isSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudDirectionalMiniGameViewInterface_eventUpdateResult_Parms), &Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::NewProp_isSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::NewProp_isSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudDirectionalMiniGameViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudDirectionalMiniGameViewInterface, nullptr, "UpdateResult", nullptr, nullptr, sizeof(HudDirectionalMiniGameViewInterface_eventUpdateResult_Parms), Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_NoRegister()
	{
		return UHudDirectionalMiniGameViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Hide, "Hide" }, // 304950678
		{ &Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Init, "Init" }, // 1927863475
		{ &Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_Show, "Show" }, // 2735953789
		{ &Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateFinalResult, "UpdateFinalResult" }, // 4270916651
		{ &Z_Construct_UFunction_UHudDirectionalMiniGameViewInterface_UpdateResult, "UpdateResult" }, // 474164126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudDirectionalMiniGameViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudDirectionalMiniGameViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::ClassParams = {
		&UHudDirectionalMiniGameViewInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudDirectionalMiniGameViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudDirectionalMiniGameViewInterface, 3908037910);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudDirectionalMiniGameViewInterface>()
	{
		return UHudDirectionalMiniGameViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudDirectionalMiniGameViewInterface(Z_Construct_UClass_UHudDirectionalMiniGameViewInterface, &UHudDirectionalMiniGameViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudDirectionalMiniGameViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudDirectionalMiniGameViewInterface);
	static FName NAME_UHudDirectionalMiniGameViewInterface_Hide = FName(TEXT("Hide"));
	void IHudDirectionalMiniGameViewInterface::Execute_Hide(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudDirectionalMiniGameViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudDirectionalMiniGameViewInterface_Hide);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UHudDirectionalMiniGameViewInterface_Init = FName(TEXT("Init"));
	void IHudDirectionalMiniGameViewInterface::Execute_Init(UObject* O, int32 maxItems, EDirectionalMiniGameType type)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudDirectionalMiniGameViewInterface::StaticClass()));
		HudDirectionalMiniGameViewInterface_eventInit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudDirectionalMiniGameViewInterface_Init);
		if (Func)
		{
			Parms.maxItems=maxItems;
			Parms.type=type;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudDirectionalMiniGameViewInterface*)(O->GetNativeInterfaceAddress(UHudDirectionalMiniGameViewInterface::StaticClass())))
		{
			I->Init_Implementation(maxItems,type);
		}
	}
	static FName NAME_UHudDirectionalMiniGameViewInterface_Show = FName(TEXT("Show"));
	void IHudDirectionalMiniGameViewInterface::Execute_Show(UObject* O, TArray<EDirectionalInputKey> const& directions)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudDirectionalMiniGameViewInterface::StaticClass()));
		HudDirectionalMiniGameViewInterface_eventShow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudDirectionalMiniGameViewInterface_Show);
		if (Func)
		{
			Parms.directions=directions;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudDirectionalMiniGameViewInterface*)(O->GetNativeInterfaceAddress(UHudDirectionalMiniGameViewInterface::StaticClass())))
		{
			I->Show_Implementation(directions);
		}
	}
	static FName NAME_UHudDirectionalMiniGameViewInterface_UpdateFinalResult = FName(TEXT("UpdateFinalResult"));
	void IHudDirectionalMiniGameViewInterface::Execute_UpdateFinalResult(UObject* O, EDirectionalMinigameResult finalResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudDirectionalMiniGameViewInterface::StaticClass()));
		HudDirectionalMiniGameViewInterface_eventUpdateFinalResult_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudDirectionalMiniGameViewInterface_UpdateFinalResult);
		if (Func)
		{
			Parms.finalResult=finalResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UHudDirectionalMiniGameViewInterface_UpdateResult = FName(TEXT("UpdateResult"));
	void IHudDirectionalMiniGameViewInterface::Execute_UpdateResult(UObject* O, int32 index, bool isSuccessful)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudDirectionalMiniGameViewInterface::StaticClass()));
		HudDirectionalMiniGameViewInterface_eventUpdateResult_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudDirectionalMiniGameViewInterface_UpdateResult);
		if (Func)
		{
			Parms.index=index;
			Parms.isSuccessful=isSuccessful;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudDirectionalMiniGameViewInterface*)(O->GetNativeInterfaceAddress(UHudDirectionalMiniGameViewInterface::StaticClass())))
		{
			I->UpdateResult_Implementation(index,isSuccessful);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
