// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerNameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerNameWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerNameWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerNameWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCorePlayerNameWidget::execSetPlayerName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_playerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerName(Z_Param_Out_playerName);
		P_NATIVE_END;
	}
	void UCorePlayerNameWidget::StaticRegisterNativesUCorePlayerNameWidget()
	{
		UClass* Class = UCorePlayerNameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerName", &UCorePlayerNameWidget::execSetPlayerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics
	{
		struct CorePlayerNameWidget_eventSetPlayerName_Parms
		{
			FText playerName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerNameWidget_eventSetPlayerName_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::NewProp_playerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::NewProp_playerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerNameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerNameWidget, nullptr, "SetPlayerName", nullptr, nullptr, sizeof(CorePlayerNameWidget_eventSetPlayerName_Parms), Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerNameWidget_NoRegister()
	{
		return UCorePlayerNameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerNameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNameTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerNameTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerNameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerNameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerNameWidget_SetPlayerName, "SetPlayerName" }, // 3345000755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerNameWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePlayerNameWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerNameWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerNameWidget_Statics::NewProp_PlayerNameTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerNameWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerNameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerNameWidget_Statics::NewProp_PlayerNameTB = { "PlayerNameTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerNameWidget, PlayerNameTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerNameWidget_Statics::NewProp_PlayerNameTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerNameWidget_Statics::NewProp_PlayerNameTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerNameWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerNameWidget_Statics::NewProp_PlayerNameTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerNameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerNameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerNameWidget_Statics::ClassParams = {
		&UCorePlayerNameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerNameWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerNameWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerNameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerNameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerNameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerNameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerNameWidget, 823510464);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerNameWidget>()
	{
		return UCorePlayerNameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerNameWidget(Z_Construct_UClass_UCorePlayerNameWidget, &UCorePlayerNameWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerNameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerNameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
