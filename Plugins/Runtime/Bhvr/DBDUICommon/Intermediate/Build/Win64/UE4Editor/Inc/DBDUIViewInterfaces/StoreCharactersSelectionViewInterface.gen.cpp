// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersSelectionViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersSelectionViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersSelectionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersSelectionViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersFilterViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData();
// End Cross Module References
	DEFINE_FUNCTION(IStoreCharactersSelectionViewInterface::execGetStoreCharactersFilterInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCharactersFilterViewInterface>*)Z_Param__Result=P_THIS->GetStoreCharactersFilterInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersSelectionViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FStoreCharactersSelectionViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	TScriptInterface<IStoreCharactersFilterViewInterface> IStoreCharactersSelectionViewInterface::GetStoreCharactersFilterInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCharactersFilterInterface instead.");
		StoreCharactersSelectionViewInterface_eventGetStoreCharactersFilterInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IStoreCharactersSelectionViewInterface::SetData(FStoreCharactersSelectionViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UStoreCharactersSelectionViewInterface::StaticRegisterNativesUStoreCharactersSelectionViewInterface()
	{
		UClass* Class = UStoreCharactersSelectionViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStoreCharactersFilterInterface", &IStoreCharactersSelectionViewInterface::execGetStoreCharactersFilterInterface },
			{ "SetData", &IStoreCharactersSelectionViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSelectionViewInterface_eventGetStoreCharactersFilterInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCharactersFilterViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSelectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSelectionViewInterface, nullptr, "GetStoreCharactersFilterInterface", nullptr, nullptr, sizeof(StoreCharactersSelectionViewInterface_eventGetStoreCharactersFilterInterface_Parms), Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSelectionViewInterface_eventSetData_Parms, data), Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSelectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSelectionViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(StoreCharactersSelectionViewInterface_eventSetData_Parms), Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCharactersSelectionViewInterface_NoRegister()
	{
		return UStoreCharactersSelectionViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface, "GetStoreCharactersFilterInterface" }, // 3104711600
		{ &Z_Construct_UFunction_UStoreCharactersSelectionViewInterface_SetData, "SetData" }, // 3548235124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersSelectionViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreCharactersSelectionViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::ClassParams = {
		&UStoreCharactersSelectionViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharactersSelectionViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharactersSelectionViewInterface, 3120578857);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCharactersSelectionViewInterface>()
	{
		return UStoreCharactersSelectionViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharactersSelectionViewInterface(Z_Construct_UClass_UStoreCharactersSelectionViewInterface, &UStoreCharactersSelectionViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCharactersSelectionViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharactersSelectionViewInterface);
	static FName NAME_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface = FName(TEXT("GetStoreCharactersFilterInterface"));
	TScriptInterface<IStoreCharactersFilterViewInterface> IStoreCharactersSelectionViewInterface::Execute_GetStoreCharactersFilterInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersSelectionViewInterface::StaticClass()));
		StoreCharactersSelectionViewInterface_eventGetStoreCharactersFilterInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersSelectionViewInterface_GetStoreCharactersFilterInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCharactersSelectionViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersSelectionViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCharactersFilterInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCharactersSelectionViewInterface_SetData = FName(TEXT("SetData"));
	void IStoreCharactersSelectionViewInterface::Execute_SetData(UObject* O, FStoreCharactersSelectionViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersSelectionViewInterface::StaticClass()));
		StoreCharactersSelectionViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersSelectionViewInterface_SetData);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersSelectionViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersSelectionViewInterface::StaticClass())))
		{
			I->SetData_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
