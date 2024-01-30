// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersBioViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersBioViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersBioViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersBioViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IStoreCharactersBioViewInterface::execSetData)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_characterBio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_characterBio);
		P_NATIVE_END;
	}
	void IStoreCharactersBioViewInterface::SetData(FText const& characterBio)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UStoreCharactersBioViewInterface::StaticRegisterNativesUStoreCharactersBioViewInterface()
	{
		UClass* Class = UStoreCharactersBioViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &IStoreCharactersBioViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterBio_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_characterBio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::NewProp_characterBio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::NewProp_characterBio = { "characterBio", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersBioViewInterface_eventSetData_Parms, characterBio), METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::NewProp_characterBio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::NewProp_characterBio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::NewProp_characterBio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersBioViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersBioViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(StoreCharactersBioViewInterface_eventSetData_Parms), Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCharactersBioViewInterface_NoRegister()
	{
		return UStoreCharactersBioViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCharactersBioViewInterface_SetData, "SetData" }, // 835847605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersBioViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreCharactersBioViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::ClassParams = {
		&UStoreCharactersBioViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharactersBioViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharactersBioViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharactersBioViewInterface, 4008894936);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCharactersBioViewInterface>()
	{
		return UStoreCharactersBioViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharactersBioViewInterface(Z_Construct_UClass_UStoreCharactersBioViewInterface, &UStoreCharactersBioViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCharactersBioViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharactersBioViewInterface);
	static FName NAME_UStoreCharactersBioViewInterface_SetData = FName(TEXT("SetData"));
	void IStoreCharactersBioViewInterface::Execute_SetData(UObject* O, FText const& characterBio)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersBioViewInterface::StaticClass()));
		StoreCharactersBioViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersBioViewInterface_SetData);
		if (Func)
		{
			Parms.characterBio=characterBio;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersBioViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersBioViewInterface::StaticClass())))
		{
			I->SetData_Implementation(characterBio);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
