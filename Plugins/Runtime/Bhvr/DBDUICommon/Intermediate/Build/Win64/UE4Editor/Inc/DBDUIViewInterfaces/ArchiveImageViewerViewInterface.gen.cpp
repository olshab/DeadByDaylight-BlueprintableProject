// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveImageViewerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveImageViewerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveImageViewerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveImageViewerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveImageViewerViewInterface::execSetTextVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextVisibility_Implementation(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveImageViewerViewInterface::execSetVoiceOverAutoplay)
	{
		P_GET_UBOOL(Z_Param_voiceOverAutoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceOverAutoplay_Implementation(Z_Param_voiceOverAutoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveImageViewerViewInterface::execSetVoiceOverPlaying)
	{
		P_GET_UBOOL(Z_Param_voiceOverPlaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceOverPlaying_Implementation(Z_Param_voiceOverPlaying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveImageViewerViewInterface::execUpdateContent)
	{
		P_GET_STRUCT_REF(FArchivesVignetteEntryViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateContent_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IArchiveImageViewerViewInterface::SetTextVisibility(bool visible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTextVisibility instead.");
	}
	void IArchiveImageViewerViewInterface::SetVoiceOverAutoplay(bool voiceOverAutoplay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVoiceOverAutoplay instead.");
	}
	void IArchiveImageViewerViewInterface::SetVoiceOverPlaying(bool voiceOverPlaying)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVoiceOverPlaying instead.");
	}
	void IArchiveImageViewerViewInterface::UpdateContent(FArchivesVignetteEntryViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateContent instead.");
	}
	void UArchiveImageViewerViewInterface::StaticRegisterNativesUArchiveImageViewerViewInterface()
	{
		UClass* Class = UArchiveImageViewerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTextVisibility", &IArchiveImageViewerViewInterface::execSetTextVisibility },
			{ "SetVoiceOverAutoplay", &IArchiveImageViewerViewInterface::execSetVoiceOverAutoplay },
			{ "SetVoiceOverPlaying", &IArchiveImageViewerViewInterface::execSetVoiceOverPlaying },
			{ "UpdateContent", &IArchiveImageViewerViewInterface::execUpdateContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((ArchiveImageViewerViewInterface_eventSetTextVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerViewInterface_eventSetTextVisibility_Parms), &Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerViewInterface, nullptr, "SetTextVisibility", nullptr, nullptr, sizeof(ArchiveImageViewerViewInterface_eventSetTextVisibility_Parms), Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics
	{
		static void NewProp_voiceOverAutoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_voiceOverAutoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay_SetBit(void* Obj)
	{
		((ArchiveImageViewerViewInterface_eventSetVoiceOverAutoplay_Parms*)Obj)->voiceOverAutoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay = { "voiceOverAutoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerViewInterface_eventSetVoiceOverAutoplay_Parms), &Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::NewProp_voiceOverAutoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerViewInterface, nullptr, "SetVoiceOverAutoplay", nullptr, nullptr, sizeof(ArchiveImageViewerViewInterface_eventSetVoiceOverAutoplay_Parms), Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics
	{
		static void NewProp_voiceOverPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_voiceOverPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying_SetBit(void* Obj)
	{
		((ArchiveImageViewerViewInterface_eventSetVoiceOverPlaying_Parms*)Obj)->voiceOverPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying = { "voiceOverPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerViewInterface_eventSetVoiceOverPlaying_Parms), &Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::NewProp_voiceOverPlaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerViewInterface, nullptr, "SetVoiceOverPlaying", nullptr, nullptr, sizeof(ArchiveImageViewerViewInterface_eventSetVoiceOverPlaying_Parms), Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveImageViewerViewInterface_eventUpdateContent_Parms, data), Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerViewInterface, nullptr, "UpdateContent", nullptr, nullptr, sizeof(ArchiveImageViewerViewInterface_eventUpdateContent_Parms), Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveImageViewerViewInterface_NoRegister()
	{
		return UArchiveImageViewerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetTextVisibility, "SetTextVisibility" }, // 87394587
		{ &Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay, "SetVoiceOverAutoplay" }, // 946030000
		{ &Z_Construct_UFunction_UArchiveImageViewerViewInterface_SetVoiceOverPlaying, "SetVoiceOverPlaying" }, // 2375453834
		{ &Z_Construct_UFunction_UArchiveImageViewerViewInterface_UpdateContent, "UpdateContent" }, // 928057901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveImageViewerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveImageViewerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::ClassParams = {
		&UArchiveImageViewerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveImageViewerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveImageViewerViewInterface, 1549184592);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveImageViewerViewInterface>()
	{
		return UArchiveImageViewerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveImageViewerViewInterface(Z_Construct_UClass_UArchiveImageViewerViewInterface, &UArchiveImageViewerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveImageViewerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveImageViewerViewInterface);
	static FName NAME_UArchiveImageViewerViewInterface_SetTextVisibility = FName(TEXT("SetTextVisibility"));
	void IArchiveImageViewerViewInterface::Execute_SetTextVisibility(UObject* O, bool visible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveImageViewerViewInterface::StaticClass()));
		ArchiveImageViewerViewInterface_eventSetTextVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveImageViewerViewInterface_SetTextVisibility);
		if (Func)
		{
			Parms.visible=visible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveImageViewerViewInterface*)(O->GetNativeInterfaceAddress(UArchiveImageViewerViewInterface::StaticClass())))
		{
			I->SetTextVisibility_Implementation(visible);
		}
	}
	static FName NAME_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay = FName(TEXT("SetVoiceOverAutoplay"));
	void IArchiveImageViewerViewInterface::Execute_SetVoiceOverAutoplay(UObject* O, bool voiceOverAutoplay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveImageViewerViewInterface::StaticClass()));
		ArchiveImageViewerViewInterface_eventSetVoiceOverAutoplay_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveImageViewerViewInterface_SetVoiceOverAutoplay);
		if (Func)
		{
			Parms.voiceOverAutoplay=voiceOverAutoplay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveImageViewerViewInterface*)(O->GetNativeInterfaceAddress(UArchiveImageViewerViewInterface::StaticClass())))
		{
			I->SetVoiceOverAutoplay_Implementation(voiceOverAutoplay);
		}
	}
	static FName NAME_UArchiveImageViewerViewInterface_SetVoiceOverPlaying = FName(TEXT("SetVoiceOverPlaying"));
	void IArchiveImageViewerViewInterface::Execute_SetVoiceOverPlaying(UObject* O, bool voiceOverPlaying)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveImageViewerViewInterface::StaticClass()));
		ArchiveImageViewerViewInterface_eventSetVoiceOverPlaying_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveImageViewerViewInterface_SetVoiceOverPlaying);
		if (Func)
		{
			Parms.voiceOverPlaying=voiceOverPlaying;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveImageViewerViewInterface*)(O->GetNativeInterfaceAddress(UArchiveImageViewerViewInterface::StaticClass())))
		{
			I->SetVoiceOverPlaying_Implementation(voiceOverPlaying);
		}
	}
	static FName NAME_UArchiveImageViewerViewInterface_UpdateContent = FName(TEXT("UpdateContent"));
	void IArchiveImageViewerViewInterface::Execute_UpdateContent(UObject* O, FArchivesVignetteEntryViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveImageViewerViewInterface::StaticClass()));
		ArchiveImageViewerViewInterface_eventUpdateContent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveImageViewerViewInterface_UpdateContent);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveImageViewerViewInterface*)(O->GetNativeInterfaceAddress(UArchiveImageViewerViewInterface::StaticClass())))
		{
			I->UpdateContent_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
