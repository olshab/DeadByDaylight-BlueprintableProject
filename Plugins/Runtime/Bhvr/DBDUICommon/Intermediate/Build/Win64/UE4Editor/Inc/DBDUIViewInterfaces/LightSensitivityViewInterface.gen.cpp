// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/LightSensitivityViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSensitivityViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULightSensitivityViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULightSensitivityViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(ILightSensitivityViewInterface::execStartFadeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFadeOut_Implementation();
		P_NATIVE_END;
	}
	void ILightSensitivityViewInterface::StartFadeOut()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartFadeOut instead.");
	}
	void ULightSensitivityViewInterface::StaticRegisterNativesULightSensitivityViewInterface()
	{
		UClass* Class = ULightSensitivityViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartFadeOut", &ILightSensitivityViewInterface::execStartFadeOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightSensitivityViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightSensitivityViewInterface, nullptr, "StartFadeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightSensitivityViewInterface_NoRegister()
	{
		return ULightSensitivityViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULightSensitivityViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightSensitivityViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightSensitivityViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightSensitivityViewInterface_StartFadeOut, "StartFadeOut" }, // 3803905184
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSensitivityViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightSensitivityViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightSensitivityViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILightSensitivityViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightSensitivityViewInterface_Statics::ClassParams = {
		&ULightSensitivityViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULightSensitivityViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightSensitivityViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightSensitivityViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightSensitivityViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightSensitivityViewInterface, 2471013853);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<ULightSensitivityViewInterface>()
	{
		return ULightSensitivityViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightSensitivityViewInterface(Z_Construct_UClass_ULightSensitivityViewInterface, &ULightSensitivityViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ULightSensitivityViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightSensitivityViewInterface);
	static FName NAME_ULightSensitivityViewInterface_StartFadeOut = FName(TEXT("StartFadeOut"));
	void ILightSensitivityViewInterface::Execute_StartFadeOut(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULightSensitivityViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_ULightSensitivityViewInterface_StartFadeOut);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ILightSensitivityViewInterface*)(O->GetNativeInterfaceAddress(ULightSensitivityViewInterface::StaticClass())))
		{
			I->StartFadeOut_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
