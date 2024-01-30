// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveVignetteCinematicContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveVignetteCinematicContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveVignetteCinematicContainerWidget::execUnlockCinematics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockCinematics();
		P_NATIVE_END;
	}
	void UCoreArchiveVignetteCinematicContainerWidget::StaticRegisterNativesUCoreArchiveVignetteCinematicContainerWidget()
	{
		UClass* Class = UCoreArchiveVignetteCinematicContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UnlockCinematics", &UCoreArchiveVignetteCinematicContainerWidget::execUnlockCinematics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteCinematicContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget, nullptr, "UnlockCinematics", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_NoRegister()
	{
		return UCoreArchiveVignetteCinematicContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContainerWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics, "UnlockCinematics" }, // 3815426446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveVignetteCinematicContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteCinematicContainerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveVignetteCinematicContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::ClassParams = {
		&UCoreArchiveVignetteCinematicContainerWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveVignetteCinematicContainerWidget, 1535533403);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveVignetteCinematicContainerWidget>()
	{
		return UCoreArchiveVignetteCinematicContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveVignetteCinematicContainerWidget(Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget, &UCoreArchiveVignetteCinematicContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveVignetteCinematicContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveVignetteCinematicContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
