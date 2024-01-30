// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreFeaturedCustomizationItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreFeaturedCustomizationItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemWidget::execUpdatePosition)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePosition(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemWidget::execUpdateSize)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSize(Z_Param_tween);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData = FName(TEXT("SetCustomizationData"));
	void UCoreStoreFeaturedCustomizationItemWidget::SetCustomizationData(UStoreCustomizationItemViewData* specialOffersData)
	{
		CoreStoreFeaturedCustomizationItemWidget_eventSetCustomizationData_Parms Parms;
		Parms.specialOffersData=specialOffersData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData),&Parms);
	}
	void UCoreStoreFeaturedCustomizationItemWidget::StaticRegisterNativesUCoreStoreFeaturedCustomizationItemWidget()
	{
		UClass* Class = UCoreStoreFeaturedCustomizationItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdatePosition", &UCoreStoreFeaturedCustomizationItemWidget::execUpdatePosition },
			{ "UpdateSize", &UCoreStoreFeaturedCustomizationItemWidget::execUpdateSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_specialOffersData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::NewProp_specialOffersData = { "specialOffersData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCustomizationItemWidget_eventSetCustomizationData_Parms, specialOffersData), Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::NewProp_specialOffersData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget, nullptr, "SetCustomizationData", nullptr, nullptr, sizeof(CoreStoreFeaturedCustomizationItemWidget_eventSetCustomizationData_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics
	{
		struct CoreStoreFeaturedCustomizationItemWidget_eventUpdatePosition_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCustomizationItemWidget_eventUpdatePosition_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget, nullptr, "UpdatePosition", nullptr, nullptr, sizeof(CoreStoreFeaturedCustomizationItemWidget_eventUpdatePosition_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics
	{
		struct CoreStoreFeaturedCustomizationItemWidget_eventUpdateSize_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCustomizationItemWidget_eventUpdateSize_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget, nullptr, "UpdateSize", nullptr, nullptr, sizeof(CoreStoreFeaturedCustomizationItemWidget_eventUpdateSize_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister()
	{
		return UCoreStoreFeaturedCustomizationItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_SetCustomizationData, "SetCustomizationData" }, // 401362520
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdatePosition, "UpdatePosition" }, // 1530886050
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemWidget_UpdateSize, "UpdateSize" }, // 1929426226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreFeaturedCustomizationItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreFeaturedCustomizationItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::ClassParams = {
		&UCoreStoreFeaturedCustomizationItemWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreFeaturedCustomizationItemWidget, 3024705562);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreFeaturedCustomizationItemWidget>()
	{
		return UCoreStoreFeaturedCustomizationItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreFeaturedCustomizationItemWidget(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget, &UCoreStoreFeaturedCustomizationItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreFeaturedCustomizationItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreFeaturedCustomizationItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
