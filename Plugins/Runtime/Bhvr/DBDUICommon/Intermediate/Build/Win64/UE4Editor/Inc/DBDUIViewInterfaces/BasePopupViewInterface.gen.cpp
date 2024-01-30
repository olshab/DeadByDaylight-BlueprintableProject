// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/BasePopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IBasePopupViewInterface::execEnter)
	{
		P_GET_OBJECT(UBasePopupViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enter_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBasePopupViewInterface::execLeave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Leave_Implementation();
		P_NATIVE_END;
	}
	void IBasePopupViewInterface::Enter(UBasePopupViewData* data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Enter instead.");
	}
	void IBasePopupViewInterface::Leave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Leave instead.");
	}
	void UBasePopupViewInterface::StaticRegisterNativesUBasePopupViewInterface()
	{
		UClass* Class = UBasePopupViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Enter", &IBasePopupViewInterface::execEnter },
			{ "Leave", &IBasePopupViewInterface::execLeave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePopupViewInterface_eventEnter_Parms, data), Z_Construct_UClass_UBasePopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePopupViewInterface, nullptr, "Enter", nullptr, nullptr, sizeof(BasePopupViewInterface_eventEnter_Parms), Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePopupViewInterface_Enter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePopupViewInterface_Enter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePopupViewInterface_Leave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePopupViewInterface_Leave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePopupViewInterface_Leave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePopupViewInterface, nullptr, "Leave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePopupViewInterface_Leave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePopupViewInterface_Leave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePopupViewInterface_Leave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePopupViewInterface_Leave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBasePopupViewInterface_NoRegister()
	{
		return UBasePopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBasePopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePopupViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePopupViewInterface_Enter, "Enter" }, // 994889495
		{ &Z_Construct_UFunction_UBasePopupViewInterface_Leave, "Leave" }, // 194566414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasePopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBasePopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePopupViewInterface_Statics::ClassParams = {
		&UBasePopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasePopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePopupViewInterface, 2733865448);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UBasePopupViewInterface>()
	{
		return UBasePopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePopupViewInterface(Z_Construct_UClass_UBasePopupViewInterface, &UBasePopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UBasePopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePopupViewInterface);
	static FName NAME_UBasePopupViewInterface_Enter = FName(TEXT("Enter"));
	void IBasePopupViewInterface::Execute_Enter(UObject* O, UBasePopupViewData* data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBasePopupViewInterface::StaticClass()));
		BasePopupViewInterface_eventEnter_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBasePopupViewInterface_Enter);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBasePopupViewInterface*)(O->GetNativeInterfaceAddress(UBasePopupViewInterface::StaticClass())))
		{
			I->Enter_Implementation(data);
		}
	}
	static FName NAME_UBasePopupViewInterface_Leave = FName(TEXT("Leave"));
	void IBasePopupViewInterface::Execute_Leave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBasePopupViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBasePopupViewInterface_Leave);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBasePopupViewInterface*)(O->GetNativeInterfaceAddress(UBasePopupViewInterface::StaticClass())))
		{
			I->Leave_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
