// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CoreBaseViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBaseViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCoreBaseViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCoreBaseViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(ICoreBaseViewInterface::execOnStartAsyncOperation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartAsyncOperation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICoreBaseViewInterface::execOnStopAsyncOperation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopAsyncOperation_Implementation();
		P_NATIVE_END;
	}
	void ICoreBaseViewInterface::OnStartAsyncOperation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStartAsyncOperation instead.");
	}
	void ICoreBaseViewInterface::OnStopAsyncOperation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStopAsyncOperation instead.");
	}
	void UCoreBaseViewInterface::StaticRegisterNativesUCoreBaseViewInterface()
	{
		UClass* Class = UCoreBaseViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartAsyncOperation", &ICoreBaseViewInterface::execOnStartAsyncOperation },
			{ "OnStopAsyncOperation", &ICoreBaseViewInterface::execOnStopAsyncOperation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseViewInterface, nullptr, "OnStartAsyncOperation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseViewInterface, nullptr, "OnStopAsyncOperation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreBaseViewInterface_NoRegister()
	{
		return UCoreBaseViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBaseViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBaseViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreBaseViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreBaseViewInterface_OnStartAsyncOperation, "OnStartAsyncOperation" }, // 2789320680
		{ &Z_Construct_UFunction_UCoreBaseViewInterface_OnStopAsyncOperation, "OnStopAsyncOperation" }, // 2789081906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreBaseViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBaseViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICoreBaseViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBaseViewInterface_Statics::ClassParams = {
		&UCoreBaseViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreBaseViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBaseViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBaseViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBaseViewInterface, 2659062233);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UCoreBaseViewInterface>()
	{
		return UCoreBaseViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBaseViewInterface(Z_Construct_UClass_UCoreBaseViewInterface, &UCoreBaseViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UCoreBaseViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBaseViewInterface);
	static FName NAME_UCoreBaseViewInterface_OnStartAsyncOperation = FName(TEXT("OnStartAsyncOperation"));
	void ICoreBaseViewInterface::Execute_OnStartAsyncOperation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCoreBaseViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCoreBaseViewInterface_OnStartAsyncOperation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICoreBaseViewInterface*)(O->GetNativeInterfaceAddress(UCoreBaseViewInterface::StaticClass())))
		{
			I->OnStartAsyncOperation_Implementation();
		}
	}
	static FName NAME_UCoreBaseViewInterface_OnStopAsyncOperation = FName(TEXT("OnStopAsyncOperation"));
	void ICoreBaseViewInterface::Execute_OnStopAsyncOperation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCoreBaseViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCoreBaseViewInterface_OnStopAsyncOperation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICoreBaseViewInterface*)(O->GetNativeInterfaceAddress(UCoreBaseViewInterface::StaticClass())))
		{
			I->OnStopAsyncOperation_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
