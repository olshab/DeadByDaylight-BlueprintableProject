// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveMenuPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveMenuPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveMenuPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveMenuPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveTomeSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveRiftSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveCompendiumSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnChallengeReminderClicked)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChallengeReminderClicked(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnChallengeReminderSlotSelected)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChallengeReminderSlotSelected(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnHideImageViewer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideImageViewer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnInfoClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInfoClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnMenuTabSelected)
	{
		P_GET_ENUM(EArchiveMenuState,Z_Param_menuState);
		P_GET_UBOOL(Z_Param_alreadySelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(EArchiveMenuState(Z_Param_menuState),Z_Param_alreadySelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnShowImageViewer)
	{
		P_GET_UBOOL(Z_Param_voiceOverIsPlaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowImageViewer(Z_Param_voiceOverIsPlaying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveMenuPresenter::execOnSlotSelectorClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotSelectorClosed();
		P_NATIVE_END;
	}
	void UArchiveMenuPresenter::StaticRegisterNativesUArchiveMenuPresenter()
	{
		UClass* Class = UArchiveMenuPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackAction", &UArchiveMenuPresenter::execOnBackAction },
			{ "OnChallengeReminderClicked", &UArchiveMenuPresenter::execOnChallengeReminderClicked },
			{ "OnChallengeReminderSlotSelected", &UArchiveMenuPresenter::execOnChallengeReminderSlotSelected },
			{ "OnHideImageViewer", &UArchiveMenuPresenter::execOnHideImageViewer },
			{ "OnInfoClicked", &UArchiveMenuPresenter::execOnInfoClicked },
			{ "OnMenuTabSelected", &UArchiveMenuPresenter::execOnMenuTabSelected },
			{ "OnShowImageViewer", &UArchiveMenuPresenter::execOnShowImageViewer },
			{ "OnSlotSelectorClosed", &UArchiveMenuPresenter::execOnSlotSelectorClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics
	{
		struct ArchiveMenuPresenter_eventOnChallengeReminderClicked_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuPresenter_eventOnChallengeReminderClicked_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnChallengeReminderClicked", nullptr, nullptr, sizeof(ArchiveMenuPresenter_eventOnChallengeReminderClicked_Parms), Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics
	{
		struct ArchiveMenuPresenter_eventOnChallengeReminderSlotSelected_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuPresenter_eventOnChallengeReminderSlotSelected_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnChallengeReminderSlotSelected", nullptr, nullptr, sizeof(ArchiveMenuPresenter_eventOnChallengeReminderSlotSelected_Parms), Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnHideImageViewer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnInfoClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics
	{
		struct ArchiveMenuPresenter_eventOnMenuTabSelected_Parms
		{
			EArchiveMenuState menuState;
			bool alreadySelected;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static void NewProp_alreadySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alreadySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuPresenter_eventOnMenuTabSelected_Parms, menuState), Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected_SetBit(void* Obj)
	{
		((ArchiveMenuPresenter_eventOnMenuTabSelected_Parms*)Obj)->alreadySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected = { "alreadySelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuPresenter_eventOnMenuTabSelected_Parms), &Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(ArchiveMenuPresenter_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics
	{
		struct ArchiveMenuPresenter_eventOnShowImageViewer_Parms
		{
			bool voiceOverIsPlaying;
		};
		static void NewProp_voiceOverIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_voiceOverIsPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::NewProp_voiceOverIsPlaying_SetBit(void* Obj)
	{
		((ArchiveMenuPresenter_eventOnShowImageViewer_Parms*)Obj)->voiceOverIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::NewProp_voiceOverIsPlaying = { "voiceOverIsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuPresenter_eventOnShowImageViewer_Parms), &Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::NewProp_voiceOverIsPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::NewProp_voiceOverIsPlaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnShowImageViewer", nullptr, nullptr, sizeof(ArchiveMenuPresenter_eventOnShowImageViewer_Parms), Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuPresenter, nullptr, "OnSlotSelectorClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveMenuPresenter_NoRegister()
	{
		return UArchiveMenuPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveMenuPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArchiveMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveTomeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveTomeSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveRiftSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveRiftSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveCompendiumSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveCompendiumSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeSubPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveMenuPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveMenuPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnBackAction, "OnBackAction" }, // 4038852592
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderClicked, "OnChallengeReminderClicked" }, // 875121764
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnChallengeReminderSlotSelected, "OnChallengeReminderSlotSelected" }, // 1011425501
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnHideImageViewer, "OnHideImageViewer" }, // 347234426
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnInfoClicked, "OnInfoClicked" }, // 2802103714
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnMenuTabSelected, "OnMenuTabSelected" }, // 3858724619
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnShowImageViewer, "OnShowImageViewer" }, // 754914617
		{ &Z_Construct_UFunction_UArchiveMenuPresenter_OnSlotSelectorClosed, "OnSlotSelectorClosed" }, // 2471646214
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveMenuPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp_ArchiveMenuWidgetClass_MetaData[] = {
		{ "Category", "ArchiveMenuPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp_ArchiveMenuWidgetClass = { "ArchiveMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveMenuPresenter, ArchiveMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp_ArchiveMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp_ArchiveMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveTomeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveMenuPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveTomeSubPresenter = { "_archiveTomeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveMenuPresenter, _archiveTomeSubPresenter), Z_Construct_UClass_UArchiveTomeSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveTomeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveTomeSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveRiftSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveMenuPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveRiftSubPresenter = { "_archiveRiftSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveMenuPresenter, _archiveRiftSubPresenter), Z_Construct_UClass_UArchiveRiftSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveRiftSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveRiftSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveCompendiumSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveMenuPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveCompendiumSubPresenter = { "_archiveCompendiumSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveMenuPresenter, _archiveCompendiumSubPresenter), Z_Construct_UClass_UArchiveCompendiumSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveCompendiumSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveCompendiumSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveMenuPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__activeSubPresenter = { "_activeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveMenuPresenter, _activeSubPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveMenuPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp_ArchiveMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveTomeSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveRiftSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__archiveCompendiumSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveMenuPresenter_Statics::NewProp__activeSubPresenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveMenuPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveMenuPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveMenuPresenter_Statics::ClassParams = {
		&UArchiveMenuPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveMenuPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveMenuPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveMenuPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveMenuPresenter, 1915222453);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveMenuPresenter>()
	{
		return UArchiveMenuPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveMenuPresenter(Z_Construct_UClass_UArchiveMenuPresenter, &UArchiveMenuPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveMenuPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveMenuPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
