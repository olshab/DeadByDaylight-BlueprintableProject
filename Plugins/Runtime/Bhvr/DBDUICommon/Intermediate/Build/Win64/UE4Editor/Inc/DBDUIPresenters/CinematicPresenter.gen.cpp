// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/CinematicPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinematicPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UCinematicPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UCinematicPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USubtitlesManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCinematicPresenter::execDBD_ChangeVideoPlaybackMode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ChangeVideoPlaybackMode(Z_Param_mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execDBD_ChangeVideoVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ChangeVideoVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execDBD_StopVideoPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_StopVideoPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execMuteGameAudio)
	{
		P_GET_UBOOL(Z_Param_shouldMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MuteGameAudio(Z_Param_shouldMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execOnPlaybackDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlaybackDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execOnPlaybackStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlaybackStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execOnSubtitlesUpdated)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_subtitles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubtitlesUpdated(Z_Param_Out_subtitles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execOnWidgetFadeInAnimationDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetFadeInAnimationDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicPresenter::execOnWidgetFadeOutAnimationDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetFadeOutAnimationDone();
		P_NATIVE_END;
	}
	void UCinematicPresenter::StaticRegisterNativesUCinematicPresenter()
	{
		UClass* Class = UCinematicPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_ChangeVideoPlaybackMode", &UCinematicPresenter::execDBD_ChangeVideoPlaybackMode },
			{ "DBD_ChangeVideoVolume", &UCinematicPresenter::execDBD_ChangeVideoVolume },
			{ "DBD_StopVideoPlayer", &UCinematicPresenter::execDBD_StopVideoPlayer },
			{ "MuteGameAudio", &UCinematicPresenter::execMuteGameAudio },
			{ "OnPlaybackDone", &UCinematicPresenter::execOnPlaybackDone },
			{ "OnPlaybackStarted", &UCinematicPresenter::execOnPlaybackStarted },
			{ "OnSubtitlesUpdated", &UCinematicPresenter::execOnSubtitlesUpdated },
			{ "OnWidgetFadeInAnimationDone", &UCinematicPresenter::execOnWidgetFadeInAnimationDone },
			{ "OnWidgetFadeOutAnimationDone", &UCinematicPresenter::execOnWidgetFadeOutAnimationDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics
	{
		struct CinematicPresenter_eventDBD_ChangeVideoPlaybackMode_Parms
		{
			FString mode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::NewProp_mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicPresenter_eventDBD_ChangeVideoPlaybackMode_Parms, mode), METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::NewProp_mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::NewProp_mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::NewProp_mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "DBD_ChangeVideoPlaybackMode", nullptr, nullptr, sizeof(CinematicPresenter_eventDBD_ChangeVideoPlaybackMode_Parms), Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics
	{
		struct CinematicPresenter_eventDBD_ChangeVideoVolume_Parms
		{
			float volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicPresenter_eventDBD_ChangeVideoVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "DBD_ChangeVideoVolume", nullptr, nullptr, sizeof(CinematicPresenter_eventDBD_ChangeVideoVolume_Parms), Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "DBD_StopVideoPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics
	{
		struct CinematicPresenter_eventMuteGameAudio_Parms
		{
			bool shouldMute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shouldMute_MetaData[];
#endif
		static void NewProp_shouldMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute_SetBit(void* Obj)
	{
		((CinematicPresenter_eventMuteGameAudio_Parms*)Obj)->shouldMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute = { "shouldMute", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CinematicPresenter_eventMuteGameAudio_Parms), &Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::NewProp_shouldMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "MuteGameAudio", nullptr, nullptr, sizeof(CinematicPresenter_eventMuteGameAudio_Parms), Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "OnPlaybackDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "OnPlaybackStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics
	{
		struct CinematicPresenter_eventOnSubtitlesUpdated_Parms
		{
			TArray<FString> subtitles;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subtitles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_subtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles_Inner = { "subtitles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles = { "subtitles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicPresenter_eventOnSubtitlesUpdated_Parms, subtitles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::NewProp_subtitles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "OnSubtitlesUpdated", nullptr, nullptr, sizeof(CinematicPresenter_eventOnSubtitlesUpdated_Parms), Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "OnWidgetFadeInAnimationDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicPresenter, nullptr, "OnWidgetFadeOutAnimationDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCinematicPresenter_NoRegister()
	{
		return UCinematicPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UCinematicPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CinematicWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__subtitlesManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__subtitlesManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinematicPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCinematicPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoPlaybackMode, "DBD_ChangeVideoPlaybackMode" }, // 3229825174
		{ &Z_Construct_UFunction_UCinematicPresenter_DBD_ChangeVideoVolume, "DBD_ChangeVideoVolume" }, // 1728539023
		{ &Z_Construct_UFunction_UCinematicPresenter_DBD_StopVideoPlayer, "DBD_StopVideoPlayer" }, // 1368847950
		{ &Z_Construct_UFunction_UCinematicPresenter_MuteGameAudio, "MuteGameAudio" }, // 1004986268
		{ &Z_Construct_UFunction_UCinematicPresenter_OnPlaybackDone, "OnPlaybackDone" }, // 1739504539
		{ &Z_Construct_UFunction_UCinematicPresenter_OnPlaybackStarted, "OnPlaybackStarted" }, // 1890728449
		{ &Z_Construct_UFunction_UCinematicPresenter_OnSubtitlesUpdated, "OnSubtitlesUpdated" }, // 2945186243
		{ &Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeInAnimationDone, "OnWidgetFadeInAnimationDone" }, // 4243703544
		{ &Z_Construct_UFunction_UCinematicPresenter_OnWidgetFadeOutAnimationDone, "OnWidgetFadeOutAnimationDone" }, // 431167344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinematicPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CinematicPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinematicPresenter_Statics::NewProp_CinematicWidgetClass_MetaData[] = {
		{ "Category", "CinematicPresenter" },
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCinematicPresenter_Statics::NewProp_CinematicWidgetClass = { "CinematicWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCinematicPresenter, CinematicWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCinematicPresenter_Statics::NewProp_CinematicWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicPresenter_Statics::NewProp_CinematicWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinematicPresenter_Statics::NewProp__subtitlesManager_MetaData[] = {
		{ "Category", "CinematicPresenter" },
		{ "ModuleRelativePath", "Public/CinematicPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCinematicPresenter_Statics::NewProp__subtitlesManager = { "_subtitlesManager", nullptr, (EPropertyFlags)0x0044000000002001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCinematicPresenter, _subtitlesManager), Z_Construct_UClass_USubtitlesManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCinematicPresenter_Statics::NewProp__subtitlesManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicPresenter_Statics::NewProp__subtitlesManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinematicPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicPresenter_Statics::NewProp_CinematicWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicPresenter_Statics::NewProp__subtitlesManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinematicPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCinematicPresenter_Statics::ClassParams = {
		&UCinematicPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCinematicPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCinematicPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinematicPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCinematicPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCinematicPresenter, 4243599552);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UCinematicPresenter>()
	{
		return UCinematicPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCinematicPresenter(Z_Construct_UClass_UCinematicPresenter, &UCinematicPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UCinematicPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinematicPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
