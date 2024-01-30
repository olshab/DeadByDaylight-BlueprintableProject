// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/DailyRitualsPopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualsPopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UDailyRitualsPopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UDailyRitualsPopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualViewData();
// End Cross Module References
	DEFINE_FUNCTION(IDailyRitualsPopupViewInterface::execSetAllDailyRitualTilesVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllDailyRitualTilesVisible_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDailyRitualsPopupViewInterface::execSetCanRemoveDailyRitual)
	{
		P_GET_UBOOL(Z_Param_canRemoveDailyRitual);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanRemoveDailyRitual_Implementation(Z_Param_canRemoveDailyRitual);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDailyRitualsPopupViewInterface::execSetDailyRitualsData)
	{
		P_GET_TARRAY_REF(FDailyRitualViewData,Z_Param_Out_dailyRitualsData);
		P_GET_UBOOL(Z_Param_isAfterTrial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDailyRitualsData_Implementation(Z_Param_Out_dailyRitualsData,Z_Param_isAfterTrial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDailyRitualsPopupViewInterface::execStartAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnim_Implementation();
		P_NATIVE_END;
	}
	void IDailyRitualsPopupViewInterface::SetAllDailyRitualTilesVisible()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAllDailyRitualTilesVisible instead.");
	}
	void IDailyRitualsPopupViewInterface::SetCanRemoveDailyRitual(bool canRemoveDailyRitual)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCanRemoveDailyRitual instead.");
	}
	void IDailyRitualsPopupViewInterface::SetDailyRitualsData(TArray<FDailyRitualViewData> const& dailyRitualsData, bool isAfterTrial)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDailyRitualsData instead.");
	}
	void IDailyRitualsPopupViewInterface::StartAnim()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartAnim instead.");
	}
	void UDailyRitualsPopupViewInterface::StaticRegisterNativesUDailyRitualsPopupViewInterface()
	{
		UClass* Class = UDailyRitualsPopupViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAllDailyRitualTilesVisible", &IDailyRitualsPopupViewInterface::execSetAllDailyRitualTilesVisible },
			{ "SetCanRemoveDailyRitual", &IDailyRitualsPopupViewInterface::execSetCanRemoveDailyRitual },
			{ "SetDailyRitualsData", &IDailyRitualsPopupViewInterface::execSetDailyRitualsData },
			{ "StartAnim", &IDailyRitualsPopupViewInterface::execStartAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupViewInterface, nullptr, "SetAllDailyRitualTilesVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canRemoveDailyRitual_MetaData[];
#endif
		static void NewProp_canRemoveDailyRitual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canRemoveDailyRitual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual_SetBit(void* Obj)
	{
		((DailyRitualsPopupViewInterface_eventSetCanRemoveDailyRitual_Parms*)Obj)->canRemoveDailyRitual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual = { "canRemoveDailyRitual", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DailyRitualsPopupViewInterface_eventSetCanRemoveDailyRitual_Parms), &Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::NewProp_canRemoveDailyRitual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupViewInterface, nullptr, "SetCanRemoveDailyRitual", nullptr, nullptr, sizeof(DailyRitualsPopupViewInterface_eventSetCanRemoveDailyRitual_Parms), Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dailyRitualsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dailyRitualsData;
		static void NewProp_isAfterTrial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAfterTrial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData_Inner = { "dailyRitualsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDailyRitualViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData = { "dailyRitualsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsPopupViewInterface_eventSetDailyRitualsData_Parms, dailyRitualsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData_MetaData)) };
	void Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_isAfterTrial_SetBit(void* Obj)
	{
		((DailyRitualsPopupViewInterface_eventSetDailyRitualsData_Parms*)Obj)->isAfterTrial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_isAfterTrial = { "isAfterTrial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DailyRitualsPopupViewInterface_eventSetDailyRitualsData_Parms), &Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_isAfterTrial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_dailyRitualsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::NewProp_isAfterTrial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupViewInterface, nullptr, "SetDailyRitualsData", nullptr, nullptr, sizeof(DailyRitualsPopupViewInterface_eventSetDailyRitualsData_Parms), Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupViewInterface, nullptr, "StartAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDailyRitualsPopupViewInterface_NoRegister()
	{
		return UDailyRitualsPopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible, "SetAllDailyRitualTilesVisible" }, // 405339353
		{ &Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual, "SetCanRemoveDailyRitual" }, // 4029420300
		{ &Z_Construct_UFunction_UDailyRitualsPopupViewInterface_SetDailyRitualsData, "SetDailyRitualsData" }, // 1073480708
		{ &Z_Construct_UFunction_UDailyRitualsPopupViewInterface_StartAnim, "StartAnim" }, // 866660218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDailyRitualsPopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::ClassParams = {
		&UDailyRitualsPopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRitualsPopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRitualsPopupViewInterface, 4125053120);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UDailyRitualsPopupViewInterface>()
	{
		return UDailyRitualsPopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRitualsPopupViewInterface(Z_Construct_UClass_UDailyRitualsPopupViewInterface, &UDailyRitualsPopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UDailyRitualsPopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRitualsPopupViewInterface);
	static FName NAME_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible = FName(TEXT("SetAllDailyRitualTilesVisible"));
	void IDailyRitualsPopupViewInterface::Execute_SetAllDailyRitualTilesVisible(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDailyRitualsPopupViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDailyRitualsPopupViewInterface*)(O->GetNativeInterfaceAddress(UDailyRitualsPopupViewInterface::StaticClass())))
		{
			I->SetAllDailyRitualTilesVisible_Implementation();
		}
	}
	static FName NAME_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual = FName(TEXT("SetCanRemoveDailyRitual"));
	void IDailyRitualsPopupViewInterface::Execute_SetCanRemoveDailyRitual(UObject* O, bool canRemoveDailyRitual)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDailyRitualsPopupViewInterface::StaticClass()));
		DailyRitualsPopupViewInterface_eventSetCanRemoveDailyRitual_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual);
		if (Func)
		{
			Parms.canRemoveDailyRitual=canRemoveDailyRitual;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDailyRitualsPopupViewInterface*)(O->GetNativeInterfaceAddress(UDailyRitualsPopupViewInterface::StaticClass())))
		{
			I->SetCanRemoveDailyRitual_Implementation(canRemoveDailyRitual);
		}
	}
	static FName NAME_UDailyRitualsPopupViewInterface_SetDailyRitualsData = FName(TEXT("SetDailyRitualsData"));
	void IDailyRitualsPopupViewInterface::Execute_SetDailyRitualsData(UObject* O, TArray<FDailyRitualViewData> const& dailyRitualsData, bool isAfterTrial)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDailyRitualsPopupViewInterface::StaticClass()));
		DailyRitualsPopupViewInterface_eventSetDailyRitualsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDailyRitualsPopupViewInterface_SetDailyRitualsData);
		if (Func)
		{
			Parms.dailyRitualsData=dailyRitualsData;
			Parms.isAfterTrial=isAfterTrial;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDailyRitualsPopupViewInterface*)(O->GetNativeInterfaceAddress(UDailyRitualsPopupViewInterface::StaticClass())))
		{
			I->SetDailyRitualsData_Implementation(dailyRitualsData,isAfterTrial);
		}
	}
	static FName NAME_UDailyRitualsPopupViewInterface_StartAnim = FName(TEXT("StartAnim"));
	void IDailyRitualsPopupViewInterface::Execute_StartAnim(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDailyRitualsPopupViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDailyRitualsPopupViewInterface_StartAnim);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDailyRitualsPopupViewInterface*)(O->GetNativeInterfaceAddress(UDailyRitualsPopupViewInterface::StaticClass())))
		{
			I->StartAnim_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
