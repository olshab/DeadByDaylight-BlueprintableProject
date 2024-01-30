// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreDisplayStandWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreDisplayStandWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreDisplayStandWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreDisplayStandWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_DisplayStandRotationEvent__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDragZone_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UDisplayStandViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreDisplayStandWidget::execOnDrag)
	{
		P_GET_STRUCT(FVector2D,Z_Param_cursorDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDrag(Z_Param_cursorDelta);
		P_NATIVE_END;
	}
	void UCoreDisplayStandWidget::StaticRegisterNativesUCoreDisplayStandWidget()
	{
		UClass* Class = UCoreDisplayStandWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDrag", &UCoreDisplayStandWidget::execOnDrag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics
	{
		struct CoreDisplayStandWidget_eventOnDrag_Parms
		{
			FVector2D cursorDelta;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cursorDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::NewProp_cursorDelta = { "cursorDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreDisplayStandWidget_eventOnDrag_Parms, cursorDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::NewProp_cursorDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreDisplayStandWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreDisplayStandWidget, nullptr, "OnDrag", nullptr, nullptr, sizeof(CoreDisplayStandWidget_eventOnDrag_Parms), Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreDisplayStandWidget_NoRegister()
	{
		return UCoreDisplayStandWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreDisplayStandWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayStandRotationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__displayStandRotationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreDisplayStandWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreDisplayStandWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreDisplayStandWidget_OnDrag, "OnDrag" }, // 2538216932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreDisplayStandWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreDisplayStandWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreDisplayStandWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp__displayStandRotationDelegate_MetaData[] = {
		{ "Category", "CoreDisplayStandWidget" },
		{ "ModuleRelativePath", "Public/CoreDisplayStandWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp__displayStandRotationDelegate = { "_displayStandRotationDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreDisplayStandWidget, _displayStandRotationDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_DisplayStandRotationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp__displayStandRotationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp__displayStandRotationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp_DragZone_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreDisplayStandWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreDisplayStandWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp_DragZone = { "DragZone", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreDisplayStandWidget, DragZone), Z_Construct_UClass_UDragZone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp_DragZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp_DragZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreDisplayStandWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp__displayStandRotationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreDisplayStandWidget_Statics::NewProp_DragZone,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreDisplayStandWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisplayStandViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreDisplayStandWidget, IDisplayStandViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreDisplayStandWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreDisplayStandWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreDisplayStandWidget_Statics::ClassParams = {
		&UCoreDisplayStandWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreDisplayStandWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreDisplayStandWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreDisplayStandWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreDisplayStandWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreDisplayStandWidget, 3442131667);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreDisplayStandWidget>()
	{
		return UCoreDisplayStandWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreDisplayStandWidget(Z_Construct_UClass_UCoreDisplayStandWidget, &UCoreDisplayStandWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreDisplayStandWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreDisplayStandWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
