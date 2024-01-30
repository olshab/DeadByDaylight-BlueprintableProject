// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveEditorViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveEditorViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveEditorViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveEditorViewInterface::execDisplayEditorSaving)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayEditorSaving_Implementation(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveEditorViewInterface::execInitEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEditor_Implementation();
		P_NATIVE_END;
	}
	void IArchiveEditorViewInterface::DisplayEditorSaving(const FString& path)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DisplayEditorSaving instead.");
	}
	void IArchiveEditorViewInterface::InitEditor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitEditor instead.");
	}
	void UArchiveEditorViewInterface::StaticRegisterNativesUArchiveEditorViewInterface()
	{
		UClass* Class = UArchiveEditorViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayEditorSaving", &IArchiveEditorViewInterface::execDisplayEditorSaving },
			{ "InitEditor", &IArchiveEditorViewInterface::execInitEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveEditorViewInterface_eventDisplayEditorSaving_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveEditorViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveEditorViewInterface, nullptr, "DisplayEditorSaving", nullptr, nullptr, sizeof(ArchiveEditorViewInterface_eventDisplayEditorSaving_Parms), Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveEditorViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveEditorViewInterface, nullptr, "InitEditor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister()
	{
		return UArchiveEditorViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveEditorViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveEditorViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveEditorViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveEditorViewInterface_DisplayEditorSaving, "DisplayEditorSaving" }, // 99252076
		{ &Z_Construct_UFunction_UArchiveEditorViewInterface_InitEditor, "InitEditor" }, // 556279729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveEditorViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveEditorViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveEditorViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveEditorViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveEditorViewInterface_Statics::ClassParams = {
		&UArchiveEditorViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveEditorViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveEditorViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveEditorViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveEditorViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveEditorViewInterface, 1676201737);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveEditorViewInterface>()
	{
		return UArchiveEditorViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveEditorViewInterface(Z_Construct_UClass_UArchiveEditorViewInterface, &UArchiveEditorViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveEditorViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveEditorViewInterface);
	static FName NAME_UArchiveEditorViewInterface_DisplayEditorSaving = FName(TEXT("DisplayEditorSaving"));
	void IArchiveEditorViewInterface::Execute_DisplayEditorSaving(UObject* O, const FString& path)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveEditorViewInterface::StaticClass()));
		ArchiveEditorViewInterface_eventDisplayEditorSaving_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveEditorViewInterface_DisplayEditorSaving);
		if (Func)
		{
			Parms.path=path;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveEditorViewInterface*)(O->GetNativeInterfaceAddress(UArchiveEditorViewInterface::StaticClass())))
		{
			I->DisplayEditorSaving_Implementation(path);
		}
	}
	static FName NAME_UArchiveEditorViewInterface_InitEditor = FName(TEXT("InitEditor"));
	void IArchiveEditorViewInterface::Execute_InitEditor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveEditorViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveEditorViewInterface_InitEditor);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveEditorViewInterface*)(O->GetNativeInterfaceAddress(UArchiveEditorViewInterface::StaticClass())))
		{
			I->InitEditor_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
