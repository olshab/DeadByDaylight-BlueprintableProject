// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreLockedOverlayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreLockedOverlayWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreLockedOverlayWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreLockedOverlayWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static FName NAME_UCoreLockedOverlayWidget_SetIsLocked = FName(TEXT("SetIsLocked"));
	void UCoreLockedOverlayWidget::SetIsLocked(bool isLocked, bool useAnimation)
	{
		CoreLockedOverlayWidget_eventSetIsLocked_Parms Parms;
		Parms.isLocked=isLocked ? true : false;
		Parms.useAnimation=useAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreLockedOverlayWidget_SetIsLocked),&Parms);
	}
	void UCoreLockedOverlayWidget::StaticRegisterNativesUCoreLockedOverlayWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics
	{
		static void NewProp_isLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocked;
		static void NewProp_useAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_isLocked_SetBit(void* Obj)
	{
		((CoreLockedOverlayWidget_eventSetIsLocked_Parms*)Obj)->isLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreLockedOverlayWidget_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_useAnimation_SetBit(void* Obj)
	{
		((CoreLockedOverlayWidget_eventSetIsLocked_Parms*)Obj)->useAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_useAnimation = { "useAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreLockedOverlayWidget_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_useAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_isLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::NewProp_useAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreLockedOverlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLockedOverlayWidget, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(CoreLockedOverlayWidget_eventSetIsLocked_Parms), Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreLockedOverlayWidget_NoRegister()
	{
		return UCoreLockedOverlayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreLockedOverlayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreLockedOverlayWidget_SetIsLocked, "SetIsLocked" }, // 1818248451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreLockedOverlayWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreLockedOverlayWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreLockedOverlayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::ClassParams = {
		&UCoreLockedOverlayWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreLockedOverlayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreLockedOverlayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreLockedOverlayWidget, 795230244);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreLockedOverlayWidget>()
	{
		return UCoreLockedOverlayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreLockedOverlayWidget(Z_Construct_UClass_UCoreLockedOverlayWidget, &UCoreLockedOverlayWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreLockedOverlayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreLockedOverlayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
