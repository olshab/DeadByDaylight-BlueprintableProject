// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveJournalSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveJournalSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveJournalSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveJournalSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnAutoplayChanged)
	{
		P_GET_UBOOL(Z_Param_autoplayActive);
		P_GET_PROPERTY(FIntProperty,Z_Param_entryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAutoplayChanged(Z_Param_autoplayActive,Z_Param_entryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnClickPlayButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_entryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickPlayButton(Z_Param_entryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnEntrySelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_entryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntrySelected(Z_Param_entryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnImageViewerVoiceOverAutoplay)
	{
		P_GET_UBOOL(Z_Param_autoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageViewerVoiceOverAutoplay(Z_Param_autoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnImageViewerVoiceOverPlayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageViewerVoiceOverPlayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnPlayCinematic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayCinematic(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnShowImageViewer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowImageViewer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveJournalSubPresenter::execOnVignetteSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_vignetteId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVignetteSelected(Z_Param_vignetteId);
		P_NATIVE_END;
	}
	void UArchiveJournalSubPresenter::StaticRegisterNativesUArchiveJournalSubPresenter()
	{
		UClass* Class = UArchiveJournalSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAutoplayChanged", &UArchiveJournalSubPresenter::execOnAutoplayChanged },
			{ "OnClickPlayButton", &UArchiveJournalSubPresenter::execOnClickPlayButton },
			{ "OnEntrySelected", &UArchiveJournalSubPresenter::execOnEntrySelected },
			{ "OnImageViewerVoiceOverAutoplay", &UArchiveJournalSubPresenter::execOnImageViewerVoiceOverAutoplay },
			{ "OnImageViewerVoiceOverPlayed", &UArchiveJournalSubPresenter::execOnImageViewerVoiceOverPlayed },
			{ "OnPlayCinematic", &UArchiveJournalSubPresenter::execOnPlayCinematic },
			{ "OnShowImageViewer", &UArchiveJournalSubPresenter::execOnShowImageViewer },
			{ "OnVignetteSelected", &UArchiveJournalSubPresenter::execOnVignetteSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics
	{
		struct ArchiveJournalSubPresenter_eventOnAutoplayChanged_Parms
		{
			bool autoplayActive;
			int32 entryIndex;
		};
		static void NewProp_autoplayActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplayActive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::NewProp_autoplayActive_SetBit(void* Obj)
	{
		((ArchiveJournalSubPresenter_eventOnAutoplayChanged_Parms*)Obj)->autoplayActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::NewProp_autoplayActive = { "autoplayActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalSubPresenter_eventOnAutoplayChanged_Parms), &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::NewProp_autoplayActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::NewProp_entryIndex = { "entryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalSubPresenter_eventOnAutoplayChanged_Parms, entryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::NewProp_autoplayActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::NewProp_entryIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnAutoplayChanged", nullptr, nullptr, sizeof(ArchiveJournalSubPresenter_eventOnAutoplayChanged_Parms), Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics
	{
		struct ArchiveJournalSubPresenter_eventOnClickPlayButton_Parms
		{
			int32 entryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::NewProp_entryIndex = { "entryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalSubPresenter_eventOnClickPlayButton_Parms, entryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::NewProp_entryIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnClickPlayButton", nullptr, nullptr, sizeof(ArchiveJournalSubPresenter_eventOnClickPlayButton_Parms), Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics
	{
		struct ArchiveJournalSubPresenter_eventOnEntrySelected_Parms
		{
			int32 entryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::NewProp_entryIndex = { "entryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalSubPresenter_eventOnEntrySelected_Parms, entryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::NewProp_entryIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnEntrySelected", nullptr, nullptr, sizeof(ArchiveJournalSubPresenter_eventOnEntrySelected_Parms), Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics
	{
		struct ArchiveJournalSubPresenter_eventOnImageViewerVoiceOverAutoplay_Parms
		{
			bool autoplay;
		};
		static void NewProp_autoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit(void* Obj)
	{
		((ArchiveJournalSubPresenter_eventOnImageViewerVoiceOverAutoplay_Parms*)Obj)->autoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay = { "autoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveJournalSubPresenter_eventOnImageViewerVoiceOverAutoplay_Parms), &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnImageViewerVoiceOverAutoplay", nullptr, nullptr, sizeof(ArchiveJournalSubPresenter_eventOnImageViewerVoiceOverAutoplay_Parms), Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnImageViewerVoiceOverPlayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics
	{
		struct ArchiveJournalSubPresenter_eventOnPlayCinematic_Parms
		{
			int32 index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalSubPresenter_eventOnPlayCinematic_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnPlayCinematic", nullptr, nullptr, sizeof(ArchiveJournalSubPresenter_eventOnPlayCinematic_Parms), Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnShowImageViewer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics
	{
		struct ArchiveJournalSubPresenter_eventOnVignetteSelected_Parms
		{
			FString vignetteId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vignetteId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::NewProp_vignetteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::NewProp_vignetteId = { "vignetteId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveJournalSubPresenter_eventOnVignetteSelected_Parms, vignetteId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::NewProp_vignetteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::NewProp_vignetteId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::NewProp_vignetteId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveJournalSubPresenter, nullptr, "OnVignetteSelected", nullptr, nullptr, sizeof(ArchiveJournalSubPresenter_eventOnVignetteSelected_Parms), Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveJournalSubPresenter_NoRegister()
	{
		return UArchiveJournalSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveJournalSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveJournalWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveJournalWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnAutoplayChanged, "OnAutoplayChanged" }, // 2195525144
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnClickPlayButton, "OnClickPlayButton" }, // 1174208795
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnEntrySelected, "OnEntrySelected" }, // 3643129499
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay, "OnImageViewerVoiceOverAutoplay" }, // 1482650336
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed, "OnImageViewerVoiceOverPlayed" }, // 3934338565
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnPlayCinematic, "OnPlayCinematic" }, // 47590446
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnShowImageViewer, "OnShowImageViewer" }, // 3716691747
		{ &Z_Construct_UFunction_UArchiveJournalSubPresenter_OnVignetteSelected, "OnVignetteSelected" }, // 2810801299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveJournalSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::NewProp__archiveJournalWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveJournalSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveJournalSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::NewProp__archiveJournalWidget = { "_archiveJournalWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveJournalSubPresenter, _archiveJournalWidget), Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::NewProp__archiveJournalWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::NewProp__archiveJournalWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::NewProp__archiveJournalWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveJournalSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::ClassParams = {
		&UArchiveJournalSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveJournalSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveJournalSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveJournalSubPresenter, 3683690261);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveJournalSubPresenter>()
	{
		return UArchiveJournalSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveJournalSubPresenter(Z_Construct_UClass_UArchiveJournalSubPresenter, &UArchiveJournalSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveJournalSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveJournalSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
