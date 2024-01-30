// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersCustomizationsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersCustomizationsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersFilterViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData();
// End Cross Module References
	DEFINE_FUNCTION(IStoreCharactersCustomizationsViewInterface::execGetStoreCharactersFilterInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCharactersFilterViewInterface>*)Z_Param__Result=P_THIS->GetStoreCharactersFilterInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersCustomizationsViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FStoreCharactersCustomizationsViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	TScriptInterface<IStoreCharactersFilterViewInterface> IStoreCharactersCustomizationsViewInterface::GetStoreCharactersFilterInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCharactersFilterInterface instead.");
		StoreCharactersCustomizationsViewInterface_eventGetStoreCharactersFilterInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IStoreCharactersCustomizationsViewInterface::SetData(FStoreCharactersCustomizationsViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UStoreCharactersCustomizationsViewInterface::StaticRegisterNativesUStoreCharactersCustomizationsViewInterface()
	{
		UClass* Class = UStoreCharactersCustomizationsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStoreCharactersFilterInterface", &IStoreCharactersCustomizationsViewInterface::execGetStoreCharactersFilterInterface },
			{ "SetData", &IStoreCharactersCustomizationsViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersCustomizationsViewInterface_eventGetStoreCharactersFilterInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCharactersFilterViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface, nullptr, "GetStoreCharactersFilterInterface", nullptr, nullptr, sizeof(StoreCharactersCustomizationsViewInterface_eventGetStoreCharactersFilterInterface_Parms), Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersCustomizationsViewInterface_eventSetData_Parms, data), Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(StoreCharactersCustomizationsViewInterface_eventSetData_Parms), Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_NoRegister()
	{
		return UStoreCharactersCustomizationsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface, "GetStoreCharactersFilterInterface" }, // 3314572653
		{ &Z_Construct_UFunction_UStoreCharactersCustomizationsViewInterface_SetData, "SetData" }, // 490878270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreCharactersCustomizationsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::ClassParams = {
		&UStoreCharactersCustomizationsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharactersCustomizationsViewInterface, 2959203354);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCharactersCustomizationsViewInterface>()
	{
		return UStoreCharactersCustomizationsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharactersCustomizationsViewInterface(Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface, &UStoreCharactersCustomizationsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCharactersCustomizationsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharactersCustomizationsViewInterface);
	static FName NAME_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface = FName(TEXT("GetStoreCharactersFilterInterface"));
	TScriptInterface<IStoreCharactersFilterViewInterface> IStoreCharactersCustomizationsViewInterface::Execute_GetStoreCharactersFilterInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersCustomizationsViewInterface::StaticClass()));
		StoreCharactersCustomizationsViewInterface_eventGetStoreCharactersFilterInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersCustomizationsViewInterface_GetStoreCharactersFilterInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCharactersCustomizationsViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersCustomizationsViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCharactersFilterInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCharactersCustomizationsViewInterface_SetData = FName(TEXT("SetData"));
	void IStoreCharactersCustomizationsViewInterface::Execute_SetData(UObject* O, FStoreCharactersCustomizationsViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersCustomizationsViewInterface::StaticClass()));
		StoreCharactersCustomizationsViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersCustomizationsViewInterface_SetData);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersCustomizationsViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersCustomizationsViewInterface::StaticClass())))
		{
			I->SetData_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
