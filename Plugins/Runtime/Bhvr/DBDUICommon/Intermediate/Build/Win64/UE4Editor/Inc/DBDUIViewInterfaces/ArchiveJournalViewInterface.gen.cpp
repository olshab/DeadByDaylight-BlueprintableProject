// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveJournalViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveJournalViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveJournalViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteViewData();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execOnImageViewerVoiceOverAutoplay)
	{
		P_GET_UBOOL(Z_Param_autoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageViewerVoiceOverAutoplay_Implementation(Z_Param_autoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execOnImageViewerVoiceOverPlayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageViewerVoiceOverPlayed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetArrowButtonEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrowButtonEnabled_Implementation(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetCinematicButtonsEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCinematicButtonsEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetEntryData)
	{
		P_GET_STRUCT_REF(FArchivesVignetteEntryViewData,Z_Param_Out_entryViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntryData_Implementation(Z_Param_Out_entryViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetVignetteData)
	{
		P_GET_STRUCT_REF(FArchivesVignetteViewData,Z_Param_Out_vignetteViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVignetteData_Implementation(Z_Param_Out_vignetteViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetVignetteInputsEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVignetteInputsEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetVignetteList)
	{
		P_GET_TARRAY_REF(FArchivesVignetteViewData,Z_Param_Out_vignetteDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVignetteList_Implementation(Z_Param_Out_vignetteDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetVoiceOverAutoplay)
	{
		P_GET_UBOOL(Z_Param_voiceOverAutoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceOverAutoplay_Implementation(Z_Param_voiceOverAutoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveJournalViewInterface::execSetVoiceOverPlaying)
	{
		P_GET_UBOOL(Z_Param_voiceOverPlaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceOverPlaying_Implementation(Z_Param_voiceOverPlaying);
		P_NATIVE_END;
	}
	void IArchiveJournalViewInterface::OnImageViewerVoiceOverAutoplay(bool autoplay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnImageViewerVoiceOverAutoplay instead.");
	}
	void IArchiveJournalViewInterface::OnImageViewerVoiceOverPlayed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnImageViewerVoiceOverPlayed instead.");
	}
	void IArchiveJournalViewInterface::SetArrowButtonEnabled(bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetArrowButtonEnabled instead.");
	}
	void IArchiveJournalViewInterface::SetCinematicButtonsEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCinematicButtonsEnabled instead.");
	}
	void IArchiveJournalViewInterface::SetEntryData(FArchivesVignetteEntryViewData const& entryViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEntryData instead.");
	}
	void IArchiveJournalViewInterface::SetVignetteData(FArchivesVignetteViewData const& vignetteViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVignetteData instead.");
	}
	void IArchiveJournalViewInterface::SetVignetteInputsEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVignetteInputsEnabled instead.");
	}
	void IArchiveJournalViewInterface::SetVignetteList(TArray<FArchivesVignetteViewData> const& vignetteDataList)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVignetteList instead.");
	}
	void IArchiveJournalViewInterface::SetVoiceOverAutoplay(bool voiceOverAutoplay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVoiceOverAutoplay instead.");
	}
	void IArchiveJournalViewInterface::SetVoiceOverPlaying(bool voiceOverPlaying)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVoiceOverPlaying instead.");
	}
	void UArchiveJournalViewInterface::StaticRegisterNativesUArchiveJournalViewInterface()
	{
		UClass* Class = UArchiveJournalViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnImageViewerVoiceOverAutoplay", &IArchiveJournalViewInterface::execOnImageViewerVoiceOverAutoplay },
			{ "OnImageViewerVoiceOverPlayed", &IArchiveJournalViewInterface::execOnImageViewerVoiceOverPlayed },
			{ "SetArrowButtonEnabled", &IArchiveJournalViewInterface::execSetArrowButtonEnabled },
			{ "SetCinematicButtonsEnabled", &IArchiveJournalViewInterface::execSetCinematicButtonsEnabled },
			{ "SetEntryData", &IArchiveJournalViewInterface::execSetEntryData },
			{ "SetVignetteData", &IArchiveJournalViewInterface::execSetVignetteData },
			{ "SetVignetteInputsEnabled", &IArchiveJournalViewInterface::execSetVignetteInputsEnabled },
			{ "SetVignetteList", &IArchiveJournalViewInterface::execSetVignetteList },
			{ "SetVoiceOverAutoplay", &IArchiveJournalViewInterface::execSetVoiceOverAutoplay },
			{ "SetVoiceOverPlaying", &IArchiveJournalViewInterface::execSetVoiceOverPlaying },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics
	{
		static void NewProp_autoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit(void* Obj)
	{
		((ArchiveJournalViewInterface_eventOnImageViewerVoiceOverAutoplay_Parms*)Obj)->autoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay = { "autoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalViewInterface_eventOnImageViewerVoiceOverAutoplay_Parms), &Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "OnImageViewerVoiceOverAutoplay", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventOnImageViewerVoiceOverAutoplay_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "OnImageViewerVoiceOverPlayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEnabled_MetaData[];
#endif
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((ArchiveJournalViewInterface_eventSetArrowButtonEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalViewInterface_eventSetArrowButtonEnabled_Parms), &Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetArrowButtonEnabled", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetArrowButtonEnabled_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveJournalViewInterface_eventSetCinematicButtonsEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalViewInterface_eventSetCinematicButtonsEnabled_Parms), &Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetCinematicButtonsEnabled", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetCinematicButtonsEnabled_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entryViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_entryViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::NewProp_entryViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::NewProp_entryViewData = { "entryViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalViewInterface_eventSetEntryData_Parms, entryViewData), Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::NewProp_entryViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::NewProp_entryViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::NewProp_entryViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetEntryData", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetEntryData_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vignetteViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::NewProp_vignetteViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::NewProp_vignetteViewData = { "vignetteViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalViewInterface_eventSetVignetteData_Parms, vignetteViewData), Z_Construct_UScriptStruct_FArchivesVignetteViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::NewProp_vignetteViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::NewProp_vignetteViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::NewProp_vignetteViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetVignetteData", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetVignetteData_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveJournalViewInterface_eventSetVignetteInputsEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalViewInterface_eventSetVignetteInputsEnabled_Parms), &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetVignetteInputsEnabled", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetVignetteInputsEnabled_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vignetteDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vignetteDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList_Inner = { "vignetteDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchivesVignetteViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList = { "vignetteDataList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalViewInterface_eventSetVignetteList_Parms, vignetteDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::NewProp_vignetteDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetVignetteList", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetVignetteList_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics
	{
		static void NewProp_voiceOverAutoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_voiceOverAutoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay_SetBit(void* Obj)
	{
		((ArchiveJournalViewInterface_eventSetVoiceOverAutoplay_Parms*)Obj)->voiceOverAutoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay = { "voiceOverAutoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalViewInterface_eventSetVoiceOverAutoplay_Parms), &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetVoiceOverAutoplay", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetVoiceOverAutoplay_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics
	{
		static void NewProp_voiceOverPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_voiceOverPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying_SetBit(void* Obj)
	{
		((ArchiveJournalViewInterface_eventSetVoiceOverPlaying_Parms*)Obj)->voiceOverPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying = { "voiceOverPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalViewInterface_eventSetVoiceOverPlaying_Parms), &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalViewInterface, nullptr, "SetVoiceOverPlaying", nullptr, nullptr, sizeof(ArchiveJournalViewInterface_eventSetVoiceOverPlaying_Parms), Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister()
	{
		return UArchiveJournalViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveJournalViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveJournalViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveJournalViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay, "OnImageViewerVoiceOverAutoplay" }, // 1787287763
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed, "OnImageViewerVoiceOverPlayed" }, // 4144879731
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetArrowButtonEnabled, "SetArrowButtonEnabled" }, // 2021368648
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetCinematicButtonsEnabled, "SetCinematicButtonsEnabled" }, // 3810294909
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetEntryData, "SetEntryData" }, // 1921630979
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteData, "SetVignetteData" }, // 1002512852
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteInputsEnabled, "SetVignetteInputsEnabled" }, // 2401100556
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVignetteList, "SetVignetteList" }, // 1992224511
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverAutoplay, "SetVoiceOverAutoplay" }, // 88862260
		{ &Z_Construct_UFunction_UArchiveJournalViewInterface_SetVoiceOverPlaying, "SetVoiceOverPlaying" }, // 3048295955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveJournalViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveJournalViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveJournalViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveJournalViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveJournalViewInterface_Statics::ClassParams = {
		&UArchiveJournalViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveJournalViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveJournalViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveJournalViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveJournalViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveJournalViewInterface, 254704576);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveJournalViewInterface>()
	{
		return UArchiveJournalViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveJournalViewInterface(Z_Construct_UClass_UArchiveJournalViewInterface, &UArchiveJournalViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveJournalViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveJournalViewInterface);
	static FName NAME_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay = FName(TEXT("OnImageViewerVoiceOverAutoplay"));
	void IArchiveJournalViewInterface::Execute_OnImageViewerVoiceOverAutoplay(UObject* O, bool autoplay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventOnImageViewerVoiceOverAutoplay_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay);
		if (Func)
		{
			Parms.autoplay=autoplay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->OnImageViewerVoiceOverAutoplay_Implementation(autoplay);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed = FName(TEXT("OnImageViewerVoiceOverPlayed"));
	void IArchiveJournalViewInterface::Execute_OnImageViewerVoiceOverPlayed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->OnImageViewerVoiceOverPlayed_Implementation();
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetArrowButtonEnabled = FName(TEXT("SetArrowButtonEnabled"));
	void IArchiveJournalViewInterface::Execute_SetArrowButtonEnabled(UObject* O, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetArrowButtonEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetArrowButtonEnabled);
		if (Func)
		{
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetArrowButtonEnabled_Implementation(isEnabled);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetCinematicButtonsEnabled = FName(TEXT("SetCinematicButtonsEnabled"));
	void IArchiveJournalViewInterface::Execute_SetCinematicButtonsEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetCinematicButtonsEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetCinematicButtonsEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetCinematicButtonsEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetEntryData = FName(TEXT("SetEntryData"));
	void IArchiveJournalViewInterface::Execute_SetEntryData(UObject* O, FArchivesVignetteEntryViewData const& entryViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetEntryData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetEntryData);
		if (Func)
		{
			Parms.entryViewData=entryViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetEntryData_Implementation(entryViewData);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetVignetteData = FName(TEXT("SetVignetteData"));
	void IArchiveJournalViewInterface::Execute_SetVignetteData(UObject* O, FArchivesVignetteViewData const& vignetteViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetVignetteData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetVignetteData);
		if (Func)
		{
			Parms.vignetteViewData=vignetteViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetVignetteData_Implementation(vignetteViewData);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetVignetteInputsEnabled = FName(TEXT("SetVignetteInputsEnabled"));
	void IArchiveJournalViewInterface::Execute_SetVignetteInputsEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetVignetteInputsEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetVignetteInputsEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetVignetteInputsEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetVignetteList = FName(TEXT("SetVignetteList"));
	void IArchiveJournalViewInterface::Execute_SetVignetteList(UObject* O, TArray<FArchivesVignetteViewData> const& vignetteDataList)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetVignetteList_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetVignetteList);
		if (Func)
		{
			Parms.vignetteDataList=vignetteDataList;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetVignetteList_Implementation(vignetteDataList);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetVoiceOverAutoplay = FName(TEXT("SetVoiceOverAutoplay"));
	void IArchiveJournalViewInterface::Execute_SetVoiceOverAutoplay(UObject* O, bool voiceOverAutoplay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetVoiceOverAutoplay_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetVoiceOverAutoplay);
		if (Func)
		{
			Parms.voiceOverAutoplay=voiceOverAutoplay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetVoiceOverAutoplay_Implementation(voiceOverAutoplay);
		}
	}
	static FName NAME_UArchiveJournalViewInterface_SetVoiceOverPlaying = FName(TEXT("SetVoiceOverPlaying"));
	void IArchiveJournalViewInterface::Execute_SetVoiceOverPlaying(UObject* O, bool voiceOverPlaying)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveJournalViewInterface::StaticClass()));
		ArchiveJournalViewInterface_eventSetVoiceOverPlaying_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveJournalViewInterface_SetVoiceOverPlaying);
		if (Func)
		{
			Parms.voiceOverPlaying=voiceOverPlaying;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveJournalViewInterface*)(O->GetNativeInterfaceAddress(UArchiveJournalViewInterface::StaticClass())))
		{
			I->SetVoiceOverPlaying_Implementation(voiceOverPlaying);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
