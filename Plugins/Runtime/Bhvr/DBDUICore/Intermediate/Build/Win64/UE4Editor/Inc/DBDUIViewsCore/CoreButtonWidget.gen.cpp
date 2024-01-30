// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics
	{
		struct CoreButtonWidget_eventOnClickedDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventOnClickedDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnClickedDelegate__DelegateSignature", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnClickedDelegate_Parms), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics
	{
		struct CoreButtonWidget_eventOnHoveredDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventOnHoveredDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnHoveredDelegate__DelegateSignature", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnHoveredDelegate_Parms), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics
	{
		struct CoreButtonWidget_eventOnPressedDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventOnPressedDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnPressedDelegate__DelegateSignature", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnPressedDelegate_Parms), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics
	{
		struct CoreButtonWidget_eventOnReleasedDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventOnReleasedDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnReleasedDelegate__DelegateSignature", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnReleasedDelegate_Parms), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics
	{
		struct CoreButtonWidget_eventOnUnhoveredDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventOnUnhoveredDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnUnhoveredDelegate__DelegateSignature", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnUnhoveredDelegate_Parms), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execGetHitzonePaintSpaceGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometry*)Z_Param__Result=P_THIS->GetHitzonePaintSpaceGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execOnInternalClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInternalClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execOnInternalHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInternalHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execOnInternalLongPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInternalLongPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execOnInternalPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInternalPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execOnInternalReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInternalReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execOnInternalUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInternalUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetAdditionalIcon)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_iconTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdditionalIcon(Z_Param_iconTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_newAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignment(ETextJustify::Type(Z_Param_newAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetBackground)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInstance>,Z_Param_backgroundMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackground(Z_Param_backgroundMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetChargeable)
	{
		P_GET_UBOOL(Z_Param_isChargeable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChargeable(Z_Param_isChargeable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetClickable)
	{
		P_GET_UBOOL(Z_Param_isClickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClickable(Z_Param_isClickable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetHoldable)
	{
		P_GET_UBOOL(Z_Param_isHoldable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoldable(Z_Param_isHoldable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetHoverable)
	{
		P_GET_UBOOL(Z_Param_isHoverable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoverable(Z_Param_isHoverable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetLabel)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_Out_label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetPressable)
	{
		P_GET_UBOOL(Z_Param_isPressable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPressable(Z_Param_isPressable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetRepeatable)
	{
		P_GET_UBOOL(Z_Param_isRepeatable);
		P_GET_OBJECT(UCurveFloat,Z_Param_repetitionDelayCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRepeatable(Z_Param_isRepeatable,Z_Param_repetitionDelayCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonWidget::execSetVisible)
	{
		P_GET_ENUM(EButtonWidgetVisibility,Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(EButtonWidgetVisibility(Z_Param_visible));
		P_NATIVE_END;
	}
	static FName NAME_UCoreButtonWidget_OnAlignmentChanged = FName(TEXT("OnAlignmentChanged"));
	void UCoreButtonWidget::OnAlignmentChanged(ETextJustify::Type newAlignment)
	{
		CoreButtonWidget_eventOnAlignmentChanged_Parms Parms;
		Parms.newAlignment=newAlignment;
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnAlignmentChanged),&Parms);
	}
	static FName NAME_UCoreButtonWidget_OnClicked = FName(TEXT("OnClicked"));
	void UCoreButtonWidget::OnClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnClicked),NULL);
	}
	static FName NAME_UCoreButtonWidget_OnEnabledChanged = FName(TEXT("OnEnabledChanged"));
	void UCoreButtonWidget::OnEnabledChanged(bool isEnabled)
	{
		CoreButtonWidget_eventOnEnabledChanged_Parms Parms;
		Parms.isEnabled=isEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnEnabledChanged),&Parms);
	}
	static FName NAME_UCoreButtonWidget_OnHovered = FName(TEXT("OnHovered"));
	void UCoreButtonWidget::OnHovered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnHovered),NULL);
	}
	static FName NAME_UCoreButtonWidget_OnLongPressed = FName(TEXT("OnLongPressed"));
	void UCoreButtonWidget::OnLongPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnLongPressed),NULL);
	}
	static FName NAME_UCoreButtonWidget_OnPressed = FName(TEXT("OnPressed"));
	void UCoreButtonWidget::OnPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnPressed),NULL);
	}
	static FName NAME_UCoreButtonWidget_OnReleased = FName(TEXT("OnReleased"));
	void UCoreButtonWidget::OnReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnReleased),NULL);
	}
	static FName NAME_UCoreButtonWidget_OnUnhovered = FName(TEXT("OnUnhovered"));
	void UCoreButtonWidget::OnUnhovered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonWidget_OnUnhovered),NULL);
	}
	void UCoreButtonWidget::StaticRegisterNativesUCoreButtonWidget()
	{
		UClass* Class = UCoreButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHitzonePaintSpaceGeometry", &UCoreButtonWidget::execGetHitzonePaintSpaceGeometry },
			{ "IsEnabled", &UCoreButtonWidget::execIsEnabled },
			{ "OnInternalClicked", &UCoreButtonWidget::execOnInternalClicked },
			{ "OnInternalHovered", &UCoreButtonWidget::execOnInternalHovered },
			{ "OnInternalLongPressed", &UCoreButtonWidget::execOnInternalLongPressed },
			{ "OnInternalPressed", &UCoreButtonWidget::execOnInternalPressed },
			{ "OnInternalReleased", &UCoreButtonWidget::execOnInternalReleased },
			{ "OnInternalUnhovered", &UCoreButtonWidget::execOnInternalUnhovered },
			{ "SetAdditionalIcon", &UCoreButtonWidget::execSetAdditionalIcon },
			{ "SetAlignment", &UCoreButtonWidget::execSetAlignment },
			{ "SetBackground", &UCoreButtonWidget::execSetBackground },
			{ "SetChargeable", &UCoreButtonWidget::execSetChargeable },
			{ "SetClickable", &UCoreButtonWidget::execSetClickable },
			{ "SetEnabled", &UCoreButtonWidget::execSetEnabled },
			{ "SetHoldable", &UCoreButtonWidget::execSetHoldable },
			{ "SetHoverable", &UCoreButtonWidget::execSetHoverable },
			{ "SetLabel", &UCoreButtonWidget::execSetLabel },
			{ "SetPressable", &UCoreButtonWidget::execSetPressable },
			{ "SetRepeatable", &UCoreButtonWidget::execSetRepeatable },
			{ "SetVisible", &UCoreButtonWidget::execSetVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics
	{
		struct CoreButtonWidget_eventGetHitzonePaintSpaceGeometry_Parms
		{
			FGeometry ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventGetHitzonePaintSpaceGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "GetHitzonePaintSpaceGeometry", nullptr, nullptr, sizeof(CoreButtonWidget_eventGetHitzonePaintSpaceGeometry_Parms), Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics
	{
		struct CoreButtonWidget_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventIsEnabled_Parms), &Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "IsEnabled", nullptr, nullptr, sizeof(CoreButtonWidget_eventIsEnabled_Parms), Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::NewProp_newAlignment = { "newAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventOnAlignmentChanged_Parms, newAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::NewProp_newAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnAlignmentChanged", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnAlignmentChanged_Parms), Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics
	{
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventOnEnabledChanged_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventOnEnabledChanged_Parms), &Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnEnabledChanged", nullptr, nullptr, sizeof(CoreButtonWidget_eventOnEnabledChanged_Parms), Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnInternalClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnInternalHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnInternalLongPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnInternalPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnInternalReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnInternalUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnLongPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "OnUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics
	{
		struct CoreButtonWidget_eventSetAdditionalIcon_Parms
		{
			TSoftObjectPtr<UTexture2D> iconTexture;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_iconTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventSetAdditionalIcon_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::NewProp_iconTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetAdditionalIcon", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetAdditionalIcon_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics
	{
		struct CoreButtonWidget_eventSetAlignment_Parms
		{
			TEnumAsByte<ETextJustify::Type> newAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::NewProp_newAlignment = { "newAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventSetAlignment_Parms, newAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::NewProp_newAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetAlignment", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetAlignment_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics
	{
		struct CoreButtonWidget_eventSetBackground_Parms
		{
			TSoftObjectPtr<UMaterialInstance> backgroundMaterial;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_backgroundMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::NewProp_backgroundMaterial = { "backgroundMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventSetBackground_Parms, backgroundMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::NewProp_backgroundMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetBackground", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetBackground_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics
	{
		struct CoreButtonWidget_eventSetChargeable_Parms
		{
			bool isChargeable;
		};
		static void NewProp_isChargeable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChargeable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::NewProp_isChargeable_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetChargeable_Parms*)Obj)->isChargeable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::NewProp_isChargeable = { "isChargeable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetChargeable_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::NewProp_isChargeable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::NewProp_isChargeable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetChargeable", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetChargeable_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetChargeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetChargeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics
	{
		struct CoreButtonWidget_eventSetClickable_Parms
		{
			bool isClickable;
		};
		static void NewProp_isClickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClickable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::NewProp_isClickable_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetClickable_Parms*)Obj)->isClickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::NewProp_isClickable = { "isClickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetClickable_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::NewProp_isClickable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::NewProp_isClickable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetClickable", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetClickable_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetClickable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetClickable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics
	{
		struct CoreButtonWidget_eventSetEnabled_Parms
		{
			bool isEnabled;
		};
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetEnabled_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetEnabled", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetEnabled_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics
	{
		struct CoreButtonWidget_eventSetHoldable_Parms
		{
			bool isHoldable;
		};
		static void NewProp_isHoldable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHoldable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::NewProp_isHoldable_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetHoldable_Parms*)Obj)->isHoldable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::NewProp_isHoldable = { "isHoldable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetHoldable_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::NewProp_isHoldable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::NewProp_isHoldable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetHoldable", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetHoldable_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetHoldable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetHoldable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics
	{
		struct CoreButtonWidget_eventSetHoverable_Parms
		{
			bool isHoverable;
		};
		static void NewProp_isHoverable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHoverable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::NewProp_isHoverable_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetHoverable_Parms*)Obj)->isHoverable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::NewProp_isHoverable = { "isHoverable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetHoverable_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::NewProp_isHoverable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::NewProp_isHoverable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetHoverable", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetHoverable_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetHoverable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetHoverable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics
	{
		struct CoreButtonWidget_eventSetLabel_Parms
		{
			FText label;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::NewProp_label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventSetLabel_Parms, label), METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::NewProp_label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::NewProp_label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::NewProp_label,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetLabel", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetLabel_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics
	{
		struct CoreButtonWidget_eventSetPressable_Parms
		{
			bool isPressable;
		};
		static void NewProp_isPressable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPressable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::NewProp_isPressable_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetPressable_Parms*)Obj)->isPressable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::NewProp_isPressable = { "isPressable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetPressable_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::NewProp_isPressable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::NewProp_isPressable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetPressable", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetPressable_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetPressable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetPressable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics
	{
		struct CoreButtonWidget_eventSetRepeatable_Parms
		{
			bool isRepeatable;
			UCurveFloat* repetitionDelayCurve;
		};
		static void NewProp_isRepeatable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRepeatable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repetitionDelayCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::NewProp_isRepeatable_SetBit(void* Obj)
	{
		((CoreButtonWidget_eventSetRepeatable_Parms*)Obj)->isRepeatable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::NewProp_isRepeatable = { "isRepeatable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreButtonWidget_eventSetRepeatable_Parms), &Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::NewProp_isRepeatable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::NewProp_repetitionDelayCurve = { "repetitionDelayCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventSetRepeatable_Parms, repetitionDelayCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::NewProp_isRepeatable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::NewProp_repetitionDelayCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetRepeatable", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetRepeatable_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics
	{
		struct CoreButtonWidget_eventSetVisible_Parms
		{
			EButtonWidgetVisibility visible;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_visible_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::NewProp_visible_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonWidget_eventSetVisible_Parms, visible), Z_Construct_UEnum_DBDUIViewsCore_EButtonWidgetVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::NewProp_visible_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonWidget, nullptr, "SetVisible", nullptr, nullptr, sizeof(CoreButtonWidget_eventSetVisible_Parms), Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonWidget_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonWidget_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister()
	{
		return UCoreButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalIconIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalIconIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnhoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPressedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReleasedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleasedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoveredSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoveredSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PressedSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressedSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClickedSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedSfx;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnalogCursorStickiness_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorStickiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnalogCursorStickiness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitzoneButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitzoneButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LabelTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__alignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendAnalyticsData_MetaData[];
#endif
		static void NewProp_SendAnalyticsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendAnalyticsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnalyticsName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreButtonWidget_GetHitzonePaintSpaceGeometry, "GetHitzonePaintSpaceGeometry" }, // 755742568
		{ &Z_Construct_UFunction_UCoreButtonWidget_IsEnabled, "IsEnabled" }, // 4122645039
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnAlignmentChanged, "OnAlignmentChanged" }, // 463179857
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnClicked, "OnClicked" }, // 1908742243
		{ &Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature, "OnClickedDelegate__DelegateSignature" }, // 204594700
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnEnabledChanged, "OnEnabledChanged" }, // 384860470
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnHovered, "OnHovered" }, // 3823606091
		{ &Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature, "OnHoveredDelegate__DelegateSignature" }, // 3661420508
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnInternalClicked, "OnInternalClicked" }, // 3848574892
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnInternalHovered, "OnInternalHovered" }, // 2347735128
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnInternalLongPressed, "OnInternalLongPressed" }, // 649149356
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnInternalPressed, "OnInternalPressed" }, // 3899742182
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnInternalReleased, "OnInternalReleased" }, // 3087180901
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnInternalUnhovered, "OnInternalUnhovered" }, // 2094853570
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnLongPressed, "OnLongPressed" }, // 3417639884
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnPressed, "OnPressed" }, // 1959664633
		{ &Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature, "OnPressedDelegate__DelegateSignature" }, // 1446807452
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnReleased, "OnReleased" }, // 2734381273
		{ &Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature, "OnReleasedDelegate__DelegateSignature" }, // 3109920887
		{ &Z_Construct_UFunction_UCoreButtonWidget_OnUnhovered, "OnUnhovered" }, // 2073603476
		{ &Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature, "OnUnhoveredDelegate__DelegateSignature" }, // 1046794048
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetAdditionalIcon, "SetAdditionalIcon" }, // 3312117990
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetAlignment, "SetAlignment" }, // 3325447677
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetBackground, "SetBackground" }, // 1894809131
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetChargeable, "SetChargeable" }, // 2001670389
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetClickable, "SetClickable" }, // 3083417492
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetEnabled, "SetEnabled" }, // 444942147
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetHoldable, "SetHoldable" }, // 2781726683
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetHoverable, "SetHoverable" }, // 2332469056
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetLabel, "SetLabel" }, // 576621306
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetPressable, "SetPressable" }, // 4289586036
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetRepeatable, "SetRepeatable" }, // 2427868258
		{ &Z_Construct_UFunction_UCoreButtonWidget_SetVisible, "SetVisible" }, // 1559499684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_BackgroundIMG_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_BackgroundIMG = { "BackgroundIMG", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, BackgroundIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_BackgroundIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_BackgroundIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AdditionalIconIMG_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AdditionalIconIMG = { "AdditionalIconIMG", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, AdditionalIconIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AdditionalIconIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AdditionalIconIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnHoveredDelegate_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnHoveredDelegate = { "OnHoveredDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, OnHoveredDelegate), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnHoveredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnHoveredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnHoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnUnhoveredDelegate_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnUnhoveredDelegate = { "OnUnhoveredDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, OnUnhoveredDelegate), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnUnhoveredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnUnhoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnPressedDelegate_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnPressedDelegate = { "OnPressedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, OnPressedDelegate), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnPressedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnPressedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnPressedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnReleasedDelegate_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnReleasedDelegate = { "OnReleasedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, OnReleasedDelegate), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnReleasedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnReleasedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnReleasedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnClickedDelegate_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnClickedDelegate = { "OnClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, OnClickedDelegate), Z_Construct_UDelegateFunction_UCoreButtonWidget_OnClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfxName_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfxName = { "HoveredSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, HoveredSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfx_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfx = { "HoveredSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, HoveredSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfxName_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfxName = { "PressedSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, PressedSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfx_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfx = { "PressedSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, PressedSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfxName_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfxName = { "ClickedSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, ClickedSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfx_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfx = { "ClickedSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, ClickedSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfx_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness = { "AnalogCursorStickiness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, AnalogCursorStickiness), Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HitzoneButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HitzoneButton = { "HitzoneButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, HitzoneButton), Z_Construct_UClass_UDBDButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HitzoneButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HitzoneButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_LabelTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_LabelTB = { "LabelTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, LabelTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_LabelTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_LabelTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp__alignment_MetaData[] = {
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp__alignment = { "_alignment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, _alignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp__alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp__alignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData_SetBit(void* Obj)
	{
		((UCoreButtonWidget*)Obj)->SendAnalyticsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData = { "SendAnalyticsData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreButtonWidget), &Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalyticsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalyticsName = { "AnalyticsName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonWidget, AnalyticsName), METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalyticsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalyticsName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_BackgroundIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AdditionalIconIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnHoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnUnhoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnPressedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnReleasedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_OnClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HoveredSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_PressedSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_ClickedSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalogCursorStickiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_HitzoneButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_LabelTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp__alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_SendAnalyticsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonWidget_Statics::NewProp_AnalyticsName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreButtonWidget_Statics::ClassParams = {
		&UCoreButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreButtonWidget, 2987780383);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreButtonWidget>()
	{
		return UCoreButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreButtonWidget(Z_Construct_UClass_UCoreButtonWidget, &UCoreButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
