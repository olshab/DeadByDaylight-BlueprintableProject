// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerCardViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCardViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerCardViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerCardViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCardViewData();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerCardViewInterface::execSetData)
	{
		P_GET_STRUCT(FPlayerCardViewData,Z_Param_playerCardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_playerCardData);
		P_NATIVE_END;
	}
	void IPlayerCardViewInterface::SetData(const FPlayerCardViewData playerCardData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UPlayerCardViewInterface::StaticRegisterNativesUPlayerCardViewInterface()
	{
		UClass* Class = UPlayerCardViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &IPlayerCardViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerCardData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::NewProp_playerCardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::NewProp_playerCardData = { "playerCardData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCardViewInterface_eventSetData_Parms, playerCardData), Z_Construct_UScriptStruct_FPlayerCardViewData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::NewProp_playerCardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::NewProp_playerCardData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::NewProp_playerCardData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCardViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCardViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(PlayerCardViewInterface_eventSetData_Parms), Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCardViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCardViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerCardViewInterface_NoRegister()
	{
		return UPlayerCardViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCardViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCardViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCardViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCardViewInterface_SetData, "SetData" }, // 2876890726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCardViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerCardViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCardViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerCardViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCardViewInterface_Statics::ClassParams = {
		&UPlayerCardViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCardViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCardViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCardViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCardViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCardViewInterface, 3048064786);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPlayerCardViewInterface>()
	{
		return UPlayerCardViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCardViewInterface(Z_Construct_UClass_UPlayerCardViewInterface, &UPlayerCardViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPlayerCardViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCardViewInterface);
	static FName NAME_UPlayerCardViewInterface_SetData = FName(TEXT("SetData"));
	void IPlayerCardViewInterface::Execute_SetData(UObject* O, const FPlayerCardViewData playerCardData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCardViewInterface::StaticClass()));
		PlayerCardViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCardViewInterface_SetData);
		if (Func)
		{
			Parms.playerCardData=playerCardData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCardViewInterface*)(O->GetNativeInterfaceAddress(UPlayerCardViewInterface::StaticClass())))
		{
			I->SetData_Implementation(playerCardData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
