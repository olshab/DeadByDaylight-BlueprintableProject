// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreFeaturedViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreFeaturedViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreFeaturedViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IStoreFeaturedViewInterface::execFocusFeaturedCharacter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusFeaturedCharacter_Implementation(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreFeaturedViewInterface::execInitFeaturedCharacters)
	{
		P_GET_TARRAY_REF(FStoreFeaturedCharacterViewData,Z_Param_Out_characterViewDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFeaturedCharacters_Implementation(Z_Param_Out_characterViewDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreFeaturedViewInterface::execInitFeaturedCustomizationItems)
	{
		P_GET_TARRAY_REF(UStoreCustomizationItemViewData*,Z_Param_Out_viewDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFeaturedCustomizationItems_Implementation(Z_Param_Out_viewDataArray);
		P_NATIVE_END;
	}
	void IStoreFeaturedViewInterface::FocusFeaturedCharacter(int32 characterIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FocusFeaturedCharacter instead.");
	}
	void IStoreFeaturedViewInterface::InitFeaturedCharacters(TArray<FStoreFeaturedCharacterViewData> const& characterViewDataArray)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitFeaturedCharacters instead.");
	}
	void IStoreFeaturedViewInterface::InitFeaturedCustomizationItems(TArray<UStoreCustomizationItemViewData*> const& viewDataArray)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitFeaturedCustomizationItems instead.");
	}
	void UStoreFeaturedViewInterface::StaticRegisterNativesUStoreFeaturedViewInterface()
	{
		UClass* Class = UStoreFeaturedViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FocusFeaturedCharacter", &IStoreFeaturedViewInterface::execFocusFeaturedCharacter },
			{ "InitFeaturedCharacters", &IStoreFeaturedViewInterface::execInitFeaturedCharacters },
			{ "InitFeaturedCustomizationItems", &IStoreFeaturedViewInterface::execInitFeaturedCustomizationItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreFeaturedViewInterface_eventFocusFeaturedCharacter_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreFeaturedViewInterface, nullptr, "FocusFeaturedCharacter", nullptr, nullptr, sizeof(StoreFeaturedViewInterface_eventFocusFeaturedCharacter_Parms), Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterViewDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterViewDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characterViewDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray_Inner = { "characterViewDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray = { "characterViewDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreFeaturedViewInterface_eventInitFeaturedCharacters_Parms, characterViewDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::NewProp_characterViewDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreFeaturedViewInterface, nullptr, "InitFeaturedCharacters", nullptr, nullptr, sizeof(StoreFeaturedViewInterface_eventInitFeaturedCharacters_Parms), Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_viewDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray_Inner = { "viewDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray = { "viewDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreFeaturedViewInterface_eventInitFeaturedCustomizationItems_Parms, viewDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::NewProp_viewDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreFeaturedViewInterface, nullptr, "InitFeaturedCustomizationItems", nullptr, nullptr, sizeof(StoreFeaturedViewInterface_eventInitFeaturedCustomizationItems_Parms), Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister()
	{
		return UStoreFeaturedViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreFeaturedViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreFeaturedViewInterface_FocusFeaturedCharacter, "FocusFeaturedCharacter" }, // 2390840945
		{ &Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCharacters, "InitFeaturedCharacters" }, // 2674308399
		{ &Z_Construct_UFunction_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems, "InitFeaturedCustomizationItems" }, // 427962975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreFeaturedViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreFeaturedViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::ClassParams = {
		&UStoreFeaturedViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreFeaturedViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreFeaturedViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreFeaturedViewInterface, 2718484751);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreFeaturedViewInterface>()
	{
		return UStoreFeaturedViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreFeaturedViewInterface(Z_Construct_UClass_UStoreFeaturedViewInterface, &UStoreFeaturedViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreFeaturedViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreFeaturedViewInterface);
	static FName NAME_UStoreFeaturedViewInterface_FocusFeaturedCharacter = FName(TEXT("FocusFeaturedCharacter"));
	void IStoreFeaturedViewInterface::Execute_FocusFeaturedCharacter(UObject* O, int32 characterIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreFeaturedViewInterface::StaticClass()));
		StoreFeaturedViewInterface_eventFocusFeaturedCharacter_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreFeaturedViewInterface_FocusFeaturedCharacter);
		if (Func)
		{
			Parms.characterIndex=characterIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreFeaturedViewInterface*)(O->GetNativeInterfaceAddress(UStoreFeaturedViewInterface::StaticClass())))
		{
			I->FocusFeaturedCharacter_Implementation(characterIndex);
		}
	}
	static FName NAME_UStoreFeaturedViewInterface_InitFeaturedCharacters = FName(TEXT("InitFeaturedCharacters"));
	void IStoreFeaturedViewInterface::Execute_InitFeaturedCharacters(UObject* O, TArray<FStoreFeaturedCharacterViewData> const& characterViewDataArray)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreFeaturedViewInterface::StaticClass()));
		StoreFeaturedViewInterface_eventInitFeaturedCharacters_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreFeaturedViewInterface_InitFeaturedCharacters);
		if (Func)
		{
			Parms.characterViewDataArray=characterViewDataArray;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreFeaturedViewInterface*)(O->GetNativeInterfaceAddress(UStoreFeaturedViewInterface::StaticClass())))
		{
			I->InitFeaturedCharacters_Implementation(characterViewDataArray);
		}
	}
	static FName NAME_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems = FName(TEXT("InitFeaturedCustomizationItems"));
	void IStoreFeaturedViewInterface::Execute_InitFeaturedCustomizationItems(UObject* O, TArray<UStoreCustomizationItemViewData*> const& viewDataArray)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreFeaturedViewInterface::StaticClass()));
		StoreFeaturedViewInterface_eventInitFeaturedCustomizationItems_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreFeaturedViewInterface_InitFeaturedCustomizationItems);
		if (Func)
		{
			Parms.viewDataArray=viewDataArray;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreFeaturedViewInterface*)(O->GetNativeInterfaceAddress(UStoreFeaturedViewInterface::StaticClass())))
		{
			I->InitFeaturedCustomizationItems_Implementation(viewDataArray);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
