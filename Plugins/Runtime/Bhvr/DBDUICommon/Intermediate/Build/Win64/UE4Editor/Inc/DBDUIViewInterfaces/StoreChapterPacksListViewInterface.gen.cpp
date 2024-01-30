// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreChapterPacksListViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreChapterPacksListViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPacksListViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPacksListViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPackViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IStoreChapterPacksListViewInterface::execSetData)
	{
		P_GET_TARRAY_REF(UStoreChapterPackViewData*,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IStoreChapterPacksListViewInterface::SetData(TArray<UStoreChapterPackViewData*> const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UStoreChapterPacksListViewInterface::StaticRegisterNativesUStoreChapterPacksListViewInterface()
	{
		UClass* Class = UStoreChapterPacksListViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &IStoreChapterPacksListViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreChapterPackViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreChapterPacksListViewInterface_eventSetData_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreChapterPacksListViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreChapterPacksListViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(StoreChapterPacksListViewInterface_eventSetData_Parms), Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreChapterPacksListViewInterface_NoRegister()
	{
		return UStoreChapterPacksListViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreChapterPacksListViewInterface_SetData, "SetData" }, // 531489008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreChapterPacksListViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreChapterPacksListViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::ClassParams = {
		&UStoreChapterPacksListViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreChapterPacksListViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreChapterPacksListViewInterface, 3645330215);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreChapterPacksListViewInterface>()
	{
		return UStoreChapterPacksListViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreChapterPacksListViewInterface(Z_Construct_UClass_UStoreChapterPacksListViewInterface, &UStoreChapterPacksListViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreChapterPacksListViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreChapterPacksListViewInterface);
	static FName NAME_UStoreChapterPacksListViewInterface_SetData = FName(TEXT("SetData"));
	void IStoreChapterPacksListViewInterface::Execute_SetData(UObject* O, TArray<UStoreChapterPackViewData*> const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreChapterPacksListViewInterface::StaticClass()));
		StoreChapterPacksListViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreChapterPacksListViewInterface_SetData);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreChapterPacksListViewInterface*)(O->GetNativeInterfaceAddress(UStoreChapterPacksListViewInterface::StaticClass())))
		{
			I->SetData_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
