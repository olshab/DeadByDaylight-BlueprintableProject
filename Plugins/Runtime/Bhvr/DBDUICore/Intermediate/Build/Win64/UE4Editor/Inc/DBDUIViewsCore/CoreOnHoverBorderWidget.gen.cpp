// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOnHoverBorderWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnHoverBorderWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FName NAME_UCoreOnHoverBorderWidget_BindToButton = FName(TEXT("BindToButton"));
	void UCoreOnHoverBorderWidget::BindToButton(UCoreButtonWidget* buttonToBindOn)
	{
		CoreOnHoverBorderWidget_eventBindToButton_Parms Parms;
		Parms.buttonToBindOn=buttonToBindOn;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnHoverBorderWidget_BindToButton),&Parms);
	}
	static FName NAME_UCoreOnHoverBorderWidget_PlayHoveredAnimation = FName(TEXT("PlayHoveredAnimation"));
	void UCoreOnHoverBorderWidget::PlayHoveredAnimation(bool playForward)
	{
		CoreOnHoverBorderWidget_eventPlayHoveredAnimation_Parms Parms;
		Parms.playForward=playForward ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnHoverBorderWidget_PlayHoveredAnimation),&Parms);
	}
	static FName NAME_UCoreOnHoverBorderWidget_PlayPressedAnimation = FName(TEXT("PlayPressedAnimation"));
	void UCoreOnHoverBorderWidget::PlayPressedAnimation(bool playForward)
	{
		CoreOnHoverBorderWidget_eventPlayPressedAnimation_Parms Parms;
		Parms.playForward=playForward ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnHoverBorderWidget_PlayPressedAnimation),&Parms);
	}
	static FName NAME_UCoreOnHoverBorderWidget_UnbindFromButton = FName(TEXT("UnbindFromButton"));
	void UCoreOnHoverBorderWidget::UnbindFromButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnHoverBorderWidget_UnbindFromButton),NULL);
	}
	static FName NAME_UCoreOnHoverBorderWidget_UpdateColors = FName(TEXT("UpdateColors"));
	void UCoreOnHoverBorderWidget::UpdateColors(FLinearColor const& progressBarColor, FLinearColor const& backgroundColor)
	{
		CoreOnHoverBorderWidget_eventUpdateColors_Parms Parms;
		Parms.progressBarColor=progressBarColor;
		Parms.backgroundColor=backgroundColor;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnHoverBorderWidget_UpdateColors),&Parms);
	}
	void UCoreOnHoverBorderWidget::StaticRegisterNativesUCoreOnHoverBorderWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonToBindOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonToBindOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::NewProp_buttonToBindOn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::NewProp_buttonToBindOn = { "buttonToBindOn", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnHoverBorderWidget_eventBindToButton_Parms, buttonToBindOn), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::NewProp_buttonToBindOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::NewProp_buttonToBindOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::NewProp_buttonToBindOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnHoverBorderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnHoverBorderWidget, nullptr, "BindToButton", nullptr, nullptr, sizeof(CoreOnHoverBorderWidget_eventBindToButton_Parms), Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics
	{
		static void NewProp_playForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playForward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::NewProp_playForward_SetBit(void* Obj)
	{
		((CoreOnHoverBorderWidget_eventPlayHoveredAnimation_Parms*)Obj)->playForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::NewProp_playForward = { "playForward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnHoverBorderWidget_eventPlayHoveredAnimation_Parms), &Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::NewProp_playForward_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::NewProp_playForward,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnHoverBorderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnHoverBorderWidget, nullptr, "PlayHoveredAnimation", nullptr, nullptr, sizeof(CoreOnHoverBorderWidget_eventPlayHoveredAnimation_Parms), Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics
	{
		static void NewProp_playForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playForward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::NewProp_playForward_SetBit(void* Obj)
	{
		((CoreOnHoverBorderWidget_eventPlayPressedAnimation_Parms*)Obj)->playForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::NewProp_playForward = { "playForward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnHoverBorderWidget_eventPlayPressedAnimation_Parms), &Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::NewProp_playForward_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::NewProp_playForward,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnHoverBorderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnHoverBorderWidget, nullptr, "PlayPressedAnimation", nullptr, nullptr, sizeof(CoreOnHoverBorderWidget_eventPlayPressedAnimation_Parms), Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnHoverBorderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnHoverBorderWidget, nullptr, "UnbindFromButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_progressBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_backgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_progressBarColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_progressBarColor = { "progressBarColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnHoverBorderWidget_eventUpdateColors_Parms, progressBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_progressBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_progressBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_backgroundColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_backgroundColor = { "backgroundColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnHoverBorderWidget_eventUpdateColors_Parms, backgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_backgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_backgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_progressBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::NewProp_backgroundColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnHoverBorderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnHoverBorderWidget, nullptr, "UpdateColors", nullptr, nullptr, sizeof(CoreOnHoverBorderWidget_eventUpdateColors_Parms), Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister()
	{
		return UCoreOnHoverBorderWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreOnHoverBorderWidget_BindToButton, "BindToButton" }, // 1304340962
		{ &Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayHoveredAnimation, "PlayHoveredAnimation" }, // 3624401615
		{ &Z_Construct_UFunction_UCoreOnHoverBorderWidget_PlayPressedAnimation, "PlayPressedAnimation" }, // 2293786738
		{ &Z_Construct_UFunction_UCoreOnHoverBorderWidget_UnbindFromButton, "UnbindFromButton" }, // 2174044790
		{ &Z_Construct_UFunction_UCoreOnHoverBorderWidget_UpdateColors, "UpdateColors" }, // 2029757328
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreOnHoverBorderWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreOnHoverBorderWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOnHoverBorderWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::ClassParams = {
		&UCoreOnHoverBorderWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOnHoverBorderWidget, 1053235200);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOnHoverBorderWidget>()
	{
		return UCoreOnHoverBorderWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOnHoverBorderWidget(Z_Construct_UClass_UCoreOnHoverBorderWidget, &UCoreOnHoverBorderWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOnHoverBorderWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOnHoverBorderWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
