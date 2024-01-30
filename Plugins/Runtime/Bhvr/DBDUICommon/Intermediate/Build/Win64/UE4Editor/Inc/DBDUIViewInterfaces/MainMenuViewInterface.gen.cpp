// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MainMenuViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMainMenuViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMainMenuViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuButtonViewData();
// End Cross Module References
	DEFINE_FUNCTION(IMainMenuViewInterface::execSetArchivesButton)
	{
		P_GET_STRUCT_REF(FMainMenuButtonViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArchivesButton_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainMenuViewInterface::execSetBloodPointBonus)
	{
		P_GET_UBOOL(Z_Param_isOnKiller);
		P_GET_STRUCT_REF(FMainMenuButtonViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBloodPointBonus_Implementation(Z_Param_isOnKiller,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainMenuViewInterface::execSetEventButton)
	{
		P_GET_UBOOL(Z_Param_isEventActive);
		P_GET_STRUCT_REF(FMainMenuButtonViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventButton_Implementation(Z_Param_isEventActive,Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IMainMenuViewInterface::SetArchivesButton(FMainMenuButtonViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetArchivesButton instead.");
	}
	void IMainMenuViewInterface::SetBloodPointBonus(bool isOnKiller, FMainMenuButtonViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetBloodPointBonus instead.");
	}
	void IMainMenuViewInterface::SetEventButton(bool isEventActive, FMainMenuButtonViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEventButton instead.");
	}
	void UMainMenuViewInterface::StaticRegisterNativesUMainMenuViewInterface()
	{
		UClass* Class = UMainMenuViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetArchivesButton", &IMainMenuViewInterface::execSetArchivesButton },
			{ "SetBloodPointBonus", &IMainMenuViewInterface::execSetBloodPointBonus },
			{ "SetEventButton", &IMainMenuViewInterface::execSetEventButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuViewInterface_eventSetArchivesButton_Parms, data), Z_Construct_UScriptStruct_FMainMenuButtonViewData, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuViewInterface, nullptr, "SetArchivesButton", nullptr, nullptr, sizeof(MainMenuViewInterface_eventSetArchivesButton_Parms), Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics
	{
		static void NewProp_isOnKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_isOnKiller_SetBit(void* Obj)
	{
		((MainMenuViewInterface_eventSetBloodPointBonus_Parms*)Obj)->isOnKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_isOnKiller = { "isOnKiller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainMenuViewInterface_eventSetBloodPointBonus_Parms), &Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_isOnKiller_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuViewInterface_eventSetBloodPointBonus_Parms, data), Z_Construct_UScriptStruct_FMainMenuButtonViewData, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_isOnKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuViewInterface, nullptr, "SetBloodPointBonus", nullptr, nullptr, sizeof(MainMenuViewInterface_eventSetBloodPointBonus_Parms), Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics
	{
		static void NewProp_isEventActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEventActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_isEventActive_SetBit(void* Obj)
	{
		((MainMenuViewInterface_eventSetEventButton_Parms*)Obj)->isEventActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_isEventActive = { "isEventActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainMenuViewInterface_eventSetEventButton_Parms), &Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_isEventActive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuViewInterface_eventSetEventButton_Parms, data), Z_Construct_UScriptStruct_FMainMenuButtonViewData, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_isEventActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuViewInterface, nullptr, "SetEventButton", nullptr, nullptr, sizeof(MainMenuViewInterface_eventSetEventButton_Parms), Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuViewInterface_NoRegister()
	{
		return UMainMenuViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuViewInterface_SetArchivesButton, "SetArchivesButton" }, // 619447251
		{ &Z_Construct_UFunction_UMainMenuViewInterface_SetBloodPointBonus, "SetBloodPointBonus" }, // 3657225941
		{ &Z_Construct_UFunction_UMainMenuViewInterface_SetEventButton, "SetEventButton" }, // 333593935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MainMenuViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMainMenuViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuViewInterface_Statics::ClassParams = {
		&UMainMenuViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMainMenuViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenuViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenuViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuViewInterface, 1538906978);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UMainMenuViewInterface>()
	{
		return UMainMenuViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuViewInterface(Z_Construct_UClass_UMainMenuViewInterface, &UMainMenuViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UMainMenuViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuViewInterface);
	static FName NAME_UMainMenuViewInterface_SetArchivesButton = FName(TEXT("SetArchivesButton"));
	void IMainMenuViewInterface::Execute_SetArchivesButton(UObject* O, FMainMenuButtonViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainMenuViewInterface::StaticClass()));
		MainMenuViewInterface_eventSetArchivesButton_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainMenuViewInterface_SetArchivesButton);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainMenuViewInterface*)(O->GetNativeInterfaceAddress(UMainMenuViewInterface::StaticClass())))
		{
			I->SetArchivesButton_Implementation(data);
		}
	}
	static FName NAME_UMainMenuViewInterface_SetBloodPointBonus = FName(TEXT("SetBloodPointBonus"));
	void IMainMenuViewInterface::Execute_SetBloodPointBonus(UObject* O, bool isOnKiller, FMainMenuButtonViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainMenuViewInterface::StaticClass()));
		MainMenuViewInterface_eventSetBloodPointBonus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainMenuViewInterface_SetBloodPointBonus);
		if (Func)
		{
			Parms.isOnKiller=isOnKiller;
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainMenuViewInterface*)(O->GetNativeInterfaceAddress(UMainMenuViewInterface::StaticClass())))
		{
			I->SetBloodPointBonus_Implementation(isOnKiller,data);
		}
	}
	static FName NAME_UMainMenuViewInterface_SetEventButton = FName(TEXT("SetEventButton"));
	void IMainMenuViewInterface::Execute_SetEventButton(UObject* O, bool isEventActive, FMainMenuButtonViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainMenuViewInterface::StaticClass()));
		MainMenuViewInterface_eventSetEventButton_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainMenuViewInterface_SetEventButton);
		if (Func)
		{
			Parms.isEventActive=isEventActive;
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainMenuViewInterface*)(O->GetNativeInterfaceAddress(UMainMenuViewInterface::StaticClass())))
		{
			I->SetEventButton_Implementation(isEventActive,data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
