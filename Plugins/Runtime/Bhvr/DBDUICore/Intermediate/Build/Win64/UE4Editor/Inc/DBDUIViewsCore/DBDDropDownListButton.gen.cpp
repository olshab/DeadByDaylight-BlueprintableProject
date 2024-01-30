// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDDropDownListButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDropDownListButton() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDDropDownListButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDDropDownListButton();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static FName NAME_UDBDDropDownListButton_ToggleDropDownArrow = FName(TEXT("ToggleDropDownArrow"));
	void UDBDDropDownListButton::ToggleDropDownArrow(bool showArrow)
	{
		DBDDropDownListButton_eventToggleDropDownArrow_Parms Parms;
		Parms.showArrow=showArrow ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDBDDropDownListButton_ToggleDropDownArrow),&Parms);
	}
	void UDBDDropDownListButton::StaticRegisterNativesUDBDDropDownListButton()
	{
	}
	struct Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics
	{
		static void NewProp_showArrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showArrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::NewProp_showArrow_SetBit(void* Obj)
	{
		((DBDDropDownListButton_eventToggleDropDownArrow_Parms*)Obj)->showArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::NewProp_showArrow = { "showArrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDropDownListButton_eventToggleDropDownArrow_Parms), &Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::NewProp_showArrow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::NewProp_showArrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListButton, nullptr, "ToggleDropDownArrow", nullptr, nullptr, sizeof(DBDDropDownListButton_eventToggleDropDownArrow_Parms), Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDDropDownListButton_NoRegister()
	{
		return UDBDDropDownListButton::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDropDownListButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDropDownListButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDDropDownListButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDDropDownListButton_ToggleDropDownArrow, "ToggleDropDownArrow" }, // 3284852220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDropDownListButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDDropDownListButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDDropDownListButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDropDownListButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDropDownListButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDropDownListButton_Statics::ClassParams = {
		&UDBDDropDownListButton::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDDropDownListButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDropDownListButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDropDownListButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDropDownListButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDropDownListButton, 909287053);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDDropDownListButton>()
	{
		return UDBDDropDownListButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDropDownListButton(Z_Construct_UClass_UDBDDropDownListButton, &UDBDDropDownListButton::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDDropDownListButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDropDownListButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
