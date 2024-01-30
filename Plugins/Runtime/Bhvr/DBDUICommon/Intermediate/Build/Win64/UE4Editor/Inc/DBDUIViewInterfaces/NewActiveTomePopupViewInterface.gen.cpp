// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/NewActiveTomePopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActiveTomePopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNewActiveTomePopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNewActiveTomePopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(INewActiveTomePopupViewInterface::execSetRemainingTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_remainingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainingTime_Implementation(Z_Param_remainingTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(INewActiveTomePopupViewInterface::execSetRiftEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRiftEnabled_Implementation(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	void INewActiveTomePopupViewInterface::SetRemainingTime(const FString& remainingTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRemainingTime instead.");
	}
	void INewActiveTomePopupViewInterface::SetRiftEnabled(bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRiftEnabled instead.");
	}
	void UNewActiveTomePopupViewInterface::StaticRegisterNativesUNewActiveTomePopupViewInterface()
	{
		UClass* Class = UNewActiveTomePopupViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRemainingTime", &INewActiveTomePopupViewInterface::execSetRemainingTime },
			{ "SetRiftEnabled", &INewActiveTomePopupViewInterface::execSetRiftEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_remainingTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::NewProp_remainingTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::NewProp_remainingTime = { "remainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewActiveTomePopupViewInterface_eventSetRemainingTime_Parms, remainingTime), METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::NewProp_remainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::NewProp_remainingTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::NewProp_remainingTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewActiveTomePopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActiveTomePopupViewInterface, nullptr, "SetRemainingTime", nullptr, nullptr, sizeof(NewActiveTomePopupViewInterface_eventSetRemainingTime_Parms), Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEnabled_MetaData[];
#endif
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((NewActiveTomePopupViewInterface_eventSetRiftEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewActiveTomePopupViewInterface_eventSetRiftEnabled_Parms), &Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewActiveTomePopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActiveTomePopupViewInterface, nullptr, "SetRiftEnabled", nullptr, nullptr, sizeof(NewActiveTomePopupViewInterface_eventSetRiftEnabled_Parms), Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNewActiveTomePopupViewInterface_NoRegister()
	{
		return UNewActiveTomePopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRemainingTime, "SetRemainingTime" }, // 2839532828
		{ &Z_Construct_UFunction_UNewActiveTomePopupViewInterface_SetRiftEnabled, "SetRiftEnabled" }, // 46109142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INewActiveTomePopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::ClassParams = {
		&UNewActiveTomePopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewActiveTomePopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewActiveTomePopupViewInterface, 2470297937);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UNewActiveTomePopupViewInterface>()
	{
		return UNewActiveTomePopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewActiveTomePopupViewInterface(Z_Construct_UClass_UNewActiveTomePopupViewInterface, &UNewActiveTomePopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UNewActiveTomePopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActiveTomePopupViewInterface);
	static FName NAME_UNewActiveTomePopupViewInterface_SetRemainingTime = FName(TEXT("SetRemainingTime"));
	void INewActiveTomePopupViewInterface::Execute_SetRemainingTime(UObject* O, const FString& remainingTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UNewActiveTomePopupViewInterface::StaticClass()));
		NewActiveTomePopupViewInterface_eventSetRemainingTime_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UNewActiveTomePopupViewInterface_SetRemainingTime);
		if (Func)
		{
			Parms.remainingTime=remainingTime;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (INewActiveTomePopupViewInterface*)(O->GetNativeInterfaceAddress(UNewActiveTomePopupViewInterface::StaticClass())))
		{
			I->SetRemainingTime_Implementation(remainingTime);
		}
	}
	static FName NAME_UNewActiveTomePopupViewInterface_SetRiftEnabled = FName(TEXT("SetRiftEnabled"));
	void INewActiveTomePopupViewInterface::Execute_SetRiftEnabled(UObject* O, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UNewActiveTomePopupViewInterface::StaticClass()));
		NewActiveTomePopupViewInterface_eventSetRiftEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UNewActiveTomePopupViewInterface_SetRiftEnabled);
		if (Func)
		{
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (INewActiveTomePopupViewInterface*)(O->GetNativeInterfaceAddress(UNewActiveTomePopupViewInterface::StaticClass())))
		{
			I->SetRiftEnabled_Implementation(isEnabled);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
