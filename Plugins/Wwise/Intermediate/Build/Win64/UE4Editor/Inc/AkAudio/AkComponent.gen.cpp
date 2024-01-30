// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
// End Cross Module References
	DEFINE_FUNCTION(UAkComponent::execGetAttenuationRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAkEventAndWaitForEnd)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_EventName);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAkEventAndWaitForEnd(Z_Param_AkEvent,Z_Param_in_EventName,Z_Param_Out_ExternalSources,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAkEventAndWaitForEndAsync)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAkEventAndWaitForEndAsync(Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_Out_ExternalSources,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAkEventByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_in_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAkEventByName(Z_Param_in_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAssociatedAkEventAndWaitForEnd)
	{
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEventAndWaitForEnd(Z_Param_Out_ExternalSources,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAssociatedAkEventAndWaitForEndAsync)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAssociatedAkEventAndWaitForEndAsync(Z_Param_Out_PlayingID,Z_Param_Out_ExternalSources,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostTrigger)
	{
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostTrigger(Z_Param_TriggerValue,Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetAttenuationScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttenuationScalingFactor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsAuxBus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEarlyReflectionsAuxBus(Z_Param_AuxBusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SendVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEarlyReflectionsVolume(Z_Param_SendVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetGameObjectRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_outerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_innerRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameObjectRadius(Z_Param_in_outerRadius,Z_Param_in_innerRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetListeners)
	{
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListeners(Z_Param_Out_Listeners);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetOutputBusVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputBusVolume(Z_Param_BusVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetStopWhenOwnerDestroyed)
	{
		P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetSwitch)
	{
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_SwitchGroup);
		P_GET_PROPERTY(FStrProperty,Z_Param_SwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitch(Z_Param_SwitchValue,Z_Param_SwitchGroup,Z_Param_SwitchState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execUseEarlyReflections)
	{
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusSendGain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPathLength);
		P_GET_UBOOL(Z_Param_SpotReflectors);
		P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseEarlyReflections(Z_Param_AuxBus,Z_Param_Order,Z_Param_BusSendGain,Z_Param_MaxPathLength,Z_Param_SpotReflectors,Z_Param_AuxBusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execUseReverbVolumes)
	{
		P_GET_UBOOL(Z_Param_inUseReverbVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseReverbVolumes(Z_Param_inUseReverbVolumes);
		P_NATIVE_END;
	}
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UAkComponent::execGetAttenuationRadius },
			{ "PostAkEventAndWaitForEnd", &UAkComponent::execPostAkEventAndWaitForEnd },
			{ "PostAkEventAndWaitForEndAsync", &UAkComponent::execPostAkEventAndWaitForEndAsync },
			{ "PostAkEventByName", &UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEventAndWaitForEnd", &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
			{ "PostAssociatedAkEventAndWaitForEndAsync", &UAkComponent::execPostAssociatedAkEventAndWaitForEndAsync },
			{ "PostTrigger", &UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", &UAkComponent::execSetAttenuationScalingFactor },
			{ "SetEarlyReflectionsAuxBus", &UAkComponent::execSetEarlyReflectionsAuxBus },
			{ "SetEarlyReflectionsVolume", &UAkComponent::execSetEarlyReflectionsVolume },
			{ "SetGameObjectRadius", &UAkComponent::execSetGameObjectRadius },
			{ "SetListeners", &UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", &UAkComponent::execSetOutputBusVolume },
			{ "SetStopWhenOwnerDestroyed", &UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", &UAkComponent::execSetSwitch },
			{ "UseEarlyReflections", &UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetAttenuationRadius", nullptr, nullptr, sizeof(AkComponent_eventGetAttenuationRadius_Parms), Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEnd", nullptr, nullptr, sizeof(AkComponent_eventPostAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEndAsync_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 PlayingID;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEndAsync", nullptr, nullptr, sizeof(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventByName", nullptr, nullptr, sizeof(AkComponent_eventPostAkEventByName_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
		{
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEnd", nullptr, nullptr, sizeof(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms
		{
			int32 PlayingID;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEndAsync", nullptr, nullptr, sizeof(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostTrigger_Statics
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			UAkTrigger* TriggerValue;
			FString Trigger;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostTrigger", nullptr, nullptr, sizeof(AkComponent_eventPostTrigger_Parms), Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetAttenuationScalingFactor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetAttenuationScalingFactor", nullptr, nullptr, sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms), Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics
	{
		struct AkComponent_eventSetEarlyReflectionsAuxBus_Parms
		{
			FString AuxBusName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsAuxBus_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsAuxBus", nullptr, nullptr, sizeof(AkComponent_eventSetEarlyReflectionsAuxBus_Parms), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics
	{
		struct AkComponent_eventSetEarlyReflectionsVolume_Parms
		{
			float SendVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume = { "SendVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsVolume_Parms, SendVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsVolume", nullptr, nullptr, sizeof(AkComponent_eventSetEarlyReflectionsVolume_Parms), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics
	{
		struct AkComponent_eventSetGameObjectRadius_Parms
		{
			float in_outerRadius;
			float in_innerRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in_outerRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in_innerRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_outerRadius = { "in_outerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_outerRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_innerRadius = { "in_innerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_innerRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_outerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_innerRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetGameObjectRadius", nullptr, nullptr, sizeof(AkComponent_eventSetGameObjectRadius_Parms), Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetGameObjectRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetListeners_Statics
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Listeners;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetListeners", nullptr, nullptr, sizeof(AkComponent_eventSetListeners_Parms), Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetOutputBusVolume", nullptr, nullptr, sizeof(AkComponent_eventSetOutputBusVolume_Parms), Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetStopWhenOwnerDestroyed", nullptr, nullptr, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetSwitch_Statics
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			UAkSwitchValue* SwitchValue;
			FString SwitchGroup;
			FString SwitchState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetSwitch", nullptr, nullptr, sizeof(AkComponent_eventSetSwitch_Parms), Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendGain;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength;
		static void NewProp_SpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain = { "BusSendGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit(void* Obj)
	{
		((AkComponent_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors = { "SpotReflectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventUseEarlyReflections_Parms), &Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseEarlyReflections", nullptr, nullptr, sizeof(AkComponent_eventUseEarlyReflections_Parms), Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkComponent_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseReverbVolumes", nullptr, nullptr, sizeof(AkComponent_eventUseReverbVolumes_Parms), Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialAudio_MetaData[];
#endif
		static void NewProp_bUseSpatialAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[];
#endif
		static void NewProp_EnableSpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_innerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_innerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EarlyReflectionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionMaxPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionMaxPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomReverbAuxBusGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roomReverbAuxBusGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxEdges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_diffractionMaxEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_diffractionMaxPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_diffractionMaxPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[];
#endif
		static void NewProp_DrawFirstOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[];
#endif
		static void NewProp_DrawSecondOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[];
#endif
		static void NewProp_DrawHigherOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDiffraction_MetaData[];
#endif
		static void NewProp_DrawDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseReverbVolumes_MetaData[];
#endif
		static void NewProp_bUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseReverbVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionAffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionAffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPostOnBeginPlay_MetaData[];
#endif
		static void NewProp_AutoPostOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPostOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticAmbientEmitter_MetaData[];
#endif
		static void NewProp_StaticAmbientEmitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StaticAmbientEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticAmbientEmitterFadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticAmbientEmitterFadeDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaticAmbientEmitterInterpolationCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticAmbientEmitterInterpolationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaticAmbientEmitterInterpolationCurve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenersInRange_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenersInRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ListenersInRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 1954906358
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 4208890926
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync, "PostAkEventAndWaitForEndAsync" }, // 2750023030
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventByName, "PostAkEventByName" }, // 207350431
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 2460849035
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync, "PostAssociatedAkEventAndWaitForEndAsync" }, // 3627312747
		{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 2964543471
		{ &Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 94817784
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus, "SetEarlyReflectionsAuxBus" }, // 1876076257
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume, "SetEarlyReflectionsVolume" }, // 2176625799
		{ &Z_Construct_UFunction_UAkComponent_SetGameObjectRadius, "SetGameObjectRadius" }, // 2834687972
		{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 3783024985
		{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 1032092433
		{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 4065911137
		{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 346943137
		{ &Z_Construct_UFunction_UAkComponent_UseEarlyReflections, "UseEarlyReflections" }, // 4281140932
		{ &Z_Construct_UFunction_UAkComponent_UseReverbVolumes, "UseReverbVolumes" }, // 2279171817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseSpatialAudio_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio = { "bUseSpatialAudio", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->EnableSpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors = { "EnableSpotReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius = { "outerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, outerRadius), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius = { "innerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, innerRadius), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder = { "EarlyReflectionOrder", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain = { "EarlyReflectionBusSendGain", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength = { "EarlyReflectionMaxPathLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain = { "roomReverbAuxBusGain", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges = { "diffractionMaxEdges", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxEdges), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths = { "diffractionMaxPaths", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxPaths), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength = { "diffractionMaxPathLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawFirstOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections = { "DrawFirstOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawSecondOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections = { "DrawSecondOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawHigherOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections = { "DrawHigherOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction = { "DrawDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor = { "AttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, AttenuationScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval = { "OcclusionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes = { "bUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionAffect_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionAffect = { "OcclusionAffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionAffect), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionAffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionAffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->AutoPostOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay = { "AutoPostOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->StaticAmbientEmitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter = { "StaticAmbientEmitter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterFadeDuration_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterFadeDuration = { "StaticAmbientEmitterFadeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, StaticAmbientEmitterFadeDuration), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterFadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterFadeDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve = { "StaticAmbientEmitterInterpolationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, StaticAmbientEmitterInterpolationCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange_ElementProp = { "ListenersInRange", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange = { "ListenersInRange", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, ListenersInRange), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionAffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_AutoPostOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterFadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StaticAmbientEmitterInterpolationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_ListenersInRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkComponent_Statics::ClassParams = {
		&UAkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkComponent, 3345924636);
	template<> AKAUDIO_API UClass* StaticClass<UAkComponent>()
	{
		return UAkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
