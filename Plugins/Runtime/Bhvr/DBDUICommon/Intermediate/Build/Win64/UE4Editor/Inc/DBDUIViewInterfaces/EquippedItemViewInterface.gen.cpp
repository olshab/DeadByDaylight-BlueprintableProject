// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EquippedItemViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippedItemViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedItemViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedItemViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(IEquippedItemViewInterface::execClearData)
	{
		P_GET_UBOOL(Z_Param_fullClear);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation(Z_Param_fullClear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedItemViewInterface::execSetActiveState)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveState_Implementation(Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedItemViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FItemBundleViewData,Z_Param_Out_itemBundleData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_itemBundleData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedItemViewInterface::execSetFakeItem)
	{
		P_GET_UBOOL(Z_Param_isHoldingFakeItem);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_fakeItemIcon);
		P_GET_STRUCT(FKey,Z_Param_inputKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFakeItem_Implementation(Z_Param_isHoldingFakeItem,Z_Param_Out_fakeItemIcon,Z_Param_inputKey,Z_Param_count);
		P_NATIVE_END;
	}
	void IEquippedItemViewInterface::ClearData(bool fullClear)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IEquippedItemViewInterface::SetActiveState(bool isActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActiveState instead.");
	}
	void IEquippedItemViewInterface::SetData(FItemBundleViewData const& itemBundleData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void IEquippedItemViewInterface::SetFakeItem(bool isHoldingFakeItem, TSoftObjectPtr<UTexture2D> const& fakeItemIcon, FKey inputKey, int32 count)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFakeItem instead.");
	}
	void UEquippedItemViewInterface::StaticRegisterNativesUEquippedItemViewInterface()
	{
		UClass* Class = UEquippedItemViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IEquippedItemViewInterface::execClearData },
			{ "SetActiveState", &IEquippedItemViewInterface::execSetActiveState },
			{ "SetData", &IEquippedItemViewInterface::execSetData },
			{ "SetFakeItem", &IEquippedItemViewInterface::execSetFakeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics
	{
		static void NewProp_fullClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fullClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::NewProp_fullClear_SetBit(void* Obj)
	{
		((EquippedItemViewInterface_eventClearData_Parms*)Obj)->fullClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::NewProp_fullClear = { "fullClear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippedItemViewInterface_eventClearData_Parms), &Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::NewProp_fullClear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::NewProp_fullClear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "ClearData", nullptr, nullptr, sizeof(EquippedItemViewInterface_eventClearData_Parms), Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((EquippedItemViewInterface_eventSetActiveState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippedItemViewInterface_eventSetActiveState_Parms), &Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "SetActiveState", nullptr, nullptr, sizeof(EquippedItemViewInterface_eventSetActiveState_Parms), Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemBundleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData = { "itemBundleData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippedItemViewInterface_eventSetData_Parms, itemBundleData), Z_Construct_UScriptStruct_FItemBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(EquippedItemViewInterface_eventSetData_Parms), Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics
	{
		static void NewProp_isHoldingFakeItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHoldingFakeItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fakeItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_fakeItemIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_isHoldingFakeItem_SetBit(void* Obj)
	{
		((EquippedItemViewInterface_eventSetFakeItem_Parms*)Obj)->isHoldingFakeItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_isHoldingFakeItem = { "isHoldingFakeItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippedItemViewInterface_eventSetFakeItem_Parms), &Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_isHoldingFakeItem_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_fakeItemIcon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_fakeItemIcon = { "fakeItemIcon", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippedItemViewInterface_eventSetFakeItem_Parms, fakeItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_fakeItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_fakeItemIcon_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_inputKey = { "inputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippedItemViewInterface_eventSetFakeItem_Parms, inputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippedItemViewInterface_eventSetFakeItem_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_isHoldingFakeItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_fakeItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_inputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "SetFakeItem", nullptr, nullptr, sizeof(EquippedItemViewInterface_eventSetFakeItem_Parms), Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquippedItemViewInterface_NoRegister()
	{
		return UEquippedItemViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEquippedItemViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquippedItemViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquippedItemViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_ClearData, "ClearData" }, // 696114471
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState, "SetActiveState" }, // 1200639061
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_SetData, "SetData" }, // 3475938347
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_SetFakeItem, "SetFakeItem" }, // 1371677142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquippedItemViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquippedItemViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquippedItemViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquippedItemViewInterface_Statics::ClassParams = {
		&UEquippedItemViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquippedItemViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquippedItemViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquippedItemViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquippedItemViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquippedItemViewInterface, 2129428340);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEquippedItemViewInterface>()
	{
		return UEquippedItemViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquippedItemViewInterface(Z_Construct_UClass_UEquippedItemViewInterface, &UEquippedItemViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEquippedItemViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippedItemViewInterface);
	static FName NAME_UEquippedItemViewInterface_ClearData = FName(TEXT("ClearData"));
	void IEquippedItemViewInterface::Execute_ClearData(UObject* O, bool fullClear)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		EquippedItemViewInterface_eventClearData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_ClearData);
		if (Func)
		{
			Parms.fullClear=fullClear;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->ClearData_Implementation(fullClear);
		}
	}
	static FName NAME_UEquippedItemViewInterface_SetActiveState = FName(TEXT("SetActiveState"));
	void IEquippedItemViewInterface::Execute_SetActiveState(UObject* O, bool isActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		EquippedItemViewInterface_eventSetActiveState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_SetActiveState);
		if (Func)
		{
			Parms.isActive=isActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->SetActiveState_Implementation(isActive);
		}
	}
	static FName NAME_UEquippedItemViewInterface_SetData = FName(TEXT("SetData"));
	void IEquippedItemViewInterface::Execute_SetData(UObject* O, FItemBundleViewData const& itemBundleData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		EquippedItemViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_SetData);
		if (Func)
		{
			Parms.itemBundleData=itemBundleData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->SetData_Implementation(itemBundleData);
		}
	}
	static FName NAME_UEquippedItemViewInterface_SetFakeItem = FName(TEXT("SetFakeItem"));
	void IEquippedItemViewInterface::Execute_SetFakeItem(UObject* O, bool isHoldingFakeItem, TSoftObjectPtr<UTexture2D> const& fakeItemIcon, FKey inputKey, int32 count)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		EquippedItemViewInterface_eventSetFakeItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_SetFakeItem);
		if (Func)
		{
			Parms.isHoldingFakeItem=isHoldingFakeItem;
			Parms.fakeItemIcon=fakeItemIcon;
			Parms.inputKey=inputKey;
			Parms.count=count;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->SetFakeItem_Implementation(isHoldingFakeItem,fakeItemIcon,inputKey,count);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
