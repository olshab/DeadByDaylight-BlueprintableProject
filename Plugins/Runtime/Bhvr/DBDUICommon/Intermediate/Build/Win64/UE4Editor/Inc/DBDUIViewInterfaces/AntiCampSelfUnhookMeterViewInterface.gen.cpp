// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AntiCampSelfUnhookMeterViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntiCampSelfUnhookMeterViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState();
// End Cross Module References
	DEFINE_FUNCTION(IAntiCampSelfUnhookMeterViewInterface::execSetProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress_Implementation(Z_Param_progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAntiCampSelfUnhookMeterViewInterface::execSetState)
	{
		P_GET_ENUM(EAntiCampSelfUnhookMeterState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState_Implementation(EAntiCampSelfUnhookMeterState(Z_Param_newState));
		P_NATIVE_END;
	}
	void IAntiCampSelfUnhookMeterViewInterface::SetProgress(const float progress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetProgress instead.");
	}
	void IAntiCampSelfUnhookMeterViewInterface::SetState(const EAntiCampSelfUnhookMeterState newState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetState instead.");
	}
	void UAntiCampSelfUnhookMeterViewInterface::StaticRegisterNativesUAntiCampSelfUnhookMeterViewInterface()
	{
		UClass* Class = UAntiCampSelfUnhookMeterViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetProgress", &IAntiCampSelfUnhookMeterViewInterface::execSetProgress },
			{ "SetState", &IAntiCampSelfUnhookMeterViewInterface::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AntiCampSelfUnhookMeterViewInterface_eventSetProgress_Parms, progress), METADATA_PARAMS(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AntiCampSelfUnhookMeterViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface, nullptr, "SetProgress", nullptr, nullptr, sizeof(AntiCampSelfUnhookMeterViewInterface_eventSetProgress_Parms), Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AntiCampSelfUnhookMeterViewInterface_eventSetState_Parms, newState), Z_Construct_UEnum_DBDUIViewInterfaces_EAntiCampSelfUnhookMeterState, METADATA_PARAMS(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AntiCampSelfUnhookMeterViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface, nullptr, "SetState", nullptr, nullptr, sizeof(AntiCampSelfUnhookMeterViewInterface_eventSetState_Parms), Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_NoRegister()
	{
		return UAntiCampSelfUnhookMeterViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetProgress, "SetProgress" }, // 587872599
		{ &Z_Construct_UFunction_UAntiCampSelfUnhookMeterViewInterface_SetState, "SetState" }, // 750809006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AntiCampSelfUnhookMeterViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAntiCampSelfUnhookMeterViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::ClassParams = {
		&UAntiCampSelfUnhookMeterViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAntiCampSelfUnhookMeterViewInterface, 1796250974);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UAntiCampSelfUnhookMeterViewInterface>()
	{
		return UAntiCampSelfUnhookMeterViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAntiCampSelfUnhookMeterViewInterface(Z_Construct_UClass_UAntiCampSelfUnhookMeterViewInterface, &UAntiCampSelfUnhookMeterViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UAntiCampSelfUnhookMeterViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAntiCampSelfUnhookMeterViewInterface);
	static FName NAME_UAntiCampSelfUnhookMeterViewInterface_SetProgress = FName(TEXT("SetProgress"));
	void IAntiCampSelfUnhookMeterViewInterface::Execute_SetProgress(UObject* O, const float progress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAntiCampSelfUnhookMeterViewInterface::StaticClass()));
		AntiCampSelfUnhookMeterViewInterface_eventSetProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAntiCampSelfUnhookMeterViewInterface_SetProgress);
		if (Func)
		{
			Parms.progress=progress;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAntiCampSelfUnhookMeterViewInterface*)(O->GetNativeInterfaceAddress(UAntiCampSelfUnhookMeterViewInterface::StaticClass())))
		{
			I->SetProgress_Implementation(progress);
		}
	}
	static FName NAME_UAntiCampSelfUnhookMeterViewInterface_SetState = FName(TEXT("SetState"));
	void IAntiCampSelfUnhookMeterViewInterface::Execute_SetState(UObject* O, const EAntiCampSelfUnhookMeterState newState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAntiCampSelfUnhookMeterViewInterface::StaticClass()));
		AntiCampSelfUnhookMeterViewInterface_eventSetState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAntiCampSelfUnhookMeterViewInterface_SetState);
		if (Func)
		{
			Parms.newState=newState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAntiCampSelfUnhookMeterViewInterface*)(O->GetNativeInterfaceAddress(UAntiCampSelfUnhookMeterViewInterface::StaticClass())))
		{
			I->SetState_Implementation(newState);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
