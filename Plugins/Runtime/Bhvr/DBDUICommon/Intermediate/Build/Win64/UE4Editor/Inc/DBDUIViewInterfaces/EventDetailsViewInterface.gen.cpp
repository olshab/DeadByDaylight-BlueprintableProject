// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EventDetailsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventDetailsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventDetailsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventDetailsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDetailsTabViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
// End Cross Module References
	DEFINE_FUNCTION(IEventDetailsViewInterface::execDeinit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deinit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventDetailsViewInterface::execInit)
	{
		P_GET_STRUCT_REF(FDetailsTabViewData,Z_Param_Out_viewData);
		P_GET_STRUCT_REF(FEventEntryPopupSkinUIData,Z_Param_Out_skinData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_Out_viewData,Z_Param_Out_skinData);
		P_NATIVE_END;
	}
	void IEventDetailsViewInterface::Deinit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deinit instead.");
	}
	void IEventDetailsViewInterface::Init(FDetailsTabViewData const& viewData, FEventEntryPopupSkinUIData const& skinData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void UEventDetailsViewInterface::StaticRegisterNativesUEventDetailsViewInterface()
	{
		UClass* Class = UEventDetailsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deinit", &IEventDetailsViewInterface::execDeinit },
			{ "Init", &IEventDetailsViewInterface::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventDetailsViewInterface_Deinit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventDetailsViewInterface_Deinit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventDetailsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventDetailsViewInterface_Deinit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventDetailsViewInterface, nullptr, "Deinit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventDetailsViewInterface_Deinit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventDetailsViewInterface_Deinit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventDetailsViewInterface_Deinit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventDetailsViewInterface_Deinit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skinData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventDetailsViewInterface_eventInit_Parms, viewData), Z_Construct_UScriptStruct_FDetailsTabViewData, METADATA_PARAMS(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_viewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_skinData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_skinData = { "skinData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventDetailsViewInterface_eventInit_Parms, skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_skinData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::NewProp_skinData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventDetailsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventDetailsViewInterface, nullptr, "Init", nullptr, nullptr, sizeof(EventDetailsViewInterface_eventInit_Parms), Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventDetailsViewInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventDetailsViewInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventDetailsViewInterface_NoRegister()
	{
		return UEventDetailsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEventDetailsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventDetailsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventDetailsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventDetailsViewInterface_Deinit, "Deinit" }, // 1649589164
		{ &Z_Construct_UFunction_UEventDetailsViewInterface_Init, "Init" }, // 2231209822
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventDetailsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventDetailsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventDetailsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEventDetailsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventDetailsViewInterface_Statics::ClassParams = {
		&UEventDetailsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventDetailsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventDetailsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventDetailsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventDetailsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventDetailsViewInterface, 1206662453);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEventDetailsViewInterface>()
	{
		return UEventDetailsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventDetailsViewInterface(Z_Construct_UClass_UEventDetailsViewInterface, &UEventDetailsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEventDetailsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventDetailsViewInterface);
	static FName NAME_UEventDetailsViewInterface_Deinit = FName(TEXT("Deinit"));
	void IEventDetailsViewInterface::Execute_Deinit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventDetailsViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventDetailsViewInterface_Deinit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventDetailsViewInterface*)(O->GetNativeInterfaceAddress(UEventDetailsViewInterface::StaticClass())))
		{
			I->Deinit_Implementation();
		}
	}
	static FName NAME_UEventDetailsViewInterface_Init = FName(TEXT("Init"));
	void IEventDetailsViewInterface::Execute_Init(UObject* O, FDetailsTabViewData const& viewData, FEventEntryPopupSkinUIData const& skinData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventDetailsViewInterface::StaticClass()));
		EventDetailsViewInterface_eventInit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventDetailsViewInterface_Init);
		if (Func)
		{
			Parms.viewData=viewData;
			Parms.skinData=skinData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventDetailsViewInterface*)(O->GetNativeInterfaceAddress(UEventDetailsViewInterface::StaticClass())))
		{
			I->Init_Implementation(viewData,skinData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
