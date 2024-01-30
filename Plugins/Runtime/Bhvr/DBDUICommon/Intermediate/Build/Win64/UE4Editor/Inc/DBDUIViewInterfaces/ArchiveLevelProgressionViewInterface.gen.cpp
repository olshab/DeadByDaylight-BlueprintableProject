// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveLevelProgressionViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveLevelProgressionViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execGoToNextLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_levelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToNextLevel_Implementation(Z_Param_levelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execPlayRewardsAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRewardsAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execSetActiveLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_levelIndex);
		P_GET_UBOOL(Z_Param_performAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveLevel_Implementation(Z_Param_levelIndex,Z_Param_performAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execSetLevelSelectorEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelSelectorEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execSetLevelSelectorVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelSelectorVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execSetRewardsContainerVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardsContainerVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execSetTomeLevelsData)
	{
		P_GET_TARRAY_REF(UArchiveStoryLevelViewData*,Z_Param_Out_levelsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTomeLevelsData_Implementation(Z_Param_Out_levelsData,Z_Param_selectedLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execSetTomeRewardsData)
	{
		P_GET_TARRAY_REF(FRewardWrapperViewData,Z_Param_Out_rewardsData);
		P_GET_UBOOL(Z_Param_areLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTomeRewardsData_Implementation(Z_Param_Out_rewardsData,Z_Param_areLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveLevelProgressionViewInterface::execUpdateLevelStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_GET_ENUM(EArchivesStoryLevelStatus,Z_Param_status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLevelStatus_Implementation(Z_Param_level,EArchivesStoryLevelStatus(Z_Param_status));
		P_NATIVE_END;
	}
	void IArchiveLevelProgressionViewInterface::GoToNextLevel(int32 levelIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GoToNextLevel instead.");
	}
	void IArchiveLevelProgressionViewInterface::PlayRewardsAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayRewardsAnimation instead.");
	}
	void IArchiveLevelProgressionViewInterface::SetActiveLevel(int32 levelIndex, bool performAction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActiveLevel instead.");
	}
	void IArchiveLevelProgressionViewInterface::SetLevelSelectorEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLevelSelectorEnabled instead.");
	}
	void IArchiveLevelProgressionViewInterface::SetLevelSelectorVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLevelSelectorVisibility instead.");
	}
	void IArchiveLevelProgressionViewInterface::SetRewardsContainerVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRewardsContainerVisibility instead.");
	}
	void IArchiveLevelProgressionViewInterface::SetTomeLevelsData(TArray<UArchiveStoryLevelViewData*> const& levelsData, int32 selectedLevel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTomeLevelsData instead.");
	}
	void IArchiveLevelProgressionViewInterface::SetTomeRewardsData(TArray<FRewardWrapperViewData> const& rewardsData, bool areLocked)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTomeRewardsData instead.");
	}
	void IArchiveLevelProgressionViewInterface::UpdateLevelStatus(int32 level, EArchivesStoryLevelStatus status)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateLevelStatus instead.");
	}
	void UArchiveLevelProgressionViewInterface::StaticRegisterNativesUArchiveLevelProgressionViewInterface()
	{
		UClass* Class = UArchiveLevelProgressionViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoToNextLevel", &IArchiveLevelProgressionViewInterface::execGoToNextLevel },
			{ "PlayRewardsAnimation", &IArchiveLevelProgressionViewInterface::execPlayRewardsAnimation },
			{ "SetActiveLevel", &IArchiveLevelProgressionViewInterface::execSetActiveLevel },
			{ "SetLevelSelectorEnabled", &IArchiveLevelProgressionViewInterface::execSetLevelSelectorEnabled },
			{ "SetLevelSelectorVisibility", &IArchiveLevelProgressionViewInterface::execSetLevelSelectorVisibility },
			{ "SetRewardsContainerVisibility", &IArchiveLevelProgressionViewInterface::execSetRewardsContainerVisibility },
			{ "SetTomeLevelsData", &IArchiveLevelProgressionViewInterface::execSetTomeLevelsData },
			{ "SetTomeRewardsData", &IArchiveLevelProgressionViewInterface::execSetTomeRewardsData },
			{ "UpdateLevelStatus", &IArchiveLevelProgressionViewInterface::execUpdateLevelStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventGoToNextLevel_Parms, levelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::NewProp_levelIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "GoToNextLevel", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventGoToNextLevel_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "PlayRewardsAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static void NewProp_performAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_performAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventSetActiveLevel_Parms, levelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::NewProp_performAction_SetBit(void* Obj)
	{
		((ArchiveLevelProgressionViewInterface_eventSetActiveLevel_Parms*)Obj)->performAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::NewProp_performAction = { "performAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveLevelProgressionViewInterface_eventSetActiveLevel_Parms), &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::NewProp_performAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::NewProp_levelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::NewProp_performAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "SetActiveLevel", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventSetActiveLevel_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enabled_MetaData[];
#endif
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveLevelProgressionViewInterface_eventSetLevelSelectorEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveLevelProgressionViewInterface_eventSetLevelSelectorEnabled_Parms), &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "SetLevelSelectorEnabled", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventSetLevelSelectorEnabled_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveLevelProgressionViewInterface_eventSetLevelSelectorVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveLevelProgressionViewInterface_eventSetLevelSelectorVisibility_Parms), &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "SetLevelSelectorVisibility", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventSetLevelSelectorVisibility_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveLevelProgressionViewInterface_eventSetRewardsContainerVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveLevelProgressionViewInterface_eventSetRewardsContainerVisibility_Parms), &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "SetRewardsContainerVisibility", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventSetRewardsContainerVisibility_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_levelsData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData_Inner = { "levelsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData = { "levelsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventSetTomeLevelsData_Parms, levelsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_selectedLevel = { "selectedLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventSetTomeLevelsData_Parms, selectedLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_levelsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::NewProp_selectedLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "SetTomeLevelsData", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventSetTomeLevelsData_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewardsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rewardsData;
		static void NewProp_areLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_areLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData_Inner = { "rewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData = { "rewardsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventSetTomeRewardsData_Parms, rewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData_MetaData)) };
	void Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_areLocked_SetBit(void* Obj)
	{
		((ArchiveLevelProgressionViewInterface_eventSetTomeRewardsData_Parms*)Obj)->areLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_areLocked = { "areLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveLevelProgressionViewInterface_eventSetTomeRewardsData_Parms), &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_areLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_rewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::NewProp_areLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "SetTomeRewardsData", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventSetTomeRewardsData_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventUpdateLevelStatus_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveLevelProgressionViewInterface_eventUpdateLevelStatus_Parms, status), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::NewProp_status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::NewProp_status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveLevelProgressionViewInterface, nullptr, "UpdateLevelStatus", nullptr, nullptr, sizeof(ArchiveLevelProgressionViewInterface_eventUpdateLevelStatus_Parms), Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister()
	{
		return UArchiveLevelProgressionViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_GoToNextLevel, "GoToNextLevel" }, // 920966617
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation, "PlayRewardsAnimation" }, // 1769101583
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetActiveLevel, "SetActiveLevel" }, // 4254966418
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled, "SetLevelSelectorEnabled" }, // 752780790
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility, "SetLevelSelectorVisibility" }, // 3180908119
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility, "SetRewardsContainerVisibility" }, // 2966737753
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeLevelsData, "SetTomeLevelsData" }, // 2976708575
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_SetTomeRewardsData, "SetTomeRewardsData" }, // 1559957841
		{ &Z_Construct_UFunction_UArchiveLevelProgressionViewInterface_UpdateLevelStatus, "UpdateLevelStatus" }, // 3815262278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveLevelProgressionViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveLevelProgressionViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::ClassParams = {
		&UArchiveLevelProgressionViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveLevelProgressionViewInterface, 168015326);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveLevelProgressionViewInterface>()
	{
		return UArchiveLevelProgressionViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveLevelProgressionViewInterface(Z_Construct_UClass_UArchiveLevelProgressionViewInterface, &UArchiveLevelProgressionViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveLevelProgressionViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveLevelProgressionViewInterface);
	static FName NAME_UArchiveLevelProgressionViewInterface_GoToNextLevel = FName(TEXT("GoToNextLevel"));
	void IArchiveLevelProgressionViewInterface::Execute_GoToNextLevel(UObject* O, int32 levelIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventGoToNextLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_GoToNextLevel);
		if (Func)
		{
			Parms.levelIndex=levelIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->GoToNextLevel_Implementation(levelIndex);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation = FName(TEXT("PlayRewardsAnimation"));
	void IArchiveLevelProgressionViewInterface::Execute_PlayRewardsAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_PlayRewardsAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->PlayRewardsAnimation_Implementation();
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_SetActiveLevel = FName(TEXT("SetActiveLevel"));
	void IArchiveLevelProgressionViewInterface::Execute_SetActiveLevel(UObject* O, int32 levelIndex, bool performAction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventSetActiveLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_SetActiveLevel);
		if (Func)
		{
			Parms.levelIndex=levelIndex;
			Parms.performAction=performAction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->SetActiveLevel_Implementation(levelIndex,performAction);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled = FName(TEXT("SetLevelSelectorEnabled"));
	void IArchiveLevelProgressionViewInterface::Execute_SetLevelSelectorEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventSetLevelSelectorEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->SetLevelSelectorEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility = FName(TEXT("SetLevelSelectorVisibility"));
	void IArchiveLevelProgressionViewInterface::Execute_SetLevelSelectorVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventSetLevelSelectorVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->SetLevelSelectorVisibility_Implementation(isVisible);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility = FName(TEXT("SetRewardsContainerVisibility"));
	void IArchiveLevelProgressionViewInterface::Execute_SetRewardsContainerVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventSetRewardsContainerVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->SetRewardsContainerVisibility_Implementation(isVisible);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_SetTomeLevelsData = FName(TEXT("SetTomeLevelsData"));
	void IArchiveLevelProgressionViewInterface::Execute_SetTomeLevelsData(UObject* O, TArray<UArchiveStoryLevelViewData*> const& levelsData, int32 selectedLevel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventSetTomeLevelsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_SetTomeLevelsData);
		if (Func)
		{
			Parms.levelsData=levelsData;
			Parms.selectedLevel=selectedLevel;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->SetTomeLevelsData_Implementation(levelsData,selectedLevel);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_SetTomeRewardsData = FName(TEXT("SetTomeRewardsData"));
	void IArchiveLevelProgressionViewInterface::Execute_SetTomeRewardsData(UObject* O, TArray<FRewardWrapperViewData> const& rewardsData, bool areLocked)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventSetTomeRewardsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_SetTomeRewardsData);
		if (Func)
		{
			Parms.rewardsData=rewardsData;
			Parms.areLocked=areLocked;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->SetTomeRewardsData_Implementation(rewardsData,areLocked);
		}
	}
	static FName NAME_UArchiveLevelProgressionViewInterface_UpdateLevelStatus = FName(TEXT("UpdateLevelStatus"));
	void IArchiveLevelProgressionViewInterface::Execute_UpdateLevelStatus(UObject* O, int32 level, EArchivesStoryLevelStatus status)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveLevelProgressionViewInterface::StaticClass()));
		ArchiveLevelProgressionViewInterface_eventUpdateLevelStatus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveLevelProgressionViewInterface_UpdateLevelStatus);
		if (Func)
		{
			Parms.level=level;
			Parms.status=status;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveLevelProgressionViewInterface*)(O->GetNativeInterfaceAddress(UArchiveLevelProgressionViewInterface::StaticClass())))
		{
			I->UpdateLevelStatus_Implementation(level,status);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
