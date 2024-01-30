// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveQuestMapSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveQuestMapSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveQuestMapSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveQuestMapSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execNavigateToNextLevelAfterUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateToNextLevelAfterUnlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execOnLevelSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_levelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelSelected(Z_Param_levelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execOnNodeSelected)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_nodeId);
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeSelected(Z_Param_Out_nodeId,EPlayerRole(Z_Param_role),Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execOnQuestNodeHovered)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestNodeHovered(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execOnQuestNodeUnhovered)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestNodeUnhovered(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execOnTomeLevelRewardAnimationDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTomeLevelRewardAnimationDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execOnTomeMapCreated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTomeMapCreated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveQuestMapSubPresenter::execUpdateTomeLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTomeLevels();
		P_NATIVE_END;
	}
	void UArchiveQuestMapSubPresenter::StaticRegisterNativesUArchiveQuestMapSubPresenter()
	{
		UClass* Class = UArchiveQuestMapSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentLevel", &UArchiveQuestMapSubPresenter::execGetCurrentLevel },
			{ "NavigateToNextLevelAfterUnlock", &UArchiveQuestMapSubPresenter::execNavigateToNextLevelAfterUnlock },
			{ "OnLevelSelected", &UArchiveQuestMapSubPresenter::execOnLevelSelected },
			{ "OnNodeSelected", &UArchiveQuestMapSubPresenter::execOnNodeSelected },
			{ "OnQuestNodeHovered", &UArchiveQuestMapSubPresenter::execOnQuestNodeHovered },
			{ "OnQuestNodeUnhovered", &UArchiveQuestMapSubPresenter::execOnQuestNodeUnhovered },
			{ "OnTomeLevelRewardAnimationDone", &UArchiveQuestMapSubPresenter::execOnTomeLevelRewardAnimationDone },
			{ "OnTomeMapCreated", &UArchiveQuestMapSubPresenter::execOnTomeMapCreated },
			{ "UpdateTomeLevels", &UArchiveQuestMapSubPresenter::execUpdateTomeLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "GetCurrentLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "NavigateToNextLevelAfterUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics
	{
		struct ArchiveQuestMapSubPresenter_eventOnLevelSelected_Parms
		{
			int32 levelIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::NewProp_levelIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapSubPresenter_eventOnLevelSelected_Parms, levelIndex), METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::NewProp_levelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::NewProp_levelIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::NewProp_levelIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "OnLevelSelected", nullptr, nullptr, sizeof(ArchiveQuestMapSubPresenter_eventOnLevelSelected_Parms), Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics
	{
		struct ArchiveQuestMapSubPresenter_eventOnNodeSelected_Parms
		{
			FName nodeId;
			EPlayerRole role;
			FVector2D position;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_nodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_nodeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapSubPresenter_eventOnNodeSelected_Parms, nodeId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_nodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_nodeId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapSubPresenter_eventOnNodeSelected_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapSubPresenter_eventOnNodeSelected_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_nodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "OnNodeSelected", nullptr, nullptr, sizeof(ArchiveQuestMapSubPresenter_eventOnNodeSelected_Parms), Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics
	{
		struct ArchiveQuestMapSubPresenter_eventOnQuestNodeHovered_Parms
		{
			EPlayerRole role;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapSubPresenter_eventOnQuestNodeHovered_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "OnQuestNodeHovered", nullptr, nullptr, sizeof(ArchiveQuestMapSubPresenter_eventOnQuestNodeHovered_Parms), Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics
	{
		struct ArchiveQuestMapSubPresenter_eventOnQuestNodeUnhovered_Parms
		{
			EPlayerRole role;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveQuestMapSubPresenter_eventOnQuestNodeUnhovered_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "OnQuestNodeUnhovered", nullptr, nullptr, sizeof(ArchiveQuestMapSubPresenter_eventOnQuestNodeUnhovered_Parms), Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "OnTomeLevelRewardAnimationDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "OnTomeMapCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter, nullptr, "UpdateTomeLevels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveQuestMapSubPresenter_NoRegister()
	{
		return UArchiveQuestMapSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveQuestMapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveQuestMapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveLevelProgressionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveLevelProgressionWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__storyLevelStatusCache_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__storyLevelStatusCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storyLevelStatusCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__storyLevelStatusCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_GetCurrentLevel, "GetCurrentLevel" }, // 2876750647
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock, "NavigateToNextLevelAfterUnlock" }, // 3737812973
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnLevelSelected, "OnLevelSelected" }, // 2676409982
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnNodeSelected, "OnNodeSelected" }, // 1943860903
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeHovered, "OnQuestNodeHovered" }, // 27192808
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered, "OnQuestNodeUnhovered" }, // 1579479544
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone, "OnTomeLevelRewardAnimationDone" }, // 3115052886
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_OnTomeMapCreated, "OnTomeMapCreated" }, // 1160606370
		{ &Z_Construct_UFunction_UArchiveQuestMapSubPresenter_UpdateTomeLevels, "UpdateTomeLevels" }, // 2030724381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveQuestMapSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveQuestMapWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveQuestMapSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveQuestMapWidget = { "_archiveQuestMapWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveQuestMapSubPresenter, _archiveQuestMapWidget), Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveQuestMapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveQuestMapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveLevelProgressionWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveQuestMapSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveLevelProgressionWidget = { "_archiveLevelProgressionWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveQuestMapSubPresenter, _archiveLevelProgressionWidget), Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveLevelProgressionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveLevelProgressionWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_Inner = { "_storyLevelStatusCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveQuestMapSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveQuestMapSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache = { "_storyLevelStatusCache", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveQuestMapSubPresenter, _storyLevelStatusCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveQuestMapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__archiveLevelProgressionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::NewProp__storyLevelStatusCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveQuestMapSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::ClassParams = {
		&UArchiveQuestMapSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveQuestMapSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveQuestMapSubPresenter, 62547869);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveQuestMapSubPresenter>()
	{
		return UArchiveQuestMapSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveQuestMapSubPresenter(Z_Construct_UClass_UArchiveQuestMapSubPresenter, &UArchiveQuestMapSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveQuestMapSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveQuestMapSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
