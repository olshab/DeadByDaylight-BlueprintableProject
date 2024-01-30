// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTabWidget::execGetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabWidget::execGetTabText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTabText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabWidget::execHasLabelTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLabelTooltip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabWidget::execSetIconSoftTexture)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_iconTexture);
		P_GET_STRUCT(FVector2D,Z_Param_forcedIconSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconSoftTexture(Z_Param_iconTexture,Z_Param_forcedIconSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabWidget::execSetIconTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_iconTexture);
		P_GET_STRUCT(FVector2D,Z_Param_forcedIconSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconTexture(Z_Param_iconTexture,Z_Param_forcedIconSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabWidget::execSetNotificationVisibility)
	{
		P_GET_UBOOL(Z_Param_hasNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotificationVisibility(Z_Param_hasNotification);
		P_NATIVE_END;
	}
	static FName NAME_UCoreTabWidget_PostInit = FName(TEXT("PostInit"));
	void UCoreTabWidget::PostInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreTabWidget_PostInit),NULL);
	}
	void UCoreTabWidget::StaticRegisterNativesUCoreTabWidget()
	{
		UClass* Class = UCoreTabWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKey", &UCoreTabWidget::execGetKey },
			{ "GetTabText", &UCoreTabWidget::execGetTabText },
			{ "HasLabelTooltip", &UCoreTabWidget::execHasLabelTooltip },
			{ "SetIconSoftTexture", &UCoreTabWidget::execSetIconSoftTexture },
			{ "SetIconTexture", &UCoreTabWidget::execSetIconTexture },
			{ "SetNotificationVisibility", &UCoreTabWidget::execSetNotificationVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics
	{
		struct CoreTabWidget_eventGetKey_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "GetKey", nullptr, nullptr, sizeof(CoreTabWidget_eventGetKey_Parms), Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics
	{
		struct CoreTabWidget_eventGetTabText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventGetTabText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "GetTabText", nullptr, nullptr, sizeof(CoreTabWidget_eventGetTabText_Parms), Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_GetTabText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_GetTabText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics
	{
		struct CoreTabWidget_eventHasLabelTooltip_Parms
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
	void Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreTabWidget_eventHasLabelTooltip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabWidget_eventHasLabelTooltip_Parms), &Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "HasLabelTooltip", nullptr, nullptr, sizeof(CoreTabWidget_eventHasLabelTooltip_Parms), Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabWidget_PostInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_PostInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_PostInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "PostInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_PostInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_PostInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_PostInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_PostInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics
	{
		struct CoreTabWidget_eventSetIconSoftTexture_Parms
		{
			TSoftObjectPtr<UTexture2D> iconTexture;
			FVector2D forcedIconSize;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_iconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forcedIconSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forcedIconSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventSetIconSoftTexture_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_forcedIconSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_forcedIconSize = { "forcedIconSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventSetIconSoftTexture_Parms, forcedIconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_forcedIconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_forcedIconSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_iconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::NewProp_forcedIconSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "SetIconSoftTexture", nullptr, nullptr, sizeof(CoreTabWidget_eventSetIconSoftTexture_Parms), Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics
	{
		struct CoreTabWidget_eventSetIconTexture_Parms
		{
			UTexture2D* iconTexture;
			FVector2D forcedIconSize;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_iconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forcedIconSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forcedIconSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventSetIconTexture_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_forcedIconSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_forcedIconSize = { "forcedIconSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventSetIconTexture_Parms, forcedIconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_forcedIconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_forcedIconSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_iconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::NewProp_forcedIconSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "SetIconTexture", nullptr, nullptr, sizeof(CoreTabWidget_eventSetIconTexture_Parms), Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_SetIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_SetIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics
	{
		struct CoreTabWidget_eventSetNotificationVisibility_Parms
		{
			bool hasNotification;
		};
		static void NewProp_hasNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::NewProp_hasNotification_SetBit(void* Obj)
	{
		((CoreTabWidget_eventSetNotificationVisibility_Parms*)Obj)->hasNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::NewProp_hasNotification = { "hasNotification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabWidget_eventSetNotificationVisibility_Parms), &Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::NewProp_hasNotification_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::NewProp_hasNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "SetNotificationVisibility", nullptr, nullptr, sizeof(CoreTabWidget_eventSetNotificationVisibility_Parms), Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTabWidget_NoRegister()
	{
		return UCoreTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabTextField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabTextField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotificationWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelTooltipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LabelTooltipText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTabWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTabWidget_GetKey, "GetKey" }, // 539455929
		{ &Z_Construct_UFunction_UCoreTabWidget_GetTabText, "GetTabText" }, // 2752611232
		{ &Z_Construct_UFunction_UCoreTabWidget_HasLabelTooltip, "HasLabelTooltip" }, // 3620134746
		{ &Z_Construct_UFunction_UCoreTabWidget_PostInit, "PostInit" }, // 3117736214
		{ &Z_Construct_UFunction_UCoreTabWidget_SetIconSoftTexture, "SetIconSoftTexture" }, // 4276635399
		{ &Z_Construct_UFunction_UCoreTabWidget_SetIconTexture, "SetIconTexture" }, // 3434390461
		{ &Z_Construct_UFunction_UCoreTabWidget_SetNotificationVisibility, "SetNotificationVisibility" }, // 2407748238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreTabWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField = { "TabTextField", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabWidget, TabTextField), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage = { "TabImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabWidget, TabImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_NotificationWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_NotificationWidget = { "NotificationWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabWidget, NotificationWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_NotificationWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_NotificationWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_LabelTooltipText_MetaData[] = {
		{ "Category", "CoreTabWidget" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_LabelTooltipText = { "LabelTooltipText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabWidget, LabelTooltipText), METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_LabelTooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_LabelTooltipText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTabWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_NotificationWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_LabelTooltipText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTabWidget_Statics::ClassParams = {
		&UCoreTabWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTabWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTabWidget, 1732108095);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTabWidget>()
	{
		return UCoreTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTabWidget(Z_Construct_UClass_UCoreTabWidget, &UCoreTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
