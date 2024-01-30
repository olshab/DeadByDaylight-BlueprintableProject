// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoryLevelButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoryLevelButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_LevelUnockedAnimationDoneDelegate__DelegateSignature();
	CORECOMMONUIUTILS_API UEnum* Z_Construct_UEnum_CoreCommonUIUtils_ERemainingTimeFormat();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoryLevelButtonWidget::execGetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelButtonWidget::execSetData)
	{
		P_GET_OBJECT(UArchiveStoryLevelViewData,Z_Param_viewData);
		P_GET_UBOOL(Z_Param_isSelectorReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_viewData,Z_Param_isSelectorReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelButtonWidget::execUpdateStatusData)
	{
		P_GET_ENUM(EArchivesStoryLevelStatus,Z_Param_newStatus);
		P_GET_UBOOL(Z_Param_isSelectorReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStatusData(EArchivesStoryLevelStatus(Z_Param_newStatus),Z_Param_isSelectorReadOnly);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoryLevelButtonWidget_UpdateVisual = FName(TEXT("UpdateVisual"));
	void UCoreStoryLevelButtonWidget::UpdateVisual(const UArchiveStoryLevelViewData* viewData, bool newlyUnlocked)
	{
		CoreStoryLevelButtonWidget_eventUpdateVisual_Parms Parms;
		Parms.viewData=viewData;
		Parms.newlyUnlocked=newlyUnlocked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoryLevelButtonWidget_UpdateVisual),&Parms);
	}
	static FName NAME_UCoreStoryLevelButtonWidget_UpdateVisualStatus = FName(TEXT("UpdateVisualStatus"));
	void UCoreStoryLevelButtonWidget::UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked)
	{
		CoreStoryLevelButtonWidget_eventUpdateVisualStatus_Parms Parms;
		Parms.newStatus=newStatus;
		Parms.newlyUnlocked=newlyUnlocked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoryLevelButtonWidget_UpdateVisualStatus),&Parms);
	}
	void UCoreStoryLevelButtonWidget::StaticRegisterNativesUCoreStoryLevelButtonWidget()
	{
		UClass* Class = UCoreStoryLevelButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevel", &UCoreStoryLevelButtonWidget::execGetLevel },
			{ "SetData", &UCoreStoryLevelButtonWidget::execSetData },
			{ "UpdateStatusData", &UCoreStoryLevelButtonWidget::execUpdateStatusData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics
	{
		struct CoreStoryLevelButtonWidget_eventGetLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelButtonWidget_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelButtonWidget, nullptr, "GetLevel", nullptr, nullptr, sizeof(CoreStoryLevelButtonWidget_eventGetLevel_Parms), Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics
	{
		struct CoreStoryLevelButtonWidget_eventSetData_Parms
		{
			const UArchiveStoryLevelViewData* viewData;
			bool isSelectorReadOnly;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewData;
		static void NewProp_isSelectorReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelectorReadOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelButtonWidget_eventSetData_Parms, viewData), Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	void Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_isSelectorReadOnly_SetBit(void* Obj)
	{
		((CoreStoryLevelButtonWidget_eventSetData_Parms*)Obj)->isSelectorReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_isSelectorReadOnly = { "isSelectorReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoryLevelButtonWidget_eventSetData_Parms), &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_isSelectorReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::NewProp_isSelectorReadOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelButtonWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreStoryLevelButtonWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics
	{
		struct CoreStoryLevelButtonWidget_eventUpdateStatusData_Parms
		{
			EArchivesStoryLevelStatus newStatus;
			bool isSelectorReadOnly;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newStatus;
		static void NewProp_isSelectorReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelectorReadOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_newStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_newStatus = { "newStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelButtonWidget_eventUpdateStatusData_Parms, newStatus), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_isSelectorReadOnly_SetBit(void* Obj)
	{
		((CoreStoryLevelButtonWidget_eventUpdateStatusData_Parms*)Obj)->isSelectorReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_isSelectorReadOnly = { "isSelectorReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoryLevelButtonWidget_eventUpdateStatusData_Parms), &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_isSelectorReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_newStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_newStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::NewProp_isSelectorReadOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelButtonWidget, nullptr, "UpdateStatusData", nullptr, nullptr, sizeof(CoreStoryLevelButtonWidget_eventUpdateStatusData_Parms), Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewData;
		static void NewProp_newlyUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newlyUnlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelButtonWidget_eventUpdateVisual_Parms, viewData), Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_viewData_MetaData)) };
	void Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_newlyUnlocked_SetBit(void* Obj)
	{
		((CoreStoryLevelButtonWidget_eventUpdateVisual_Parms*)Obj)->newlyUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_newlyUnlocked = { "newlyUnlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoryLevelButtonWidget_eventUpdateVisual_Parms), &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_newlyUnlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::NewProp_newlyUnlocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelButtonWidget, nullptr, "UpdateVisual", nullptr, nullptr, sizeof(CoreStoryLevelButtonWidget_eventUpdateVisual_Parms), Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newStatus;
		static void NewProp_newlyUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newlyUnlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newStatus = { "newStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelButtonWidget_eventUpdateVisualStatus_Parms, newStatus), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newlyUnlocked_SetBit(void* Obj)
	{
		((CoreStoryLevelButtonWidget_eventUpdateVisualStatus_Parms*)Obj)->newlyUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newlyUnlocked = { "newlyUnlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoryLevelButtonWidget_eventUpdateVisualStatus_Parms), &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newlyUnlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::NewProp_newlyUnlocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelButtonWidget, nullptr, "UpdateVisualStatus", nullptr, nullptr, sizeof(CoreStoryLevelButtonWidget_eventUpdateVisualStatus_Parms), Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoryLevelButtonWidget_NoRegister()
	{
		return UCoreStoryLevelButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelUnlockedAnimationDoneDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__levelUnlockedAnimationDoneDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tooltipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__tooltipText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__lockedLevelTimeFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lockedLevelTimeFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__lockedLevelTimeFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_GetLevel, "GetLevel" }, // 3043893922
		{ &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_SetData, "SetData" }, // 4198261339
		{ &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateStatusData, "UpdateStatusData" }, // 1003077167
		{ &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisual, "UpdateVisual" }, // 98799074
		{ &Z_Construct_UFunction_UCoreStoryLevelButtonWidget_UpdateVisualStatus, "UpdateVisualStatus" }, // 3203653319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoryLevelButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate_MetaData[] = {
		{ "Category", "CoreStoryLevelButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate = { "_levelUnlockedAnimationDoneDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelButtonWidget, _levelUnlockedAnimationDoneDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_LevelUnockedAnimationDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__tooltipText_MetaData[] = {
		{ "Category", "CoreStoryLevelButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__tooltipText = { "_tooltipText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelButtonWidget, _tooltipText), METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__tooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__tooltipText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat_MetaData[] = {
		{ "Category", "CoreStoryLevelButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat = { "_lockedLevelTimeFormat", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelButtonWidget, _lockedLevelTimeFormat), Z_Construct_UEnum_CoreCommonUIUtils_ERemainingTimeFormat, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__tooltipText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::NewProp__lockedLevelTimeFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoryLevelButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::ClassParams = {
		&UCoreStoryLevelButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoryLevelButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoryLevelButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoryLevelButtonWidget, 2606322464);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoryLevelButtonWidget>()
	{
		return UCoreStoryLevelButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoryLevelButtonWidget(Z_Construct_UClass_UCoreStoryLevelButtonWidget, &UCoreStoryLevelButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoryLevelButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoryLevelButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
