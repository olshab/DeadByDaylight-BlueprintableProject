// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/SubtitlesViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitlesViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USubtitlesViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USubtitlesViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesBackgroundOpacity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize();
// End Cross Module References
	DEFINE_FUNCTION(ISubtitlesViewInterface::execHideSubtitles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSubtitles_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISubtitlesViewInterface::execSetConstrainAspectRatioChanged)
	{
		P_GET_UBOOL(Z_Param_isConstrained);
		P_GET_PROPERTY(FFloatProperty,Z_Param_aspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstrainAspectRatioChanged_Implementation(Z_Param_isConstrained,Z_Param_aspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISubtitlesViewInterface::execSetSubtitlesBackgroundOpacity)
	{
		P_GET_ENUM(ESubtitlesBackgroundOpacity,Z_Param_opacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitlesBackgroundOpacity_Implementation(ESubtitlesBackgroundOpacity(Z_Param_opacity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISubtitlesViewInterface::execSetSubtitlesPosition)
	{
		P_GET_ENUM(ESubtitlesPosition,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitlesPosition_Implementation(ESubtitlesPosition(Z_Param_position));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISubtitlesViewInterface::execSetSubtitlesSize)
	{
		P_GET_ENUM(ESubtitlesSize,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitlesSize_Implementation(ESubtitlesSize(Z_Param_size));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISubtitlesViewInterface::execShowSubtitle)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_subtitleText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSubtitle_Implementation(Z_Param_Out_subtitleText);
		P_NATIVE_END;
	}
	void ISubtitlesViewInterface::HideSubtitles()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideSubtitles instead.");
	}
	void ISubtitlesViewInterface::SetConstrainAspectRatioChanged(bool isConstrained, float aspectRatio)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetConstrainAspectRatioChanged instead.");
	}
	void ISubtitlesViewInterface::SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity opacity)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubtitlesBackgroundOpacity instead.");
	}
	void ISubtitlesViewInterface::SetSubtitlesPosition(ESubtitlesPosition position)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubtitlesPosition instead.");
	}
	void ISubtitlesViewInterface::SetSubtitlesSize(ESubtitlesSize size)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubtitlesSize instead.");
	}
	void ISubtitlesViewInterface::ShowSubtitle(FText const& subtitleText)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowSubtitle instead.");
	}
	void USubtitlesViewInterface::StaticRegisterNativesUSubtitlesViewInterface()
	{
		UClass* Class = USubtitlesViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideSubtitles", &ISubtitlesViewInterface::execHideSubtitles },
			{ "SetConstrainAspectRatioChanged", &ISubtitlesViewInterface::execSetConstrainAspectRatioChanged },
			{ "SetSubtitlesBackgroundOpacity", &ISubtitlesViewInterface::execSetSubtitlesBackgroundOpacity },
			{ "SetSubtitlesPosition", &ISubtitlesViewInterface::execSetSubtitlesPosition },
			{ "SetSubtitlesSize", &ISubtitlesViewInterface::execSetSubtitlesSize },
			{ "ShowSubtitle", &ISubtitlesViewInterface::execShowSubtitle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesViewInterface, nullptr, "HideSubtitles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics
	{
		static void NewProp_isConstrained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isConstrained;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aspectRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::NewProp_isConstrained_SetBit(void* Obj)
	{
		((SubtitlesViewInterface_eventSetConstrainAspectRatioChanged_Parms*)Obj)->isConstrained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::NewProp_isConstrained = { "isConstrained", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SubtitlesViewInterface_eventSetConstrainAspectRatioChanged_Parms), &Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::NewProp_isConstrained_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::NewProp_aspectRatio = { "aspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesViewInterface_eventSetConstrainAspectRatioChanged_Parms, aspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::NewProp_isConstrained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::NewProp_aspectRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesViewInterface, nullptr, "SetConstrainAspectRatioChanged", nullptr, nullptr, sizeof(SubtitlesViewInterface_eventSetConstrainAspectRatioChanged_Parms), Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_opacity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_opacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::NewProp_opacity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::NewProp_opacity = { "opacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesViewInterface_eventSetSubtitlesBackgroundOpacity_Parms, opacity), Z_Construct_UEnum_DBDSharedTypes_ESubtitlesBackgroundOpacity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::NewProp_opacity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::NewProp_opacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesViewInterface, nullptr, "SetSubtitlesBackgroundOpacity", nullptr, nullptr, sizeof(SubtitlesViewInterface_eventSetSubtitlesBackgroundOpacity_Parms), Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_position_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::NewProp_position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesViewInterface_eventSetSubtitlesPosition_Parms, position), Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::NewProp_position_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesViewInterface, nullptr, "SetSubtitlesPosition", nullptr, nullptr, sizeof(SubtitlesViewInterface_eventSetSubtitlesPosition_Parms), Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_size_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::NewProp_size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesViewInterface_eventSetSubtitlesSize_Parms, size), Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::NewProp_size_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesViewInterface, nullptr, "SetSubtitlesSize", nullptr, nullptr, sizeof(SubtitlesViewInterface_eventSetSubtitlesSize_Parms), Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_subtitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::NewProp_subtitleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::NewProp_subtitleText = { "subtitleText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesViewInterface_eventShowSubtitle_Parms, subtitleText), METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::NewProp_subtitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::NewProp_subtitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::NewProp_subtitleText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesViewInterface, nullptr, "ShowSubtitle", nullptr, nullptr, sizeof(SubtitlesViewInterface_eventShowSubtitle_Parms), Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubtitlesViewInterface_NoRegister()
	{
		return USubtitlesViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_USubtitlesViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubtitlesViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubtitlesViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubtitlesViewInterface_HideSubtitles, "HideSubtitles" }, // 3268789527
		{ &Z_Construct_UFunction_USubtitlesViewInterface_SetConstrainAspectRatioChanged, "SetConstrainAspectRatioChanged" }, // 1895902669
		{ &Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity, "SetSubtitlesBackgroundOpacity" }, // 874289705
		{ &Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesPosition, "SetSubtitlesPosition" }, // 2900629320
		{ &Z_Construct_UFunction_USubtitlesViewInterface_SetSubtitlesSize, "SetSubtitlesSize" }, // 3062749567
		{ &Z_Construct_UFunction_USubtitlesViewInterface_ShowSubtitle, "ShowSubtitle" }, // 3819282364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubtitlesViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubtitlesViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubtitlesViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubtitlesViewInterface_Statics::ClassParams = {
		&USubtitlesViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubtitlesViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubtitlesViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubtitlesViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubtitlesViewInterface, 2400061158);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<USubtitlesViewInterface>()
	{
		return USubtitlesViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubtitlesViewInterface(Z_Construct_UClass_USubtitlesViewInterface, &USubtitlesViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("USubtitlesViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitlesViewInterface);
	static FName NAME_USubtitlesViewInterface_HideSubtitles = FName(TEXT("HideSubtitles"));
	void ISubtitlesViewInterface::Execute_HideSubtitles(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USubtitlesViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USubtitlesViewInterface_HideSubtitles);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISubtitlesViewInterface*)(O->GetNativeInterfaceAddress(USubtitlesViewInterface::StaticClass())))
		{
			I->HideSubtitles_Implementation();
		}
	}
	static FName NAME_USubtitlesViewInterface_SetConstrainAspectRatioChanged = FName(TEXT("SetConstrainAspectRatioChanged"));
	void ISubtitlesViewInterface::Execute_SetConstrainAspectRatioChanged(UObject* O, bool isConstrained, float aspectRatio)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USubtitlesViewInterface::StaticClass()));
		SubtitlesViewInterface_eventSetConstrainAspectRatioChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USubtitlesViewInterface_SetConstrainAspectRatioChanged);
		if (Func)
		{
			Parms.isConstrained=isConstrained;
			Parms.aspectRatio=aspectRatio;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISubtitlesViewInterface*)(O->GetNativeInterfaceAddress(USubtitlesViewInterface::StaticClass())))
		{
			I->SetConstrainAspectRatioChanged_Implementation(isConstrained,aspectRatio);
		}
	}
	static FName NAME_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity = FName(TEXT("SetSubtitlesBackgroundOpacity"));
	void ISubtitlesViewInterface::Execute_SetSubtitlesBackgroundOpacity(UObject* O, ESubtitlesBackgroundOpacity opacity)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USubtitlesViewInterface::StaticClass()));
		SubtitlesViewInterface_eventSetSubtitlesBackgroundOpacity_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USubtitlesViewInterface_SetSubtitlesBackgroundOpacity);
		if (Func)
		{
			Parms.opacity=opacity;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISubtitlesViewInterface*)(O->GetNativeInterfaceAddress(USubtitlesViewInterface::StaticClass())))
		{
			I->SetSubtitlesBackgroundOpacity_Implementation(opacity);
		}
	}
	static FName NAME_USubtitlesViewInterface_SetSubtitlesPosition = FName(TEXT("SetSubtitlesPosition"));
	void ISubtitlesViewInterface::Execute_SetSubtitlesPosition(UObject* O, ESubtitlesPosition position)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USubtitlesViewInterface::StaticClass()));
		SubtitlesViewInterface_eventSetSubtitlesPosition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USubtitlesViewInterface_SetSubtitlesPosition);
		if (Func)
		{
			Parms.position=position;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISubtitlesViewInterface*)(O->GetNativeInterfaceAddress(USubtitlesViewInterface::StaticClass())))
		{
			I->SetSubtitlesPosition_Implementation(position);
		}
	}
	static FName NAME_USubtitlesViewInterface_SetSubtitlesSize = FName(TEXT("SetSubtitlesSize"));
	void ISubtitlesViewInterface::Execute_SetSubtitlesSize(UObject* O, ESubtitlesSize size)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USubtitlesViewInterface::StaticClass()));
		SubtitlesViewInterface_eventSetSubtitlesSize_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USubtitlesViewInterface_SetSubtitlesSize);
		if (Func)
		{
			Parms.size=size;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISubtitlesViewInterface*)(O->GetNativeInterfaceAddress(USubtitlesViewInterface::StaticClass())))
		{
			I->SetSubtitlesSize_Implementation(size);
		}
	}
	static FName NAME_USubtitlesViewInterface_ShowSubtitle = FName(TEXT("ShowSubtitle"));
	void ISubtitlesViewInterface::Execute_ShowSubtitle(UObject* O, FText const& subtitleText)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USubtitlesViewInterface::StaticClass()));
		SubtitlesViewInterface_eventShowSubtitle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USubtitlesViewInterface_ShowSubtitle);
		if (Func)
		{
			Parms.subtitleText=subtitleText;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISubtitlesViewInterface*)(O->GetNativeInterfaceAddress(USubtitlesViewInterface::StaticClass())))
		{
			I->ShowSubtitle_Implementation(subtitleText);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
