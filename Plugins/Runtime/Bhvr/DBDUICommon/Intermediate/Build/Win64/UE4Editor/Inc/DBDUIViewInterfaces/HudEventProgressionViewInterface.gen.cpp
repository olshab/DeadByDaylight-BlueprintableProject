// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudEventProgressionViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEventProgressionViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventProgressionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventProgressionViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgressionViewData();
// End Cross Module References
	DEFINE_FUNCTION(IHudEventProgressionViewInterface::execEnableEventProgression)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableEventProgression_Implementation(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgressionViewInterface::execInitEventProgression)
	{
		P_GET_STRUCT_REF(FHudEventProgressionViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEventProgression_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgressionViewInterface::execUpdateEventBankedProgress)
	{
		P_GET_STRUCT_REF(FHudEventProgressionViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEventBankedProgress_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgressionViewInterface::execUpdateEventPendingProgress)
	{
		P_GET_STRUCT_REF(FHudEventProgressionViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEventPendingProgress_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	void IHudEventProgressionViewInterface::EnableEventProgression(bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnableEventProgression instead.");
	}
	void IHudEventProgressionViewInterface::InitEventProgression(FHudEventProgressionViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitEventProgression instead.");
	}
	void IHudEventProgressionViewInterface::UpdateEventBankedProgress(FHudEventProgressionViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateEventBankedProgress instead.");
	}
	void IHudEventProgressionViewInterface::UpdateEventPendingProgress(FHudEventProgressionViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateEventPendingProgress instead.");
	}
	void UHudEventProgressionViewInterface::StaticRegisterNativesUHudEventProgressionViewInterface()
	{
		UClass* Class = UHudEventProgressionViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableEventProgression", &IHudEventProgressionViewInterface::execEnableEventProgression },
			{ "InitEventProgression", &IHudEventProgressionViewInterface::execInitEventProgression },
			{ "UpdateEventBankedProgress", &IHudEventProgressionViewInterface::execUpdateEventBankedProgress },
			{ "UpdateEventPendingProgress", &IHudEventProgressionViewInterface::execUpdateEventPendingProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEnabled_MetaData[];
#endif
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((HudEventProgressionViewInterface_eventEnableEventProgression_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudEventProgressionViewInterface_eventEnableEventProgression_Parms), &Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionViewInterface, nullptr, "EnableEventProgression", nullptr, nullptr, sizeof(HudEventProgressionViewInterface_eventEnableEventProgression_Parms), Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgressionViewInterface_eventInitEventProgression_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgressionViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionViewInterface, nullptr, "InitEventProgression", nullptr, nullptr, sizeof(HudEventProgressionViewInterface_eventInitEventProgression_Parms), Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgressionViewInterface_eventUpdateEventBankedProgress_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgressionViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionViewInterface, nullptr, "UpdateEventBankedProgress", nullptr, nullptr, sizeof(HudEventProgressionViewInterface_eventUpdateEventBankedProgress_Parms), Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgressionViewInterface_eventUpdateEventPendingProgress_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgressionViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionViewInterface, nullptr, "UpdateEventPendingProgress", nullptr, nullptr, sizeof(HudEventProgressionViewInterface_eventUpdateEventPendingProgress_Parms), Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudEventProgressionViewInterface_NoRegister()
	{
		return UHudEventProgressionViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudEventProgressionViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudEventProgressionViewInterface_EnableEventProgression, "EnableEventProgression" }, // 4199945241
		{ &Z_Construct_UFunction_UHudEventProgressionViewInterface_InitEventProgression, "InitEventProgression" }, // 4087004800
		{ &Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventBankedProgress, "UpdateEventBankedProgress" }, // 2247375764
		{ &Z_Construct_UFunction_UHudEventProgressionViewInterface_UpdateEventPendingProgress, "UpdateEventPendingProgress" }, // 2746252331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudEventProgressionViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudEventProgressionViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::ClassParams = {
		&UHudEventProgressionViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudEventProgressionViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudEventProgressionViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudEventProgressionViewInterface, 2204592716);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudEventProgressionViewInterface>()
	{
		return UHudEventProgressionViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudEventProgressionViewInterface(Z_Construct_UClass_UHudEventProgressionViewInterface, &UHudEventProgressionViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudEventProgressionViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudEventProgressionViewInterface);
	static FName NAME_UHudEventProgressionViewInterface_EnableEventProgression = FName(TEXT("EnableEventProgression"));
	void IHudEventProgressionViewInterface::Execute_EnableEventProgression(UObject* O, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgressionViewInterface::StaticClass()));
		HudEventProgressionViewInterface_eventEnableEventProgression_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgressionViewInterface_EnableEventProgression);
		if (Func)
		{
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgressionViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgressionViewInterface::StaticClass())))
		{
			I->EnableEventProgression_Implementation(isEnabled);
		}
	}
	static FName NAME_UHudEventProgressionViewInterface_InitEventProgression = FName(TEXT("InitEventProgression"));
	void IHudEventProgressionViewInterface::Execute_InitEventProgression(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgressionViewInterface::StaticClass()));
		HudEventProgressionViewInterface_eventInitEventProgression_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgressionViewInterface_InitEventProgression);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgressionViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgressionViewInterface::StaticClass())))
		{
			I->InitEventProgression_Implementation(hudEventProgressionViewData);
		}
	}
	static FName NAME_UHudEventProgressionViewInterface_UpdateEventBankedProgress = FName(TEXT("UpdateEventBankedProgress"));
	void IHudEventProgressionViewInterface::Execute_UpdateEventBankedProgress(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgressionViewInterface::StaticClass()));
		HudEventProgressionViewInterface_eventUpdateEventBankedProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgressionViewInterface_UpdateEventBankedProgress);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgressionViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgressionViewInterface::StaticClass())))
		{
			I->UpdateEventBankedProgress_Implementation(hudEventProgressionViewData);
		}
	}
	static FName NAME_UHudEventProgressionViewInterface_UpdateEventPendingProgress = FName(TEXT("UpdateEventPendingProgress"));
	void IHudEventProgressionViewInterface::Execute_UpdateEventPendingProgress(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgressionViewInterface::StaticClass()));
		HudEventProgressionViewInterface_eventUpdateEventPendingProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgressionViewInterface_UpdateEventPendingProgress);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgressionViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgressionViewInterface::StaticClass())))
		{
			I->UpdateEventPendingProgress_Implementation(hudEventProgressionViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
