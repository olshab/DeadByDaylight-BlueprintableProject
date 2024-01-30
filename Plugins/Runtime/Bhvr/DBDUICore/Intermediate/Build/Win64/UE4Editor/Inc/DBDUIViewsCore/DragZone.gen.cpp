// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DragZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragZone() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDragZone_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDragZone();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnDragEvent__DelegateSignature();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EDragZoneAxis();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDragZone::execOnAnalogInput)
	{
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_analogEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnalogInput(Z_Param_Out_analogEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragZone::execOnMouseHoverHitzone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseHoverHitzone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragZone::execOnMouseMoveGlobal)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_mouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseMoveGlobal(Z_Param_Out_mouseEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragZone::execOnMousePressGlobal)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_mouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMousePressGlobal(Z_Param_Out_mouseEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragZone::execOnMousePressHitzone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMousePressHitzone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragZone::execOnMouseReleaseGlobal)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_mouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseReleaseGlobal(Z_Param_Out_mouseEvent);
		P_NATIVE_END;
	}
	void UDragZone::StaticRegisterNativesUDragZone()
	{
		UClass* Class = UDragZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAnalogInput", &UDragZone::execOnAnalogInput },
			{ "OnMouseHoverHitzone", &UDragZone::execOnMouseHoverHitzone },
			{ "OnMouseMoveGlobal", &UDragZone::execOnMouseMoveGlobal },
			{ "OnMousePressGlobal", &UDragZone::execOnMousePressGlobal },
			{ "OnMousePressHitzone", &UDragZone::execOnMousePressHitzone },
			{ "OnMouseReleaseGlobal", &UDragZone::execOnMouseReleaseGlobal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics
	{
		struct DragZone_eventOnAnalogInput_Parms
		{
			FAnalogInputEvent analogEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_analogEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_analogEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::NewProp_analogEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::NewProp_analogEvent = { "analogEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragZone_eventOnAnalogInput_Parms, analogEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::NewProp_analogEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::NewProp_analogEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::NewProp_analogEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragZone, nullptr, "OnAnalogInput", nullptr, nullptr, sizeof(DragZone_eventOnAnalogInput_Parms), Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragZone_OnAnalogInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragZone_OnAnalogInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragZone, nullptr, "OnMouseHoverHitzone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics
	{
		struct DragZone_eventOnMouseMoveGlobal_Parms
		{
			FPointerEvent mouseEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::NewProp_mouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::NewProp_mouseEvent = { "mouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragZone_eventOnMouseMoveGlobal_Parms, mouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::NewProp_mouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::NewProp_mouseEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::NewProp_mouseEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragZone, nullptr, "OnMouseMoveGlobal", nullptr, nullptr, sizeof(DragZone_eventOnMouseMoveGlobal_Parms), Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics
	{
		struct DragZone_eventOnMousePressGlobal_Parms
		{
			FPointerEvent mouseEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::NewProp_mouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::NewProp_mouseEvent = { "mouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragZone_eventOnMousePressGlobal_Parms, mouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::NewProp_mouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::NewProp_mouseEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::NewProp_mouseEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragZone, nullptr, "OnMousePressGlobal", nullptr, nullptr, sizeof(DragZone_eventOnMousePressGlobal_Parms), Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragZone_OnMousePressGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragZone_OnMousePressGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragZone_OnMousePressHitzone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMousePressHitzone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragZone_OnMousePressHitzone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragZone, nullptr, "OnMousePressHitzone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMousePressHitzone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMousePressHitzone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragZone_OnMousePressHitzone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragZone_OnMousePressHitzone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics
	{
		struct DragZone_eventOnMouseReleaseGlobal_Parms
		{
			FPointerEvent mouseEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::NewProp_mouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::NewProp_mouseEvent = { "mouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragZone_eventOnMouseReleaseGlobal_Parms, mouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::NewProp_mouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::NewProp_mouseEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::NewProp_mouseEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragZone, nullptr, "OnMouseReleaseGlobal", nullptr, nullptr, sizeof(DragZone_eventOnMouseReleaseGlobal_Parms), Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDragZone_NoRegister()
	{
		return UDragZone::StaticClass();
	}
	struct Z_Construct_UClass_UDragZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDragDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitzoneButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitzoneButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragZone_OnAnalogInput, "OnAnalogInput" }, // 3016896053
		{ &Z_Construct_UFunction_UDragZone_OnMouseHoverHitzone, "OnMouseHoverHitzone" }, // 467461439
		{ &Z_Construct_UFunction_UDragZone_OnMouseMoveGlobal, "OnMouseMoveGlobal" }, // 1983116376
		{ &Z_Construct_UFunction_UDragZone_OnMousePressGlobal, "OnMousePressGlobal" }, // 3713580060
		{ &Z_Construct_UFunction_UDragZone_OnMousePressHitzone, "OnMousePressHitzone" }, // 501486313
		{ &Z_Construct_UFunction_UDragZone_OnMouseReleaseGlobal, "OnMouseReleaseGlobal" }, // 2705522591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragZone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DragZone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragZone_Statics::NewProp_OnDragDelegate_MetaData[] = {
		{ "Category", "DragZone" },
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDragZone_Statics::NewProp_OnDragDelegate = { "OnDragDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragZone, OnDragDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnDragEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDragZone_Statics::NewProp_OnDragDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::NewProp_OnDragDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragZone_Statics::NewProp_DeadZone_MetaData[] = {
		{ "Category", "DragZone" },
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDragZone_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragZone, DeadZone), METADATA_PARAMS(Z_Construct_UClass_UDragZone_Statics::NewProp_DeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::NewProp_DeadZone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDragZone_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragZone_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "DragZone" },
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDragZone_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragZone, Axis), Z_Construct_UEnum_DBDUIViewsCore_EDragZoneAxis, METADATA_PARAMS(Z_Construct_UClass_UDragZone_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragZone_Statics::NewProp_DebugPreview_MetaData[] = {
		{ "Category", "DragZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragZone_Statics::NewProp_DebugPreview = { "DebugPreview", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragZone, DebugPreview), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragZone_Statics::NewProp_DebugPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::NewProp_DebugPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragZone_Statics::NewProp_HitzoneButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DragZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DragZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragZone_Statics::NewProp_HitzoneButton = { "HitzoneButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragZone, HitzoneButton), Z_Construct_UClass_UDBDButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragZone_Statics::NewProp_HitzoneButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::NewProp_HitzoneButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragZone_Statics::NewProp_OnDragDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragZone_Statics::NewProp_DeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragZone_Statics::NewProp_Axis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragZone_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragZone_Statics::NewProp_DebugPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragZone_Statics::NewProp_HitzoneButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragZone_Statics::ClassParams = {
		&UDragZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDragZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragZone, 2526561292);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDragZone>()
	{
		return UDragZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragZone(Z_Construct_UClass_UDragZone, &UDragZone::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDragZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
