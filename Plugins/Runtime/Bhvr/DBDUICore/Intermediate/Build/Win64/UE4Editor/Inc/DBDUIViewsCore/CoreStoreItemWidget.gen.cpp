// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreItemViewData_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePriceTagWidget_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreItemWidget::execIsTagVisible)
	{
		P_GET_ENUM(EStoreItemLayout,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTagVisible(EStoreItemLayout(Z_Param_tag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreItemWidget::execOnButtonHovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_targetButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonHovered(Z_Param_targetButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreItemWidget::execOnButtonSelectedChanged)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_targetButton);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonSelectedChanged(Z_Param_targetButton,Z_Param_isSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreItemWidget::execOnButtonUnhovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_targetButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonUnhovered(Z_Param_targetButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreItemWidget::execSetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreItemWidget::execSetStoreItemData)
	{
		P_GET_OBJECT(UStoreItemViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStoreItemData_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreItemWidget::execSetStoreItemLayout)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_layoutMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStoreItemLayout(Z_Param_layoutMask);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreItemWidget_SetSmallTemplate = FName(TEXT("SetSmallTemplate"));
	void UCoreStoreItemWidget::SetSmallTemplate(bool useSmallTemplate)
	{
		CoreStoreItemWidget_eventSetSmallTemplate_Parms Parms;
		Parms.useSmallTemplate=useSmallTemplate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreItemWidget_SetSmallTemplate),&Parms);
	}
	static FName NAME_UCoreStoreItemWidget_SetStoreItemData = FName(TEXT("SetStoreItemData"));
	void UCoreStoreItemWidget::SetStoreItemData(UStoreItemViewData* data)
	{
		CoreStoreItemWidget_eventSetStoreItemData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreItemWidget_SetStoreItemData),&Parms);
	}
	void UCoreStoreItemWidget::StaticRegisterNativesUCoreStoreItemWidget()
	{
		UClass* Class = UCoreStoreItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTagVisible", &UCoreStoreItemWidget::execIsTagVisible },
			{ "OnButtonHovered", &UCoreStoreItemWidget::execOnButtonHovered },
			{ "OnButtonSelectedChanged", &UCoreStoreItemWidget::execOnButtonSelectedChanged },
			{ "OnButtonUnhovered", &UCoreStoreItemWidget::execOnButtonUnhovered },
			{ "SetScale", &UCoreStoreItemWidget::execSetScale },
			{ "SetStoreItemData", &UCoreStoreItemWidget::execSetStoreItemData },
			{ "SetStoreItemLayout", &UCoreStoreItemWidget::execSetStoreItemLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics
	{
		struct CoreStoreItemWidget_eventIsTagVisible_Parms
		{
			EStoreItemLayout tag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_tag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventIsTagVisible_Parms, tag), Z_Construct_UEnum_DBDUIViewInterfaces_EStoreItemLayout, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreStoreItemWidget_eventIsTagVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreItemWidget_eventIsTagVisible_Parms), &Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_tag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "IsTagVisible", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventIsTagVisible_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics
	{
		struct CoreStoreItemWidget_eventOnButtonHovered_Parms
		{
			UCoreButtonWidget* targetButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::NewProp_targetButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::NewProp_targetButton = { "targetButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventOnButtonHovered_Parms, targetButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::NewProp_targetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::NewProp_targetButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::NewProp_targetButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "OnButtonHovered", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventOnButtonHovered_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics
	{
		struct CoreStoreItemWidget_eventOnButtonSelectedChanged_Parms
		{
			UCoreSelectableButtonWidget* targetButton;
			bool isSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetButton;
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_targetButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_targetButton = { "targetButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventOnButtonSelectedChanged_Parms, targetButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_targetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_targetButton_MetaData)) };
	void Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((CoreStoreItemWidget_eventOnButtonSelectedChanged_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreItemWidget_eventOnButtonSelectedChanged_Parms), &Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_targetButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "OnButtonSelectedChanged", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventOnButtonSelectedChanged_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics
	{
		struct CoreStoreItemWidget_eventOnButtonUnhovered_Parms
		{
			UCoreButtonWidget* targetButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::NewProp_targetButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::NewProp_targetButton = { "targetButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventOnButtonUnhovered_Parms, targetButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::NewProp_targetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::NewProp_targetButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::NewProp_targetButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "OnButtonUnhovered", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventOnButtonUnhovered_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics
	{
		struct CoreStoreItemWidget_eventSetScale_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventSetScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "SetScale", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventSetScale_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics
	{
		static void NewProp_useSmallTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useSmallTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate_SetBit(void* Obj)
	{
		((CoreStoreItemWidget_eventSetSmallTemplate_Parms*)Obj)->useSmallTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate = { "useSmallTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreItemWidget_eventSetSmallTemplate_Parms), &Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "SetSmallTemplate", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventSetSmallTemplate_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventSetStoreItemData_Parms, data), Z_Construct_UClass_UStoreItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "SetStoreItemData", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventSetStoreItemData_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics
	{
		struct CoreStoreItemWidget_eventSetStoreItemLayout_Parms
		{
			int32 layoutMask;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_layoutMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::NewProp_layoutMask = { "layoutMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreItemWidget_eventSetStoreItemLayout_Parms, layoutMask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::NewProp_layoutMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreItemWidget, nullptr, "SetStoreItemLayout", nullptr, nullptr, sizeof(CoreStoreItemWidget_eventSetStoreItemLayout_Parms), Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreItemWidget_NoRegister()
	{
		return UCoreStoreItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__layoutMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__layoutMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__priceTagPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__priceTagPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__priceTagWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__priceTagWidgetClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__tooltipVerticalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tooltipVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__tooltipVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoverBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHoverBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTagsVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceTagsVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedTagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedTagText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_IsTagVisible, "IsTagVisible" }, // 480423768
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonHovered, "OnButtonHovered" }, // 2791260084
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonSelectedChanged, "OnButtonSelectedChanged" }, // 4169631197
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_OnButtonUnhovered, "OnButtonUnhovered" }, // 2134856249
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_SetScale, "SetScale" }, // 2933926413
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_SetSmallTemplate, "SetSmallTemplate" }, // 987296935
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemData, "SetStoreItemData" }, // 2275869918
		{ &Z_Construct_UFunction_UCoreStoreItemWidget_SetStoreItemLayout, "SetStoreItemLayout" }, // 2705403971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__layoutMask_MetaData[] = {
		{ "Category", "CoreStoreItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__layoutMask = { "_layoutMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, _layoutMask), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__layoutMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__layoutMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagPadding_MetaData[] = {
		{ "Category", "CoreStoreItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagPadding = { "_priceTagPadding", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, _priceTagPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagWidgetClass = { "_priceTagWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, _priceTagWidgetClass), Z_Construct_UClass_UCorePriceTagWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment_MetaData[] = {
		{ "Category", "CoreStoreItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment = { "_tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, _tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment_MetaData[] = {
		{ "Category", "CoreStoreItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment = { "_tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, _tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, ItemIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_LayoutScale_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_LayoutScale = { "LayoutScale", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, LayoutScale), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_LayoutScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_LayoutScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_SelectedOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_SelectedOverlay = { "SelectedOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, SelectedOverlay), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_SelectedOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_SelectedOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OnHoverBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OnHoverBorder = { "OnHoverBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, OnHoverBorder), Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OnHoverBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OnHoverBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_PriceTagsVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_PriceTagsVerticalBox = { "PriceTagsVerticalBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, PriceTagsVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_PriceTagsVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_PriceTagsVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OwnedTagText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OwnedTagText = { "OwnedTagText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreItemWidget, OwnedTagText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OwnedTagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OwnedTagText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__layoutMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__priceTagWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp__tooltipVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_LayoutScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_SelectedOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OnHoverBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_PriceTagsVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreItemWidget_Statics::NewProp_OwnedTagText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreItemWidget_Statics::ClassParams = {
		&UCoreStoreItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreItemWidget, 1899997244);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreItemWidget>()
	{
		return UCoreStoreItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreItemWidget(Z_Construct_UClass_UCoreStoreItemWidget, &UCoreStoreItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
