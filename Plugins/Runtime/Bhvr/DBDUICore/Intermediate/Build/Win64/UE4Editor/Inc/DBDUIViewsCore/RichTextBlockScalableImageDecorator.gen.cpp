// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/RichTextBlockScalableImageDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockScalableImageDecorator() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_URichTextBlockScalableImageDecorator_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_URichTextBlockScalableImageDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	DEFINE_FUNCTION(URichTextBlockScalableImageDecorator::execResetTintColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTintColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlockScalableImageDecorator::execSetTintColor)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_tintColorNew);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTintColor(Z_Param_tintColorNew);
		P_NATIVE_END;
	}
	void URichTextBlockScalableImageDecorator::StaticRegisterNativesURichTextBlockScalableImageDecorator()
	{
		UClass* Class = URichTextBlockScalableImageDecorator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetTintColor", &URichTextBlockScalableImageDecorator::execResetTintColor },
			{ "SetTintColor", &URichTextBlockScalableImageDecorator::execSetTintColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RichTextBlockScalableImageDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlockScalableImageDecorator, nullptr, "ResetTintColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics
	{
		struct RichTextBlockScalableImageDecorator_eventSetTintColor_Parms
		{
			FSlateColor tintColorNew;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tintColorNew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::NewProp_tintColorNew = { "tintColorNew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlockScalableImageDecorator_eventSetTintColor_Parms, tintColorNew), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::NewProp_tintColorNew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RichTextBlockScalableImageDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlockScalableImageDecorator, nullptr, "SetTintColor", nullptr, nullptr, sizeof(RichTextBlockScalableImageDecorator_eventSetTintColor_Parms), Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URichTextBlockScalableImageDecorator_NoRegister()
	{
		return URichTextBlockScalableImageDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockImageDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichTextBlockScalableImageDecorator_ResetTintColor, "ResetTintColor" }, // 3954778963
		{ &Z_Construct_UFunction_URichTextBlockScalableImageDecorator_SetTintColor, "SetTintColor" }, // 2567492465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RichTextBlockScalableImageDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RichTextBlockScalableImageDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::NewProp_TintColor_MetaData[] = {
		{ "Category", "RichTextBlockScalableImageDecorator" },
		{ "ModuleRelativePath", "Public/RichTextBlockScalableImageDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::NewProp_TintColor = { "TintColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlockScalableImageDecorator, TintColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::NewProp_TintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::NewProp_TintColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::NewProp_TintColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockScalableImageDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::ClassParams = {
		&URichTextBlockScalableImageDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlockScalableImageDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextBlockScalableImageDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextBlockScalableImageDecorator, 1835226298);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<URichTextBlockScalableImageDecorator>()
	{
		return URichTextBlockScalableImageDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlockScalableImageDecorator(Z_Construct_UClass_URichTextBlockScalableImageDecorator, &URichTextBlockScalableImageDecorator::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("URichTextBlockScalableImageDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockScalableImageDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
