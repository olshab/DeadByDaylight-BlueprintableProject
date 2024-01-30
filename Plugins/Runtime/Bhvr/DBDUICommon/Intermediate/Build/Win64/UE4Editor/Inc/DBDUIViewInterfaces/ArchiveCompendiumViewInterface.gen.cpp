// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveCompendiumViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveCompendiumViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCompendiumButtonData();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveCompendiumViewInterface::execSetPastTomesViewData)
	{
		P_GET_TARRAY_REF(FCompendiumButtonData,Z_Param_Out_pastStoryButtonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPastTomesViewData_Implementation(Z_Param_Out_pastStoryButtonData);
		P_NATIVE_END;
	}
	void IArchiveCompendiumViewInterface::SetPastTomesViewData(TArray<FCompendiumButtonData> const& pastStoryButtonData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPastTomesViewData instead.");
	}
	void UArchiveCompendiumViewInterface::StaticRegisterNativesUArchiveCompendiumViewInterface()
	{
		UClass* Class = UArchiveCompendiumViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPastTomesViewData", &IArchiveCompendiumViewInterface::execSetPastTomesViewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pastStoryButtonData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pastStoryButtonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pastStoryButtonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData_Inner = { "pastStoryButtonData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCompendiumButtonData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData = { "pastStoryButtonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveCompendiumViewInterface_eventSetPastTomesViewData_Parms, pastStoryButtonData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::NewProp_pastStoryButtonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveCompendiumViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveCompendiumViewInterface, nullptr, "SetPastTomesViewData", nullptr, nullptr, sizeof(ArchiveCompendiumViewInterface_eventSetPastTomesViewData_Parms), Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister()
	{
		return UArchiveCompendiumViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveCompendiumViewInterface_SetPastTomesViewData, "SetPastTomesViewData" }, // 896087635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveCompendiumViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::ClassParams = {
		&UArchiveCompendiumViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveCompendiumViewInterface, 1813197495);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveCompendiumViewInterface>()
	{
		return UArchiveCompendiumViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveCompendiumViewInterface(Z_Construct_UClass_UArchiveCompendiumViewInterface, &UArchiveCompendiumViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveCompendiumViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveCompendiumViewInterface);
	static FName NAME_UArchiveCompendiumViewInterface_SetPastTomesViewData = FName(TEXT("SetPastTomesViewData"));
	void IArchiveCompendiumViewInterface::Execute_SetPastTomesViewData(UObject* O, TArray<FCompendiumButtonData> const& pastStoryButtonData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveCompendiumViewInterface::StaticClass()));
		ArchiveCompendiumViewInterface_eventSetPastTomesViewData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveCompendiumViewInterface_SetPastTomesViewData);
		if (Func)
		{
			Parms.pastStoryButtonData=pastStoryButtonData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveCompendiumViewInterface*)(O->GetNativeInterfaceAddress(UArchiveCompendiumViewInterface::StaticClass())))
		{
			I->SetPastTomesViewData_Implementation(pastStoryButtonData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
