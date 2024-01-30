// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveQuestMapViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveQuestMapViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeGraphViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveMapPathViewData();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveQuestMapViewInterface::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveQuestMapViewInterface::execSetLoadingSpinner)
	{
		P_GET_UBOOL(Z_Param_isLoading);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadingSpinner_Implementation(Z_Param_isLoading);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveQuestMapViewInterface::execSetQuestMapData)
	{
		P_GET_TARRAY_REF(FArchiveNodeGraphViewData,Z_Param_Out_nodeDataList);
		P_GET_TARRAY_REF(FArchiveMapPathViewData,Z_Param_Out_pathDataList);
		P_GET_UBOOL(Z_Param_needsCascadeAppear);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuestMapData_Implementation(Z_Param_Out_nodeDataList,Z_Param_Out_pathDataList,Z_Param_needsCascadeAppear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveQuestMapViewInterface::execUpdateQuestMapData)
	{
		P_GET_TARRAY_REF(FArchiveNodeGraphViewData,Z_Param_Out_nodeDataList);
		P_GET_TARRAY_REF(FArchiveMapPathViewData,Z_Param_Out_pathDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateQuestMapData_Implementation(Z_Param_Out_nodeDataList,Z_Param_Out_pathDataList);
		P_NATIVE_END;
	}
	void IArchiveQuestMapViewInterface::Reset()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Reset instead.");
	}
	void IArchiveQuestMapViewInterface::SetLoadingSpinner(bool isLoading)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLoadingSpinner instead.");
	}
	void IArchiveQuestMapViewInterface::SetQuestMapData(TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList, bool needsCascadeAppear)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetQuestMapData instead.");
	}
	void IArchiveQuestMapViewInterface::UpdateQuestMapData(TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateQuestMapData instead.");
	}
	void UArchiveQuestMapViewInterface::StaticRegisterNativesUArchiveQuestMapViewInterface()
	{
		UClass* Class = UArchiveQuestMapViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &IArchiveQuestMapViewInterface::execReset },
			{ "SetLoadingSpinner", &IArchiveQuestMapViewInterface::execSetLoadingSpinner },
			{ "SetQuestMapData", &IArchiveQuestMapViewInterface::execSetQuestMapData },
			{ "UpdateQuestMapData", &IArchiveQuestMapViewInterface::execUpdateQuestMapData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapViewInterface, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics
	{
		static void NewProp_isLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLoading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::NewProp_isLoading_SetBit(void* Obj)
	{
		((ArchiveQuestMapViewInterface_eventSetLoadingSpinner_Parms*)Obj)->isLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::NewProp_isLoading = { "isLoading", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveQuestMapViewInterface_eventSetLoadingSpinner_Parms), &Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::NewProp_isLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::NewProp_isLoading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapViewInterface, nullptr, "SetLoadingSpinner", nullptr, nullptr, sizeof(ArchiveQuestMapViewInterface_eventSetLoadingSpinner_Parms), Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodeDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodeDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pathDataList;
		static void NewProp_needsCascadeAppear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_needsCascadeAppear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList_Inner = { "nodeDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveNodeGraphViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList = { "nodeDataList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms, nodeDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList_Inner = { "pathDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList = { "pathDataList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms, pathDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList_MetaData)) };
	void Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_needsCascadeAppear_SetBit(void* Obj)
	{
		((ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms*)Obj)->needsCascadeAppear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_needsCascadeAppear = { "needsCascadeAppear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms), &Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_needsCascadeAppear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_nodeDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_pathDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::NewProp_needsCascadeAppear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapViewInterface, nullptr, "SetQuestMapData", nullptr, nullptr, sizeof(ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms), Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodeDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodeDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pathDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList_Inner = { "nodeDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveNodeGraphViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList = { "nodeDataList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapViewInterface_eventUpdateQuestMapData_Parms, nodeDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList_Inner = { "pathDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList = { "pathDataList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapViewInterface_eventUpdateQuestMapData_Parms, pathDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_nodeDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::NewProp_pathDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapViewInterface, nullptr, "UpdateQuestMapData", nullptr, nullptr, sizeof(ArchiveQuestMapViewInterface_eventUpdateQuestMapData_Parms), Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister()
	{
		return UArchiveQuestMapViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveQuestMapViewInterface_Reset, "Reset" }, // 431997180
		{ &Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetLoadingSpinner, "SetLoadingSpinner" }, // 3359418892
		{ &Z_Construct_UFunction_UArchiveQuestMapViewInterface_SetQuestMapData, "SetQuestMapData" }, // 1860155993
		{ &Z_Construct_UFunction_UArchiveQuestMapViewInterface_UpdateQuestMapData, "UpdateQuestMapData" }, // 2463814472
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveQuestMapViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveQuestMapViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::ClassParams = {
		&UArchiveQuestMapViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveQuestMapViewInterface, 1253564040);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveQuestMapViewInterface>()
	{
		return UArchiveQuestMapViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveQuestMapViewInterface(Z_Construct_UClass_UArchiveQuestMapViewInterface, &UArchiveQuestMapViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveQuestMapViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveQuestMapViewInterface);
	static FName NAME_UArchiveQuestMapViewInterface_Reset = FName(TEXT("Reset"));
	void IArchiveQuestMapViewInterface::Execute_Reset(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveQuestMapViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveQuestMapViewInterface_Reset);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveQuestMapViewInterface*)(O->GetNativeInterfaceAddress(UArchiveQuestMapViewInterface::StaticClass())))
		{
			I->Reset_Implementation();
		}
	}
	static FName NAME_UArchiveQuestMapViewInterface_SetLoadingSpinner = FName(TEXT("SetLoadingSpinner"));
	void IArchiveQuestMapViewInterface::Execute_SetLoadingSpinner(UObject* O, bool isLoading)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveQuestMapViewInterface::StaticClass()));
		ArchiveQuestMapViewInterface_eventSetLoadingSpinner_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveQuestMapViewInterface_SetLoadingSpinner);
		if (Func)
		{
			Parms.isLoading=isLoading;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveQuestMapViewInterface*)(O->GetNativeInterfaceAddress(UArchiveQuestMapViewInterface::StaticClass())))
		{
			I->SetLoadingSpinner_Implementation(isLoading);
		}
	}
	static FName NAME_UArchiveQuestMapViewInterface_SetQuestMapData = FName(TEXT("SetQuestMapData"));
	void IArchiveQuestMapViewInterface::Execute_SetQuestMapData(UObject* O, TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList, bool needsCascadeAppear)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveQuestMapViewInterface::StaticClass()));
		ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveQuestMapViewInterface_SetQuestMapData);
		if (Func)
		{
			Parms.nodeDataList=nodeDataList;
			Parms.pathDataList=pathDataList;
			Parms.needsCascadeAppear=needsCascadeAppear;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveQuestMapViewInterface*)(O->GetNativeInterfaceAddress(UArchiveQuestMapViewInterface::StaticClass())))
		{
			I->SetQuestMapData_Implementation(nodeDataList,pathDataList,needsCascadeAppear);
		}
	}
	static FName NAME_UArchiveQuestMapViewInterface_UpdateQuestMapData = FName(TEXT("UpdateQuestMapData"));
	void IArchiveQuestMapViewInterface::Execute_UpdateQuestMapData(UObject* O, TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveQuestMapViewInterface::StaticClass()));
		ArchiveQuestMapViewInterface_eventUpdateQuestMapData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveQuestMapViewInterface_UpdateQuestMapData);
		if (Func)
		{
			Parms.nodeDataList=nodeDataList;
			Parms.pathDataList=pathDataList;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveQuestMapViewInterface*)(O->GetNativeInterfaceAddress(UArchiveQuestMapViewInterface::StaticClass())))
		{
			I->UpdateQuestMapData_Implementation(nodeDataList,pathDataList);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
