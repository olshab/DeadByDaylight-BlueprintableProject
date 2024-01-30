// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCollectionsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCollectionsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionsListViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IStoreCollectionsViewInterface::execGetTabAllInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCollectionsListViewInterface>*)Z_Param__Result=P_THIS->GetTabAllInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCollectionsViewInterface::execGetTabFeaturedInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCollectionsListViewInterface>*)Z_Param__Result=P_THIS->GetTabFeaturedInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCollectionsViewInterface::execGetTabSpecialInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCollectionsListViewInterface>*)Z_Param__Result=P_THIS->GetTabSpecialInterface_Implementation();
		P_NATIVE_END;
	}
	TScriptInterface<IStoreCollectionsListViewInterface> IStoreCollectionsViewInterface::GetTabAllInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTabAllInterface instead.");
		StoreCollectionsViewInterface_eventGetTabAllInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreCollectionsListViewInterface> IStoreCollectionsViewInterface::GetTabFeaturedInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTabFeaturedInterface instead.");
		StoreCollectionsViewInterface_eventGetTabFeaturedInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreCollectionsListViewInterface> IStoreCollectionsViewInterface::GetTabSpecialInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTabSpecialInterface instead.");
		StoreCollectionsViewInterface_eventGetTabSpecialInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void UStoreCollectionsViewInterface::StaticRegisterNativesUStoreCollectionsViewInterface()
	{
		UClass* Class = UStoreCollectionsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTabAllInterface", &IStoreCollectionsViewInterface::execGetTabAllInterface },
			{ "GetTabFeaturedInterface", &IStoreCollectionsViewInterface::execGetTabFeaturedInterface },
			{ "GetTabSpecialInterface", &IStoreCollectionsViewInterface::execGetTabSpecialInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCollectionsViewInterface_eventGetTabAllInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCollectionsListViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionsViewInterface, nullptr, "GetTabAllInterface", nullptr, nullptr, sizeof(StoreCollectionsViewInterface_eventGetTabAllInterface_Parms), Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCollectionsViewInterface_eventGetTabFeaturedInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCollectionsListViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionsViewInterface, nullptr, "GetTabFeaturedInterface", nullptr, nullptr, sizeof(StoreCollectionsViewInterface_eventGetTabFeaturedInterface_Parms), Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCollectionsViewInterface_eventGetTabSpecialInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCollectionsListViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCollectionsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCollectionsViewInterface, nullptr, "GetTabSpecialInterface", nullptr, nullptr, sizeof(StoreCollectionsViewInterface_eventGetTabSpecialInterface_Parms), Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCollectionsViewInterface_NoRegister()
	{
		return UStoreCollectionsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCollectionsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabAllInterface, "GetTabAllInterface" }, // 3557084419
		{ &Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabFeaturedInterface, "GetTabFeaturedInterface" }, // 131809369
		{ &Z_Construct_UFunction_UStoreCollectionsViewInterface_GetTabSpecialInterface, "GetTabSpecialInterface" }, // 752154965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCollectionsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreCollectionsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::ClassParams = {
		&UStoreCollectionsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCollectionsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCollectionsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCollectionsViewInterface, 3463938727);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCollectionsViewInterface>()
	{
		return UStoreCollectionsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCollectionsViewInterface(Z_Construct_UClass_UStoreCollectionsViewInterface, &UStoreCollectionsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCollectionsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCollectionsViewInterface);
	static FName NAME_UStoreCollectionsViewInterface_GetTabAllInterface = FName(TEXT("GetTabAllInterface"));
	TScriptInterface<IStoreCollectionsListViewInterface> IStoreCollectionsViewInterface::Execute_GetTabAllInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCollectionsViewInterface::StaticClass()));
		StoreCollectionsViewInterface_eventGetTabAllInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCollectionsViewInterface_GetTabAllInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCollectionsViewInterface*)(O->GetNativeInterfaceAddress(UStoreCollectionsViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTabAllInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCollectionsViewInterface_GetTabFeaturedInterface = FName(TEXT("GetTabFeaturedInterface"));
	TScriptInterface<IStoreCollectionsListViewInterface> IStoreCollectionsViewInterface::Execute_GetTabFeaturedInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCollectionsViewInterface::StaticClass()));
		StoreCollectionsViewInterface_eventGetTabFeaturedInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCollectionsViewInterface_GetTabFeaturedInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCollectionsViewInterface*)(O->GetNativeInterfaceAddress(UStoreCollectionsViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTabFeaturedInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCollectionsViewInterface_GetTabSpecialInterface = FName(TEXT("GetTabSpecialInterface"));
	TScriptInterface<IStoreCollectionsListViewInterface> IStoreCollectionsViewInterface::Execute_GetTabSpecialInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCollectionsViewInterface::StaticClass()));
		StoreCollectionsViewInterface_eventGetTabSpecialInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCollectionsViewInterface_GetTabSpecialInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCollectionsViewInterface*)(O->GetNativeInterfaceAddress(UStoreCollectionsViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTabSpecialInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
