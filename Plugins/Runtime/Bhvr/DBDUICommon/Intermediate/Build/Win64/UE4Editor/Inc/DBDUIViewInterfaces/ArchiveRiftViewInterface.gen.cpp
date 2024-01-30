// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveRiftViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveRiftViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveRiftViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftGenericViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveRiftViewInterface::execPlayUnlockingAnimation)
	{
		P_GET_STRUCT_REF(FArchivesRiftUnlockSequenceData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayUnlockingAnimation_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveRiftViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FArchivesRiftGenericViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveRiftViewInterface::execSetImagePreviewAreaData)
	{
		P_GET_STRUCT_REF(FCustomizationItemPreviewAreaViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImagePreviewAreaData_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveRiftViewInterface::execSetMatchmakingSoftlockState)
	{
		P_GET_UBOOL(Z_Param_isInMatchmakingSoftlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingSoftlockState_Implementation(Z_Param_isInMatchmakingSoftlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveRiftViewInterface::execSetRewardTiersData)
	{
		P_GET_TARRAY_REF(FArchiveRiftTierRewardsViewData,Z_Param_Out_riftTiersData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardTiersData_Implementation(Z_Param_Out_riftTiersData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveRiftViewInterface::execSetRiftFragmentTooltipViewData)
	{
		P_GET_STRUCT_REF(FCurrencyProgressionTooltipViewData,Z_Param_Out_RiftFragmentTooltipViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRiftFragmentTooltipViewData_Implementation(Z_Param_Out_RiftFragmentTooltipViewData);
		P_NATIVE_END;
	}
	void IArchiveRiftViewInterface::PlayUnlockingAnimation(FArchivesRiftUnlockSequenceData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayUnlockingAnimation instead.");
	}
	void IArchiveRiftViewInterface::SetData(FArchivesRiftGenericViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void IArchiveRiftViewInterface::SetImagePreviewAreaData(FCustomizationItemPreviewAreaViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetImagePreviewAreaData instead.");
	}
	void IArchiveRiftViewInterface::SetMatchmakingSoftlockState(bool isInMatchmakingSoftlock)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMatchmakingSoftlockState instead.");
	}
	void IArchiveRiftViewInterface::SetRewardTiersData(TArray<FArchiveRiftTierRewardsViewData> const& riftTiersData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRewardTiersData instead.");
	}
	void IArchiveRiftViewInterface::SetRiftFragmentTooltipViewData(FCurrencyProgressionTooltipViewData const& RiftFragmentTooltipViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRiftFragmentTooltipViewData instead.");
	}
	void UArchiveRiftViewInterface::StaticRegisterNativesUArchiveRiftViewInterface()
	{
		UClass* Class = UArchiveRiftViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayUnlockingAnimation", &IArchiveRiftViewInterface::execPlayUnlockingAnimation },
			{ "SetData", &IArchiveRiftViewInterface::execSetData },
			{ "SetImagePreviewAreaData", &IArchiveRiftViewInterface::execSetImagePreviewAreaData },
			{ "SetMatchmakingSoftlockState", &IArchiveRiftViewInterface::execSetMatchmakingSoftlockState },
			{ "SetRewardTiersData", &IArchiveRiftViewInterface::execSetRewardTiersData },
			{ "SetRiftFragmentTooltipViewData", &IArchiveRiftViewInterface::execSetRiftFragmentTooltipViewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftViewInterface_eventPlayUnlockingAnimation_Parms, data), Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftViewInterface, nullptr, "PlayUnlockingAnimation", nullptr, nullptr, sizeof(ArchiveRiftViewInterface_eventPlayUnlockingAnimation_Parms), Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftViewInterface_eventSetData_Parms, data), Z_Construct_UScriptStruct_FArchivesRiftGenericViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(ArchiveRiftViewInterface_eventSetData_Parms), Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftViewInterface_eventSetImagePreviewAreaData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftViewInterface, nullptr, "SetImagePreviewAreaData", nullptr, nullptr, sizeof(ArchiveRiftViewInterface_eventSetImagePreviewAreaData_Parms), Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics
	{
		static void NewProp_isInMatchmakingSoftlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInMatchmakingSoftlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::NewProp_isInMatchmakingSoftlock_SetBit(void* Obj)
	{
		((ArchiveRiftViewInterface_eventSetMatchmakingSoftlockState_Parms*)Obj)->isInMatchmakingSoftlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::NewProp_isInMatchmakingSoftlock = { "isInMatchmakingSoftlock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveRiftViewInterface_eventSetMatchmakingSoftlockState_Parms), &Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::NewProp_isInMatchmakingSoftlock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::NewProp_isInMatchmakingSoftlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftViewInterface, nullptr, "SetMatchmakingSoftlockState", nullptr, nullptr, sizeof(ArchiveRiftViewInterface_eventSetMatchmakingSoftlockState_Parms), Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_riftTiersData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_riftTiersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_riftTiersData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData_Inner = { "riftTiersData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData = { "riftTiersData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftViewInterface_eventSetRewardTiersData_Parms, riftTiersData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::NewProp_riftTiersData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftViewInterface, nullptr, "SetRewardTiersData", nullptr, nullptr, sizeof(ArchiveRiftViewInterface_eventSetRewardTiersData_Parms), Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiftFragmentTooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RiftFragmentTooltipViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::NewProp_RiftFragmentTooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::NewProp_RiftFragmentTooltipViewData = { "RiftFragmentTooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRiftViewInterface_eventSetRiftFragmentTooltipViewData_Parms, RiftFragmentTooltipViewData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::NewProp_RiftFragmentTooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::NewProp_RiftFragmentTooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::NewProp_RiftFragmentTooltipViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRiftViewInterface, nullptr, "SetRiftFragmentTooltipViewData", nullptr, nullptr, sizeof(ArchiveRiftViewInterface_eventSetRiftFragmentTooltipViewData_Parms), Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister()
	{
		return UArchiveRiftViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveRiftViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveRiftViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveRiftViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveRiftViewInterface_PlayUnlockingAnimation, "PlayUnlockingAnimation" }, // 3430711308
		{ &Z_Construct_UFunction_UArchiveRiftViewInterface_SetData, "SetData" }, // 280552977
		{ &Z_Construct_UFunction_UArchiveRiftViewInterface_SetImagePreviewAreaData, "SetImagePreviewAreaData" }, // 2712676553
		{ &Z_Construct_UFunction_UArchiveRiftViewInterface_SetMatchmakingSoftlockState, "SetMatchmakingSoftlockState" }, // 2296200266
		{ &Z_Construct_UFunction_UArchiveRiftViewInterface_SetRewardTiersData, "SetRewardTiersData" }, // 2404056611
		{ &Z_Construct_UFunction_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData, "SetRiftFragmentTooltipViewData" }, // 2350739426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveRiftViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveRiftViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveRiftViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveRiftViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveRiftViewInterface_Statics::ClassParams = {
		&UArchiveRiftViewInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveRiftViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveRiftViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveRiftViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveRiftViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveRiftViewInterface, 2132657203);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveRiftViewInterface>()
	{
		return UArchiveRiftViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveRiftViewInterface(Z_Construct_UClass_UArchiveRiftViewInterface, &UArchiveRiftViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveRiftViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveRiftViewInterface);
	static FName NAME_UArchiveRiftViewInterface_PlayUnlockingAnimation = FName(TEXT("PlayUnlockingAnimation"));
	void IArchiveRiftViewInterface::Execute_PlayUnlockingAnimation(UObject* O, FArchivesRiftUnlockSequenceData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveRiftViewInterface::StaticClass()));
		ArchiveRiftViewInterface_eventPlayUnlockingAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveRiftViewInterface_PlayUnlockingAnimation);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveRiftViewInterface*)(O->GetNativeInterfaceAddress(UArchiveRiftViewInterface::StaticClass())))
		{
			I->PlayUnlockingAnimation_Implementation(data);
		}
	}
	static FName NAME_UArchiveRiftViewInterface_SetData = FName(TEXT("SetData"));
	void IArchiveRiftViewInterface::Execute_SetData(UObject* O, FArchivesRiftGenericViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveRiftViewInterface::StaticClass()));
		ArchiveRiftViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveRiftViewInterface_SetData);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveRiftViewInterface*)(O->GetNativeInterfaceAddress(UArchiveRiftViewInterface::StaticClass())))
		{
			I->SetData_Implementation(data);
		}
	}
	static FName NAME_UArchiveRiftViewInterface_SetImagePreviewAreaData = FName(TEXT("SetImagePreviewAreaData"));
	void IArchiveRiftViewInterface::Execute_SetImagePreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveRiftViewInterface::StaticClass()));
		ArchiveRiftViewInterface_eventSetImagePreviewAreaData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveRiftViewInterface_SetImagePreviewAreaData);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveRiftViewInterface*)(O->GetNativeInterfaceAddress(UArchiveRiftViewInterface::StaticClass())))
		{
			I->SetImagePreviewAreaData_Implementation(viewData);
		}
	}
	static FName NAME_UArchiveRiftViewInterface_SetMatchmakingSoftlockState = FName(TEXT("SetMatchmakingSoftlockState"));
	void IArchiveRiftViewInterface::Execute_SetMatchmakingSoftlockState(UObject* O, bool isInMatchmakingSoftlock)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveRiftViewInterface::StaticClass()));
		ArchiveRiftViewInterface_eventSetMatchmakingSoftlockState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveRiftViewInterface_SetMatchmakingSoftlockState);
		if (Func)
		{
			Parms.isInMatchmakingSoftlock=isInMatchmakingSoftlock;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveRiftViewInterface*)(O->GetNativeInterfaceAddress(UArchiveRiftViewInterface::StaticClass())))
		{
			I->SetMatchmakingSoftlockState_Implementation(isInMatchmakingSoftlock);
		}
	}
	static FName NAME_UArchiveRiftViewInterface_SetRewardTiersData = FName(TEXT("SetRewardTiersData"));
	void IArchiveRiftViewInterface::Execute_SetRewardTiersData(UObject* O, TArray<FArchiveRiftTierRewardsViewData> const& riftTiersData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveRiftViewInterface::StaticClass()));
		ArchiveRiftViewInterface_eventSetRewardTiersData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveRiftViewInterface_SetRewardTiersData);
		if (Func)
		{
			Parms.riftTiersData=riftTiersData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveRiftViewInterface*)(O->GetNativeInterfaceAddress(UArchiveRiftViewInterface::StaticClass())))
		{
			I->SetRewardTiersData_Implementation(riftTiersData);
		}
	}
	static FName NAME_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData = FName(TEXT("SetRiftFragmentTooltipViewData"));
	void IArchiveRiftViewInterface::Execute_SetRiftFragmentTooltipViewData(UObject* O, FCurrencyProgressionTooltipViewData const& RiftFragmentTooltipViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveRiftViewInterface::StaticClass()));
		ArchiveRiftViewInterface_eventSetRiftFragmentTooltipViewData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData);
		if (Func)
		{
			Parms.RiftFragmentTooltipViewData=RiftFragmentTooltipViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveRiftViewInterface*)(O->GetNativeInterfaceAddress(UArchiveRiftViewInterface::StaticClass())))
		{
			I->SetRiftFragmentTooltipViewData_Implementation(RiftFragmentTooltipViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
