// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/GenericRefreshingPopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericRefreshingPopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericRefreshingPopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericRefreshingPopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IGenericRefreshingPopupViewInterface::execRefresh)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_remainingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Refresh_Implementation(Z_Param_remainingTime);
		P_NATIVE_END;
	}
	void IGenericRefreshingPopupViewInterface::Refresh(float remainingTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Refresh instead.");
	}
	void UGenericRefreshingPopupViewInterface::StaticRegisterNativesUGenericRefreshingPopupViewInterface()
	{
		UClass* Class = UGenericRefreshingPopupViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Refresh", &IGenericRefreshingPopupViewInterface::execRefresh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_remainingTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::NewProp_remainingTime = { "remainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericRefreshingPopupViewInterface_eventRefresh_Parms, remainingTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::NewProp_remainingTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenericRefreshingPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericRefreshingPopupViewInterface, nullptr, "Refresh", nullptr, nullptr, sizeof(GenericRefreshingPopupViewInterface_eventRefresh_Parms), Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericRefreshingPopupViewInterface_NoRegister()
	{
		return UGenericRefreshingPopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericRefreshingPopupViewInterface_Refresh, "Refresh" }, // 3547773727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenericRefreshingPopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGenericRefreshingPopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::ClassParams = {
		&UGenericRefreshingPopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericRefreshingPopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericRefreshingPopupViewInterface, 2848438631);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UGenericRefreshingPopupViewInterface>()
	{
		return UGenericRefreshingPopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericRefreshingPopupViewInterface(Z_Construct_UClass_UGenericRefreshingPopupViewInterface, &UGenericRefreshingPopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UGenericRefreshingPopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericRefreshingPopupViewInterface);
	static FName NAME_UGenericRefreshingPopupViewInterface_Refresh = FName(TEXT("Refresh"));
	void IGenericRefreshingPopupViewInterface::Execute_Refresh(UObject* O, float remainingTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGenericRefreshingPopupViewInterface::StaticClass()));
		GenericRefreshingPopupViewInterface_eventRefresh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGenericRefreshingPopupViewInterface_Refresh);
		if (Func)
		{
			Parms.remainingTime=remainingTime;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGenericRefreshingPopupViewInterface*)(O->GetNativeInterfaceAddress(UGenericRefreshingPopupViewInterface::StaticClass())))
		{
			I->Refresh_Implementation(remainingTime);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
