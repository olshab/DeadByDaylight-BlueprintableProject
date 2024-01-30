// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreKeyListenerInputPromptWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreKeyListenerInputPromptWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnKeyListenerInputPromptTriggeredDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetAdditionalIcon)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_iconTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdditionalIcon(Z_Param_iconTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetKeyOverride)
	{
		P_GET_STRUCT(FKey,Z_Param_keyOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyOverride(Z_Param_keyOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetLabel)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_Out_label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetRepeatable)
	{
		P_GET_UBOOL(Z_Param_isRepeatable);
		P_GET_OBJECT(UCurveFloat,Z_Param_repetitionDelayCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRepeatable(Z_Param_isRepeatable,Z_Param_repetitionDelayCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetUIAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIAction(EUIActionType(Z_Param_actionType));
		P_NATIVE_END;
	}
	static FName NAME_UCoreKeyListenerInputPromptWidget_OnEnabledChanged = FName(TEXT("OnEnabledChanged"));
	void UCoreKeyListenerInputPromptWidget::OnEnabledChanged(bool isEnabled)
	{
		CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms Parms;
		Parms.isEnabled=isEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreKeyListenerInputPromptWidget_OnEnabledChanged),&Parms);
	}
	void UCoreKeyListenerInputPromptWidget::StaticRegisterNativesUCoreKeyListenerInputPromptWidget()
	{
		UClass* Class = UCoreKeyListenerInputPromptWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnabled", &UCoreKeyListenerInputPromptWidget::execIsEnabled },
			{ "SetAdditionalIcon", &UCoreKeyListenerInputPromptWidget::execSetAdditionalIcon },
			{ "SetEnabled", &UCoreKeyListenerInputPromptWidget::execSetEnabled },
			{ "SetKeyOverride", &UCoreKeyListenerInputPromptWidget::execSetKeyOverride },
			{ "SetLabel", &UCoreKeyListenerInputPromptWidget::execSetLabel },
			{ "SetRepeatable", &UCoreKeyListenerInputPromptWidget::execSetRepeatable },
			{ "SetUIAction", &UCoreKeyListenerInputPromptWidget::execSetUIAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "IsEnabled", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics
	{
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "OnEnabledChanged", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetAdditionalIcon_Parms
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
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetAdditionalIcon_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::NewProp_iconTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetAdditionalIcon", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetAdditionalIcon_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetEnabled", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetKeyOverride_Parms
		{
			FKey keyOverride;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::NewProp_keyOverride = { "keyOverride", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetKeyOverride_Parms, keyOverride), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::NewProp_keyOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetKeyOverride", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetKeyOverride_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetLabel_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetLabel_Parms, label), METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetLabel", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetLabel_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetRepeatable_Parms
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
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::NewProp_isRepeatable_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventSetRepeatable_Parms*)Obj)->isRepeatable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::NewProp_isRepeatable = { "isRepeatable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventSetRepeatable_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::NewProp_isRepeatable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::NewProp_repetitionDelayCurve = { "repetitionDelayCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetRepeatable_Parms, repetitionDelayCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::NewProp_isRepeatable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::NewProp_repetitionDelayCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetRepeatable", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetRepeatable_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetUIAction_Parms
		{
			EUIActionType actionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetUIAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetUIAction", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetUIAction_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister()
	{
		return UCoreKeyListenerInputPromptWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClickedSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LabelTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalIconIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalIconIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onKeyListenerInputPromptTriggeredDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled, "IsEnabled" }, // 636551987
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged, "OnEnabledChanged" }, // 3488304088
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetAdditionalIcon, "SetAdditionalIcon" }, // 2398617055
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled, "SetEnabled" }, // 2702570312
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetKeyOverride, "SetKeyOverride" }, // 373623978
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel, "SetLabel" }, // 1806990629
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetRepeatable, "SetRepeatable" }, // 1666731600
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction, "SetUIAction" }, // 3810391625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreKeyListenerInputPromptWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfxName_MetaData[] = {
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfxName = { "ClickedSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, ClickedSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfx_MetaData[] = {
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfx = { "ClickedSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, ClickedSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt = { "InputPrompt", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, InputPrompt), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB = { "LabelTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, LabelTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_AdditionalIconIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_AdditionalIconIMG = { "AdditionalIconIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, AdditionalIconIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_AdditionalIconIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_AdditionalIconIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate = { "_onKeyListenerInputPromptTriggeredDelegate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, _onKeyListenerInputPromptTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnKeyListenerInputPromptTriggeredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_ClickedSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_AdditionalIconIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreKeyListenerInputPromptWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::ClassParams = {
		&UCoreKeyListenerInputPromptWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreKeyListenerInputPromptWidget, 148277515);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreKeyListenerInputPromptWidget>()
	{
		return UCoreKeyListenerInputPromptWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreKeyListenerInputPromptWidget(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, &UCoreKeyListenerInputPromptWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreKeyListenerInputPromptWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreKeyListenerInputPromptWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
