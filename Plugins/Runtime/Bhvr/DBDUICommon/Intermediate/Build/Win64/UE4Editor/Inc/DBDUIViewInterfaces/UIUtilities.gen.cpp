// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/UIUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIUtilities() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UUIUtilities_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UUIUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(UUIUtilities::execConvertArchiveCurrentAndMaxProgressionInPercentage)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outCurrentProgression);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outMaxProgression);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIUtilities::ConvertArchiveCurrentAndMaxProgressionInPercentage(Z_Param_Out_outCurrentProgression,Z_Param_Out_outMaxProgression);
		P_NATIVE_END;
	}
	void UUIUtilities::StaticRegisterNativesUUIUtilities()
	{
		UClass* Class = UUIUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertArchiveCurrentAndMaxProgressionInPercentage", &UUIUtilities::execConvertArchiveCurrentAndMaxProgressionInPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics
	{
		struct UIUtilities_eventConvertArchiveCurrentAndMaxProgressionInPercentage_Parms
		{
			int32 outCurrentProgression;
			int32 outMaxProgression;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outCurrentProgression;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outMaxProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::NewProp_outCurrentProgression = { "outCurrentProgression", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIUtilities_eventConvertArchiveCurrentAndMaxProgressionInPercentage_Parms, outCurrentProgression), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::NewProp_outMaxProgression = { "outMaxProgression", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIUtilities_eventConvertArchiveCurrentAndMaxProgressionInPercentage_Parms, outMaxProgression), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::NewProp_outCurrentProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::NewProp_outMaxProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIUtilities, nullptr, "ConvertArchiveCurrentAndMaxProgressionInPercentage", nullptr, nullptr, sizeof(UIUtilities_eventConvertArchiveCurrentAndMaxProgressionInPercentage_Parms), Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIUtilities_NoRegister()
	{
		return UUIUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UUIUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage, "ConvertArchiveCurrentAndMaxProgressionInPercentage" }, // 3486508538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIUtilities_Statics::ClassParams = {
		&UUIUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIUtilities, 3973851713);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UUIUtilities>()
	{
		return UUIUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIUtilities(Z_Construct_UClass_UUIUtilities, &UUIUtilities::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UUIUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
