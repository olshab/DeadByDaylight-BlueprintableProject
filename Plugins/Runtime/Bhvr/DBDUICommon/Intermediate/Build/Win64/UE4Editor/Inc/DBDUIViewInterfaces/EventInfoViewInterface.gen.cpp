// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EventInfoViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventInfoViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventInfoViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventInfoViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventTabViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
// End Cross Module References
	DEFINE_FUNCTION(IEventInfoViewInterface::execDeinit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deinit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventInfoViewInterface::execDisableArchivesButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableArchivesButton_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventInfoViewInterface::execInit)
	{
		P_GET_OBJECT(UEventTabViewData,Z_Param_viewData);
		P_GET_STRUCT_REF(FEventEntryPopupSkinUIData,Z_Param_Out_skinData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_viewData,Z_Param_Out_skinData);
		P_NATIVE_END;
	}
	void IEventInfoViewInterface::Deinit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deinit instead.");
	}
	void IEventInfoViewInterface::DisableArchivesButton()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DisableArchivesButton instead.");
	}
	void IEventInfoViewInterface::Init(UEventTabViewData* viewData, FEventEntryPopupSkinUIData const& skinData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void UEventInfoViewInterface::StaticRegisterNativesUEventInfoViewInterface()
	{
		UClass* Class = UEventInfoViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deinit", &IEventInfoViewInterface::execDeinit },
			{ "DisableArchivesButton", &IEventInfoViewInterface::execDisableArchivesButton },
			{ "Init", &IEventInfoViewInterface::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventInfoViewInterface_Deinit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventInfoViewInterface_Deinit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventInfoViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventInfoViewInterface_Deinit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventInfoViewInterface, nullptr, "Deinit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventInfoViewInterface_Deinit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventInfoViewInterface_Deinit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventInfoViewInterface_Deinit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventInfoViewInterface_Deinit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventInfoViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventInfoViewInterface, nullptr, "DisableArchivesButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewData;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventInfoViewInterface_eventInit_Parms, viewData), Z_Construct_UClass_UEventTabViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_skinData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_skinData = { "skinData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventInfoViewInterface_eventInit_Parms, skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_skinData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::NewProp_skinData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventInfoViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventInfoViewInterface, nullptr, "Init", nullptr, nullptr, sizeof(EventInfoViewInterface_eventInit_Parms), Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventInfoViewInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventInfoViewInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventInfoViewInterface_NoRegister()
	{
		return UEventInfoViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEventInfoViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventInfoViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventInfoViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventInfoViewInterface_Deinit, "Deinit" }, // 656916861
		{ &Z_Construct_UFunction_UEventInfoViewInterface_DisableArchivesButton, "DisableArchivesButton" }, // 3156659088
		{ &Z_Construct_UFunction_UEventInfoViewInterface_Init, "Init" }, // 2691673033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventInfoViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventInfoViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventInfoViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEventInfoViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventInfoViewInterface_Statics::ClassParams = {
		&UEventInfoViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventInfoViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventInfoViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventInfoViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventInfoViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventInfoViewInterface, 2417939783);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEventInfoViewInterface>()
	{
		return UEventInfoViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventInfoViewInterface(Z_Construct_UClass_UEventInfoViewInterface, &UEventInfoViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEventInfoViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventInfoViewInterface);
	static FName NAME_UEventInfoViewInterface_Deinit = FName(TEXT("Deinit"));
	void IEventInfoViewInterface::Execute_Deinit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventInfoViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventInfoViewInterface_Deinit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventInfoViewInterface*)(O->GetNativeInterfaceAddress(UEventInfoViewInterface::StaticClass())))
		{
			I->Deinit_Implementation();
		}
	}
	static FName NAME_UEventInfoViewInterface_DisableArchivesButton = FName(TEXT("DisableArchivesButton"));
	void IEventInfoViewInterface::Execute_DisableArchivesButton(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventInfoViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventInfoViewInterface_DisableArchivesButton);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventInfoViewInterface*)(O->GetNativeInterfaceAddress(UEventInfoViewInterface::StaticClass())))
		{
			I->DisableArchivesButton_Implementation();
		}
	}
	static FName NAME_UEventInfoViewInterface_Init = FName(TEXT("Init"));
	void IEventInfoViewInterface::Execute_Init(UObject* O, UEventTabViewData* viewData, FEventEntryPopupSkinUIData const& skinData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventInfoViewInterface::StaticClass()));
		EventInfoViewInterface_eventInit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventInfoViewInterface_Init);
		if (Func)
		{
			Parms.viewData=viewData;
			Parms.skinData=skinData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventInfoViewInterface*)(O->GetNativeInterfaceAddress(UEventInfoViewInterface::StaticClass())))
		{
			I->Init_Implementation(viewData,skinData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
