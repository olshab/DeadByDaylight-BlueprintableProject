// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/GlobalLoadSpinnerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalLoadSpinnerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGlobalLoadSpinnerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IGlobalLoadSpinnerViewInterface::execSetGlobalSpinnerVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalSpinnerVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	void IGlobalLoadSpinnerViewInterface::SetGlobalSpinnerVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetGlobalSpinnerVisibility instead.");
	}
	void UGlobalLoadSpinnerViewInterface::StaticRegisterNativesUGlobalLoadSpinnerViewInterface()
	{
		UClass* Class = UGlobalLoadSpinnerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGlobalSpinnerVisibility", &IGlobalLoadSpinnerViewInterface::execSetGlobalSpinnerVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((GlobalLoadSpinnerViewInterface_eventSetGlobalSpinnerVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GlobalLoadSpinnerViewInterface_eventSetGlobalSpinnerVisibility_Parms), &Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalLoadSpinnerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalLoadSpinnerViewInterface, nullptr, "SetGlobalSpinnerVisibility", nullptr, nullptr, sizeof(GlobalLoadSpinnerViewInterface_eventSetGlobalSpinnerVisibility_Parms), Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_NoRegister()
	{
		return UGlobalLoadSpinnerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility, "SetGlobalSpinnerVisibility" }, // 3008974676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalLoadSpinnerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGlobalLoadSpinnerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::ClassParams = {
		&UGlobalLoadSpinnerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalLoadSpinnerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalLoadSpinnerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalLoadSpinnerViewInterface, 2650582212);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UGlobalLoadSpinnerViewInterface>()
	{
		return UGlobalLoadSpinnerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalLoadSpinnerViewInterface(Z_Construct_UClass_UGlobalLoadSpinnerViewInterface, &UGlobalLoadSpinnerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UGlobalLoadSpinnerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalLoadSpinnerViewInterface);
	static FName NAME_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility = FName(TEXT("SetGlobalSpinnerVisibility"));
	void IGlobalLoadSpinnerViewInterface::Execute_SetGlobalSpinnerVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGlobalLoadSpinnerViewInterface::StaticClass()));
		GlobalLoadSpinnerViewInterface_eventSetGlobalSpinnerVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGlobalLoadSpinnerViewInterface_SetGlobalSpinnerVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGlobalLoadSpinnerViewInterface*)(O->GetNativeInterfaceAddress(UGlobalLoadSpinnerViewInterface::StaticClass())))
		{
			I->SetGlobalSpinnerVisibility_Implementation(isVisible);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
