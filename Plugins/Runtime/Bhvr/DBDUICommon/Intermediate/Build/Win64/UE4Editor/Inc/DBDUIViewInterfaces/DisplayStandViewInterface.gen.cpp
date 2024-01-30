// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/DisplayStandViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStandViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UDisplayStandViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UDisplayStandViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayStandViewData();
// End Cross Module References
	DEFINE_FUNCTION(IDisplayStandViewInterface::execSetDragZone)
	{
		P_GET_STRUCT_REF(FDisplayStandViewData,Z_Param_Out_layoutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDragZone_Implementation(Z_Param_Out_layoutData);
		P_NATIVE_END;
	}
	void IDisplayStandViewInterface::SetDragZone(FDisplayStandViewData const& layoutData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDragZone instead.");
	}
	void UDisplayStandViewInterface::StaticRegisterNativesUDisplayStandViewInterface()
	{
		UClass* Class = UDisplayStandViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDragZone", &IDisplayStandViewInterface::execSetDragZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_layoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_layoutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::NewProp_layoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::NewProp_layoutData = { "layoutData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisplayStandViewInterface_eventSetDragZone_Parms, layoutData), Z_Construct_UScriptStruct_FDisplayStandViewData, METADATA_PARAMS(Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::NewProp_layoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::NewProp_layoutData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::NewProp_layoutData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayStandViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayStandViewInterface, nullptr, "SetDragZone", nullptr, nullptr, sizeof(DisplayStandViewInterface_eventSetDragZone_Parms), Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDisplayStandViewInterface_NoRegister()
	{
		return UDisplayStandViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayStandViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayStandViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayStandViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayStandViewInterface_SetDragZone, "SetDragZone" }, // 3900833418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayStandViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayStandViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDisplayStandViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisplayStandViewInterface_Statics::ClassParams = {
		&UDisplayStandViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayStandViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayStandViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisplayStandViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisplayStandViewInterface, 890964695);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UDisplayStandViewInterface>()
	{
		return UDisplayStandViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisplayStandViewInterface(Z_Construct_UClass_UDisplayStandViewInterface, &UDisplayStandViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UDisplayStandViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayStandViewInterface);
	static FName NAME_UDisplayStandViewInterface_SetDragZone = FName(TEXT("SetDragZone"));
	void IDisplayStandViewInterface::Execute_SetDragZone(UObject* O, FDisplayStandViewData const& layoutData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDisplayStandViewInterface::StaticClass()));
		DisplayStandViewInterface_eventSetDragZone_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDisplayStandViewInterface_SetDragZone);
		if (Func)
		{
			Parms.layoutData=layoutData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDisplayStandViewInterface*)(O->GetNativeInterfaceAddress(UDisplayStandViewInterface::StaticClass())))
		{
			I->SetDragZone_Implementation(layoutData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
