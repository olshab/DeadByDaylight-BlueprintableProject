// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersFilterViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersFilterViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersFilterViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersFilterViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersFiltersData();
// End Cross Module References
	DEFINE_FUNCTION(IStoreCharactersFilterViewInterface::execSetFiltersState)
	{
		P_GET_STRUCT(FStoreCharactersFiltersData,Z_Param_newFiltersData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFiltersState_Implementation(Z_Param_newFiltersData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersFilterViewInterface::execSetRarityFiltersVisibility)
	{
		P_GET_UBOOL(Z_Param_showRarityFilters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRarityFiltersVisibility_Implementation(Z_Param_showRarityFilters);
		P_NATIVE_END;
	}
	void IStoreCharactersFilterViewInterface::SetFiltersState(FStoreCharactersFiltersData newFiltersData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFiltersState instead.");
	}
	void IStoreCharactersFilterViewInterface::SetRarityFiltersVisibility(bool showRarityFilters)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRarityFiltersVisibility instead.");
	}
	void UStoreCharactersFilterViewInterface::StaticRegisterNativesUStoreCharactersFilterViewInterface()
	{
		UClass* Class = UStoreCharactersFilterViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFiltersState", &IStoreCharactersFilterViewInterface::execSetFiltersState },
			{ "SetRarityFiltersVisibility", &IStoreCharactersFilterViewInterface::execSetRarityFiltersVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newFiltersData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::NewProp_newFiltersData = { "newFiltersData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersFilterViewInterface_eventSetFiltersState_Parms, newFiltersData), Z_Construct_UScriptStruct_FStoreCharactersFiltersData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::NewProp_newFiltersData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersFilterViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersFilterViewInterface, nullptr, "SetFiltersState", nullptr, nullptr, sizeof(StoreCharactersFilterViewInterface_eventSetFiltersState_Parms), Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics
	{
		static void NewProp_showRarityFilters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showRarityFilters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::NewProp_showRarityFilters_SetBit(void* Obj)
	{
		((StoreCharactersFilterViewInterface_eventSetRarityFiltersVisibility_Parms*)Obj)->showRarityFilters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::NewProp_showRarityFilters = { "showRarityFilters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreCharactersFilterViewInterface_eventSetRarityFiltersVisibility_Parms), &Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::NewProp_showRarityFilters_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::NewProp_showRarityFilters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersFilterViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersFilterViewInterface, nullptr, "SetRarityFiltersVisibility", nullptr, nullptr, sizeof(StoreCharactersFilterViewInterface_eventSetRarityFiltersVisibility_Parms), Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCharactersFilterViewInterface_NoRegister()
	{
		return UStoreCharactersFilterViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetFiltersState, "SetFiltersState" }, // 178438179
		{ &Z_Construct_UFunction_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility, "SetRarityFiltersVisibility" }, // 2618540622
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersFilterViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreCharactersFilterViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::ClassParams = {
		&UStoreCharactersFilterViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharactersFilterViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharactersFilterViewInterface, 1922048475);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCharactersFilterViewInterface>()
	{
		return UStoreCharactersFilterViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharactersFilterViewInterface(Z_Construct_UClass_UStoreCharactersFilterViewInterface, &UStoreCharactersFilterViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCharactersFilterViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharactersFilterViewInterface);
	static FName NAME_UStoreCharactersFilterViewInterface_SetFiltersState = FName(TEXT("SetFiltersState"));
	void IStoreCharactersFilterViewInterface::Execute_SetFiltersState(UObject* O, FStoreCharactersFiltersData newFiltersData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersFilterViewInterface::StaticClass()));
		StoreCharactersFilterViewInterface_eventSetFiltersState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersFilterViewInterface_SetFiltersState);
		if (Func)
		{
			Parms.newFiltersData=newFiltersData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersFilterViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersFilterViewInterface::StaticClass())))
		{
			I->SetFiltersState_Implementation(newFiltersData);
		}
	}
	static FName NAME_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility = FName(TEXT("SetRarityFiltersVisibility"));
	void IStoreCharactersFilterViewInterface::Execute_SetRarityFiltersVisibility(UObject* O, bool showRarityFilters)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersFilterViewInterface::StaticClass()));
		StoreCharactersFilterViewInterface_eventSetRarityFiltersVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersFilterViewInterface_SetRarityFiltersVisibility);
		if (Func)
		{
			Parms.showRarityFilters=showRarityFilters;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersFilterViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersFilterViewInterface::StaticClass())))
		{
			I->SetRarityFiltersVisibility_Implementation(showRarityFilters);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
