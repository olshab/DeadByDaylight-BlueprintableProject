// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveVignetteCinematicButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveVignetteCinematicButton() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicButton();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static FName NAME_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled = FName(TEXT("SetIsForceDisabled"));
	void UCoreArchiveVignetteCinematicButton::SetIsForceDisabled(bool isForceDisabledNew)
	{
		CoreArchiveVignetteCinematicButton_eventSetIsForceDisabled_Parms Parms;
		Parms.isForceDisabledNew=isForceDisabledNew ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled),&Parms);
	}
	static FName NAME_UCoreArchiveVignetteCinematicButton_UnlockCinematic = FName(TEXT("UnlockCinematic"));
	void UCoreArchiveVignetteCinematicButton::UnlockCinematic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveVignetteCinematicButton_UnlockCinematic),NULL);
	}
	void UCoreArchiveVignetteCinematicButton::StaticRegisterNativesUCoreArchiveVignetteCinematicButton()
	{
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics
	{
		static void NewProp_isForceDisabledNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isForceDisabledNew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::NewProp_isForceDisabledNew_SetBit(void* Obj)
	{
		((CoreArchiveVignetteCinematicButton_eventSetIsForceDisabled_Parms*)Obj)->isForceDisabledNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::NewProp_isForceDisabledNew = { "isForceDisabledNew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteCinematicButton_eventSetIsForceDisabled_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::NewProp_isForceDisabledNew_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::NewProp_isForceDisabledNew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteCinematicButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteCinematicButton, nullptr, "SetIsForceDisabled", nullptr, nullptr, sizeof(CoreArchiveVignetteCinematicButton_eventSetIsForceDisabled_Parms), Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteCinematicButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteCinematicButton, nullptr, "UnlockCinematic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_NoRegister()
	{
		return UCoreArchiveVignetteCinematicButton::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsForceDisabled_MetaData[];
#endif
		static void NewProp_IsForceDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsForceDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_SetIsForceDisabled, "SetIsForceDisabled" }, // 984041359
		{ &Z_Construct_UFunction_UCoreArchiveVignetteCinematicButton_UnlockCinematic, "UnlockCinematic" }, // 1228063264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveVignetteCinematicButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteCinematicButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled_MetaData[] = {
		{ "Category", "CoreArchiveVignetteCinematicButton" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteCinematicButton.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled_SetBit(void* Obj)
	{
		((UCoreArchiveVignetteCinematicButton*)Obj)->IsForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled = { "IsForceDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveVignetteCinematicButton), &Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::NewProp_IsForceDisabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveVignetteCinematicButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::ClassParams = {
		&UCoreArchiveVignetteCinematicButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveVignetteCinematicButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveVignetteCinematicButton, 2472906696);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveVignetteCinematicButton>()
	{
		return UCoreArchiveVignetteCinematicButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveVignetteCinematicButton(Z_Construct_UClass_UCoreArchiveVignetteCinematicButton, &UCoreArchiveVignetteCinematicButton::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveVignetteCinematicButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveVignetteCinematicButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
