// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/WatermarkViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWatermarkViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UWatermarkViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UWatermarkViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IWatermarkViewInterface::execSetSteamValuesText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamName);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteamValuesText_Implementation(Z_Param_SteamName,Z_Param_SteamId);
		P_NATIVE_END;
	}
	void IWatermarkViewInterface::SetSteamValuesText(const FString& SteamName, const FString& SteamId)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSteamValuesText instead.");
	}
	void UWatermarkViewInterface::StaticRegisterNativesUWatermarkViewInterface()
	{
		UClass* Class = UWatermarkViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSteamValuesText", &IWatermarkViewInterface::execSetSteamValuesText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamName = { "SteamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WatermarkViewInterface_eventSetSteamValuesText_Parms, SteamName), METADATA_PARAMS(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WatermarkViewInterface_eventSetSteamValuesText_Parms, SteamId), METADATA_PARAMS(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WatermarkViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWatermarkViewInterface, nullptr, "SetSteamValuesText", nullptr, nullptr, sizeof(WatermarkViewInterface_eventSetSteamValuesText_Parms), Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWatermarkViewInterface_NoRegister()
	{
		return UWatermarkViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWatermarkViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWatermarkViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWatermarkViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWatermarkViewInterface_SetSteamValuesText, "SetSteamValuesText" }, // 2792955006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWatermarkViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WatermarkViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWatermarkViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWatermarkViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWatermarkViewInterface_Statics::ClassParams = {
		&UWatermarkViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWatermarkViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWatermarkViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWatermarkViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWatermarkViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWatermarkViewInterface, 3154770332);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UWatermarkViewInterface>()
	{
		return UWatermarkViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWatermarkViewInterface(Z_Construct_UClass_UWatermarkViewInterface, &UWatermarkViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UWatermarkViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWatermarkViewInterface);
	static FName NAME_UWatermarkViewInterface_SetSteamValuesText = FName(TEXT("SetSteamValuesText"));
	void IWatermarkViewInterface::Execute_SetSteamValuesText(UObject* O, const FString& SteamName, const FString& SteamId)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWatermarkViewInterface::StaticClass()));
		WatermarkViewInterface_eventSetSteamValuesText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWatermarkViewInterface_SetSteamValuesText);
		if (Func)
		{
			Parms.SteamName=SteamName;
			Parms.SteamId=SteamId;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWatermarkViewInterface*)(O->GetNativeInterfaceAddress(UWatermarkViewInterface::StaticClass())))
		{
			I->SetSteamValuesText_Implementation(SteamName,SteamId);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
