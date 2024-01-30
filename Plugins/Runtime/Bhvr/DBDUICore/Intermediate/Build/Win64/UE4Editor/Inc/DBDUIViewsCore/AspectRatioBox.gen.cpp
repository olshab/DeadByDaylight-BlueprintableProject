// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/AspectRatioBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAspectRatioBox() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UAspectRatioBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UAspectRatioBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	DEFINE_FUNCTION(UAspectRatioBox::execClearAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAspectRatioBox::execSetAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAspectRatio(Z_Param_inAspectRatio);
		P_NATIVE_END;
	}
	void UAspectRatioBox::StaticRegisterNativesUAspectRatioBox()
	{
		UClass* Class = UAspectRatioBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAspectRatio", &UAspectRatioBox::execClearAspectRatio },
			{ "SetAspectRatio", &UAspectRatioBox::execSetAspectRatio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AspectRatioBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAspectRatioBox, nullptr, "ClearAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics
	{
		struct AspectRatioBox_eventSetAspectRatio_Parms
		{
			float inAspectRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAspectRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::NewProp_inAspectRatio = { "inAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AspectRatioBox_eventSetAspectRatio_Parms, inAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::NewProp_inAspectRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AspectRatioBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAspectRatioBox, nullptr, "SetAspectRatio", nullptr, nullptr, sizeof(AspectRatioBox_eventSetAspectRatio_Parms), Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAspectRatioBox_NoRegister()
	{
		return UAspectRatioBox::StaticClass();
	}
	struct Z_Construct_UClass_UAspectRatioBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAspectRatioOverridden_MetaData[];
#endif
		static void NewProp_IsAspectRatioOverridden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAspectRatioOverridden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAspectRatioBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAspectRatioBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAspectRatioBox_ClearAspectRatio, "ClearAspectRatio" }, // 2346136289
		{ &Z_Construct_UFunction_UAspectRatioBox_SetAspectRatio, "SetAspectRatio" }, // 2364861645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAspectRatioBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AspectRatioBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AspectRatioBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "AspectRatioBox" },
		{ "ModuleRelativePath", "Public/AspectRatioBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAspectRatioBox, AspectRatio), METADATA_PARAMS(Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden_MetaData[] = {
		{ "Category", "AspectRatioBox" },
		{ "ModuleRelativePath", "Public/AspectRatioBox.h" },
	};
#endif
	void Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden_SetBit(void* Obj)
	{
		((UAspectRatioBox*)Obj)->IsAspectRatioOverridden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden = { "IsAspectRatioOverridden", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAspectRatioBox), &Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAspectRatioBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAspectRatioBox_Statics::NewProp_IsAspectRatioOverridden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAspectRatioBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAspectRatioBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAspectRatioBox_Statics::ClassParams = {
		&UAspectRatioBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAspectRatioBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAspectRatioBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAspectRatioBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAspectRatioBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAspectRatioBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAspectRatioBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAspectRatioBox, 2401224753);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UAspectRatioBox>()
	{
		return UAspectRatioBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAspectRatioBox(Z_Construct_UClass_UAspectRatioBox, &UAspectRatioBox::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UAspectRatioBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAspectRatioBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
