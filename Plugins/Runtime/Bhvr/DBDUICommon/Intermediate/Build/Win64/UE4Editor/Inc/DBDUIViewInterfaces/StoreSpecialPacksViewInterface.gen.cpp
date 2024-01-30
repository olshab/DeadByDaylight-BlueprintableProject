// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreSpecialPacksViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreSpecialPacksViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPacksListViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksListViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IStoreSpecialPacksViewInterface::execGetTabChaptersInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreChapterPacksListViewInterface>*)Z_Param__Result=P_THIS->GetTabChaptersInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreSpecialPacksViewInterface::execGetTabHeritageInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreSpecialPacksHeritageViewInterface>*)Z_Param__Result=P_THIS->GetTabHeritageInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreSpecialPacksViewInterface::execGetTabSpecialsInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreSpecialPacksListViewInterface>*)Z_Param__Result=P_THIS->GetTabSpecialsInterface_Implementation();
		P_NATIVE_END;
	}
	TScriptInterface<IStoreChapterPacksListViewInterface> IStoreSpecialPacksViewInterface::GetTabChaptersInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTabChaptersInterface instead.");
		StoreSpecialPacksViewInterface_eventGetTabChaptersInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreSpecialPacksHeritageViewInterface> IStoreSpecialPacksViewInterface::GetTabHeritageInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTabHeritageInterface instead.");
		StoreSpecialPacksViewInterface_eventGetTabHeritageInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreSpecialPacksListViewInterface> IStoreSpecialPacksViewInterface::GetTabSpecialsInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTabSpecialsInterface instead.");
		StoreSpecialPacksViewInterface_eventGetTabSpecialsInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void UStoreSpecialPacksViewInterface::StaticRegisterNativesUStoreSpecialPacksViewInterface()
	{
		UClass* Class = UStoreSpecialPacksViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTabChaptersInterface", &IStoreSpecialPacksViewInterface::execGetTabChaptersInterface },
			{ "GetTabHeritageInterface", &IStoreSpecialPacksViewInterface::execGetTabHeritageInterface },
			{ "GetTabSpecialsInterface", &IStoreSpecialPacksViewInterface::execGetTabSpecialsInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialPacksViewInterface_eventGetTabChaptersInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreChapterPacksListViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialPacksViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialPacksViewInterface, nullptr, "GetTabChaptersInterface", nullptr, nullptr, sizeof(StoreSpecialPacksViewInterface_eventGetTabChaptersInterface_Parms), Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialPacksViewInterface_eventGetTabHeritageInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialPacksViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialPacksViewInterface, nullptr, "GetTabHeritageInterface", nullptr, nullptr, sizeof(StoreSpecialPacksViewInterface_eventGetTabHeritageInterface_Parms), Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialPacksViewInterface_eventGetTabSpecialsInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreSpecialPacksListViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialPacksViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialPacksViewInterface, nullptr, "GetTabSpecialsInterface", nullptr, nullptr, sizeof(StoreSpecialPacksViewInterface_eventGetTabSpecialsInterface_Parms), Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreSpecialPacksViewInterface_NoRegister()
	{
		return UStoreSpecialPacksViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabChaptersInterface, "GetTabChaptersInterface" }, // 2640260730
		{ &Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabHeritageInterface, "GetTabHeritageInterface" }, // 2789830369
		{ &Z_Construct_UFunction_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface, "GetTabSpecialsInterface" }, // 1341417558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreSpecialPacksViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreSpecialPacksViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::ClassParams = {
		&UStoreSpecialPacksViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreSpecialPacksViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreSpecialPacksViewInterface, 1607263542);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreSpecialPacksViewInterface>()
	{
		return UStoreSpecialPacksViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreSpecialPacksViewInterface(Z_Construct_UClass_UStoreSpecialPacksViewInterface, &UStoreSpecialPacksViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreSpecialPacksViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreSpecialPacksViewInterface);
	static FName NAME_UStoreSpecialPacksViewInterface_GetTabChaptersInterface = FName(TEXT("GetTabChaptersInterface"));
	TScriptInterface<IStoreChapterPacksListViewInterface> IStoreSpecialPacksViewInterface::Execute_GetTabChaptersInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreSpecialPacksViewInterface::StaticClass()));
		StoreSpecialPacksViewInterface_eventGetTabChaptersInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreSpecialPacksViewInterface_GetTabChaptersInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreSpecialPacksViewInterface*)(O->GetNativeInterfaceAddress(UStoreSpecialPacksViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTabChaptersInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreSpecialPacksViewInterface_GetTabHeritageInterface = FName(TEXT("GetTabHeritageInterface"));
	TScriptInterface<IStoreSpecialPacksHeritageViewInterface> IStoreSpecialPacksViewInterface::Execute_GetTabHeritageInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreSpecialPacksViewInterface::StaticClass()));
		StoreSpecialPacksViewInterface_eventGetTabHeritageInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreSpecialPacksViewInterface_GetTabHeritageInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreSpecialPacksViewInterface*)(O->GetNativeInterfaceAddress(UStoreSpecialPacksViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTabHeritageInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface = FName(TEXT("GetTabSpecialsInterface"));
	TScriptInterface<IStoreSpecialPacksListViewInterface> IStoreSpecialPacksViewInterface::Execute_GetTabSpecialsInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreSpecialPacksViewInterface::StaticClass()));
		StoreSpecialPacksViewInterface_eventGetTabSpecialsInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreSpecialPacksViewInterface_GetTabSpecialsInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreSpecialPacksViewInterface*)(O->GetNativeInterfaceAddress(UStoreSpecialPacksViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTabSpecialsInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
