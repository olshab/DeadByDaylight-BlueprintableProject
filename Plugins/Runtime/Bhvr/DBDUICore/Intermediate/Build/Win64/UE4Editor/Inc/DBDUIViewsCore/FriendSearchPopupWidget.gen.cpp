// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/FriendSearchPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendSearchPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UFriendSearchPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UFriendSearchPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericTextInputPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UFriendItemWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UFriendSearchPopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFriendSearchPopupWidget::execOnFriendClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFriendClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	void UFriendSearchPopupWidget::StaticRegisterNativesUFriendSearchPopupWidget()
	{
		UClass* Class = UFriendSearchPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFriendClicked", &UFriendSearchPopupWidget::execOnFriendClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics
	{
		struct FriendSearchPopupWidget_eventOnFriendClicked_Parms
		{
			UCoreButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendSearchPopupWidget_eventOnFriendClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendSearchPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendSearchPopupWidget, nullptr, "OnFriendClicked", nullptr, nullptr, sizeof(FriendSearchPopupWidget_eventOnFriendClicked_Parms), Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFriendSearchPopupWidget_NoRegister()
	{
		return UFriendSearchPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFriendSearchPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendSearchWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendSearchWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendSearchScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendSearchScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FriendItemWidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__friendsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__friendsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__friendsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__friendsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendSearchPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriendSearchPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriendSearchPopupWidget_OnFriendClicked, "OnFriendClicked" }, // 1568722254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FriendSearchPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FriendSearchPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FriendSearchPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendSearchPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchWidget = { "FriendSearchWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendSearchPopupWidget, FriendSearchWidget), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FriendSearchPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendSearchPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchScrollBox = { "FriendSearchScrollBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendSearchPopupWidget, FriendSearchScrollBox), Z_Construct_UClass_UDBDScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendItemWidgetClass_MetaData[] = {
		{ "Category", "FriendSearchPopupWidget" },
		{ "ModuleRelativePath", "Public/FriendSearchPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendItemWidgetClass = { "FriendItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendSearchPopupWidget, FriendItemWidgetClass), Z_Construct_UClass_UFriendItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendItemWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_ValueProp = { "_friendsMap", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFriendItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_Key_KeyProp = { "_friendsMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_MetaData[] = {
		{ "Category", "FriendSearchPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FriendSearchPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap = { "_friendsMap", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriendSearchPopupWidget, _friendsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFriendSearchPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendSearchScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp_FriendItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriendSearchPopupWidget_Statics::NewProp__friendsMap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFriendSearchPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UFriendSearchPopupWidget, IFriendSearchPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendSearchPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriendSearchPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendSearchPopupWidget_Statics::ClassParams = {
		&UFriendSearchPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFriendSearchPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendSearchPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendSearchPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendSearchPopupWidget, 3224490361);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UFriendSearchPopupWidget>()
	{
		return UFriendSearchPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendSearchPopupWidget(Z_Construct_UClass_UFriendSearchPopupWidget, &UFriendSearchPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UFriendSearchPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendSearchPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
