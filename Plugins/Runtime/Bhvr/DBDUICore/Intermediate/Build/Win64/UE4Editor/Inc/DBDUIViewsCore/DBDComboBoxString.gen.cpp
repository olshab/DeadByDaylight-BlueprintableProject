// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDComboBoxString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDComboBoxString() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDComboBoxString_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDComboBoxString();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	DEFINE_FUNCTION(UDBDComboBoxString::execSetData)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OptionsList);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_OptionsList,Z_Param_DefaultOption);
		P_NATIVE_END;
	}
	void UDBDComboBoxString::StaticRegisterNativesUDBDComboBoxString()
	{
		UClass* Class = UDBDComboBoxString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UDBDComboBoxString::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics
	{
		struct DBDComboBoxString_eventSetData_Parms
		{
			TArray<FString> OptionsList;
			FString DefaultOption;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptionsList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList_Inner = { "OptionsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList = { "OptionsList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDComboBoxString_eventSetData_Parms, OptionsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_DefaultOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_DefaultOption = { "DefaultOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDComboBoxString_eventSetData_Parms, DefaultOption), METADATA_PARAMS(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_DefaultOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_DefaultOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_OptionsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::NewProp_DefaultOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDComboBoxString, nullptr, "SetData", nullptr, nullptr, sizeof(DBDComboBoxString_eventSetData_Parms), Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDComboBoxString_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDComboBoxString_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDComboBoxString_NoRegister()
	{
		return UDBDComboBoxString::StaticClass();
	}
	struct Z_Construct_UClass_UDBDComboBoxString_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDComboBoxString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboBoxString,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDComboBoxString_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDComboBoxString_SetData, "SetData" }, // 348599721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDComboBoxString_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDComboBoxString.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDComboBoxString.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDComboBoxString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDComboBoxString>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDComboBoxString_Statics::ClassParams = {
		&UDBDComboBoxString::StaticClass,
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
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDComboBoxString_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDComboBoxString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDComboBoxString()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDComboBoxString_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDComboBoxString, 1060652027);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDComboBoxString>()
	{
		return UDBDComboBoxString::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDComboBoxString(Z_Construct_UClass_UDBDComboBoxString, &UDBDComboBoxString::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDComboBoxString"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDComboBoxString);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
