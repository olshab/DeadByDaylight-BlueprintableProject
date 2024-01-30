// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreSpecialsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreSpecialsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsBundleViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialsItemViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IStoreSpecialsViewInterface::execSetAuricCellsSpecialOfferData)
	{
		P_GET_STRUCT_REF(FAuricCellsBundleViewData,Z_Param_Out_auricCellsSpecialOfferData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAuricCellsSpecialOfferData_Implementation(Z_Param_Out_auricCellsSpecialOfferData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreSpecialsViewInterface::execSetSpecialsData)
	{
		P_GET_TARRAY_REF(UStoreSpecialsItemViewData*,Z_Param_Out_specialsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecialsData_Implementation(Z_Param_Out_specialsData);
		P_NATIVE_END;
	}
	void IStoreSpecialsViewInterface::SetAuricCellsSpecialOfferData(FAuricCellsBundleViewData const& auricCellsSpecialOfferData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAuricCellsSpecialOfferData instead.");
	}
	void IStoreSpecialsViewInterface::SetSpecialsData(TArray<UStoreSpecialsItemViewData*> const& specialsData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSpecialsData instead.");
	}
	void UStoreSpecialsViewInterface::StaticRegisterNativesUStoreSpecialsViewInterface()
	{
		UClass* Class = UStoreSpecialsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAuricCellsSpecialOfferData", &IStoreSpecialsViewInterface::execSetAuricCellsSpecialOfferData },
			{ "SetSpecialsData", &IStoreSpecialsViewInterface::execSetSpecialsData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_auricCellsSpecialOfferData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_auricCellsSpecialOfferData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::NewProp_auricCellsSpecialOfferData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::NewProp_auricCellsSpecialOfferData = { "auricCellsSpecialOfferData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialsViewInterface_eventSetAuricCellsSpecialOfferData_Parms, auricCellsSpecialOfferData), Z_Construct_UScriptStruct_FAuricCellsBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::NewProp_auricCellsSpecialOfferData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::NewProp_auricCellsSpecialOfferData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::NewProp_auricCellsSpecialOfferData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialsViewInterface, nullptr, "SetAuricCellsSpecialOfferData", nullptr, nullptr, sizeof(StoreSpecialsViewInterface_eventSetAuricCellsSpecialOfferData_Parms), Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_specialsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_specialsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData_Inner = { "specialsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreSpecialsItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData = { "specialsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialsViewInterface_eventSetSpecialsData_Parms, specialsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::NewProp_specialsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialsViewInterface, nullptr, "SetSpecialsData", nullptr, nullptr, sizeof(StoreSpecialsViewInterface_eventSetSpecialsData_Parms), Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreSpecialsViewInterface_NoRegister()
	{
		return UStoreSpecialsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreSpecialsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData, "SetAuricCellsSpecialOfferData" }, // 2997262092
		{ &Z_Construct_UFunction_UStoreSpecialsViewInterface_SetSpecialsData, "SetSpecialsData" }, // 3462577277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreSpecialsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreSpecialsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::ClassParams = {
		&UStoreSpecialsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreSpecialsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreSpecialsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreSpecialsViewInterface, 2388701691);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreSpecialsViewInterface>()
	{
		return UStoreSpecialsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreSpecialsViewInterface(Z_Construct_UClass_UStoreSpecialsViewInterface, &UStoreSpecialsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreSpecialsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreSpecialsViewInterface);
	static FName NAME_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData = FName(TEXT("SetAuricCellsSpecialOfferData"));
	void IStoreSpecialsViewInterface::Execute_SetAuricCellsSpecialOfferData(UObject* O, FAuricCellsBundleViewData const& auricCellsSpecialOfferData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreSpecialsViewInterface::StaticClass()));
		StoreSpecialsViewInterface_eventSetAuricCellsSpecialOfferData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreSpecialsViewInterface_SetAuricCellsSpecialOfferData);
		if (Func)
		{
			Parms.auricCellsSpecialOfferData=auricCellsSpecialOfferData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreSpecialsViewInterface*)(O->GetNativeInterfaceAddress(UStoreSpecialsViewInterface::StaticClass())))
		{
			I->SetAuricCellsSpecialOfferData_Implementation(auricCellsSpecialOfferData);
		}
	}
	static FName NAME_UStoreSpecialsViewInterface_SetSpecialsData = FName(TEXT("SetSpecialsData"));
	void IStoreSpecialsViewInterface::Execute_SetSpecialsData(UObject* O, TArray<UStoreSpecialsItemViewData*> const& specialsData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreSpecialsViewInterface::StaticClass()));
		StoreSpecialsViewInterface_eventSetSpecialsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreSpecialsViewInterface_SetSpecialsData);
		if (Func)
		{
			Parms.specialsData=specialsData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreSpecialsViewInterface*)(O->GetNativeInterfaceAddress(UStoreSpecialsViewInterface::StaticClass())))
		{
			I->SetSpecialsData_Implementation(specialsData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
