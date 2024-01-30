// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PingStatusViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingStatusViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPingStatusViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPingStatusViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality();
// End Cross Module References
	DEFINE_FUNCTION(IPingStatusViewInterface::execSetKillerConnectionQualityStatus)
	{
		P_GET_ENUM_REF(EConnectionQuality,Z_Param_Out_killerConnectionQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKillerConnectionQualityStatus_Implementation((EConnectionQuality&)(Z_Param_Out_killerConnectionQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPingStatusViewInterface::execSetLocalPacketLossStatus)
	{
		P_GET_ENUM_REF(EConnectionQuality,Z_Param_Out_localPacketLoss);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalPacketLossStatus_Implementation((EConnectionQuality&)(Z_Param_Out_localPacketLoss));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPingStatusViewInterface::execSetLocalPingStatus)
	{
		P_GET_ENUM_REF(EConnectionQuality,Z_Param_Out_localPing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalPingStatus_Implementation((EConnectionQuality&)(Z_Param_Out_localPing));
		P_NATIVE_END;
	}
	void IPingStatusViewInterface::SetKillerConnectionQualityStatus(EConnectionQuality const& killerConnectionQuality)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetKillerConnectionQualityStatus instead.");
	}
	void IPingStatusViewInterface::SetLocalPacketLossStatus(EConnectionQuality const& localPacketLoss)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLocalPacketLossStatus instead.");
	}
	void IPingStatusViewInterface::SetLocalPingStatus(EConnectionQuality const& localPing)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLocalPingStatus instead.");
	}
	void UPingStatusViewInterface::StaticRegisterNativesUPingStatusViewInterface()
	{
		UClass* Class = UPingStatusViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetKillerConnectionQualityStatus", &IPingStatusViewInterface::execSetKillerConnectionQualityStatus },
			{ "SetLocalPacketLossStatus", &IPingStatusViewInterface::execSetLocalPacketLossStatus },
			{ "SetLocalPingStatus", &IPingStatusViewInterface::execSetLocalPingStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_killerConnectionQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killerConnectionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_killerConnectionQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality = { "killerConnectionQuality", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingStatusViewInterface_eventSetKillerConnectionQualityStatus_Parms, killerConnectionQuality), Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::NewProp_killerConnectionQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingStatusViewInterface, nullptr, "SetKillerConnectionQualityStatus", nullptr, nullptr, sizeof(PingStatusViewInterface_eventSetKillerConnectionQualityStatus_Parms), Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_localPacketLoss_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localPacketLoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_localPacketLoss;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss = { "localPacketLoss", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingStatusViewInterface_eventSetLocalPacketLossStatus_Parms, localPacketLoss), Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::NewProp_localPacketLoss,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingStatusViewInterface, nullptr, "SetLocalPacketLossStatus", nullptr, nullptr, sizeof(PingStatusViewInterface_eventSetLocalPacketLossStatus_Parms), Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_localPing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_localPing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing = { "localPing", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingStatusViewInterface_eventSetLocalPingStatus_Parms, localPing), Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::NewProp_localPing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingStatusViewInterface, nullptr, "SetLocalPingStatus", nullptr, nullptr, sizeof(PingStatusViewInterface_eventSetLocalPingStatus_Parms), Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPingStatusViewInterface_NoRegister()
	{
		return UPingStatusViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPingStatusViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPingStatusViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPingStatusViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPingStatusViewInterface_SetKillerConnectionQualityStatus, "SetKillerConnectionQualityStatus" }, // 1263978662
		{ &Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPacketLossStatus, "SetLocalPacketLossStatus" }, // 2717966799
		{ &Z_Construct_UFunction_UPingStatusViewInterface_SetLocalPingStatus, "SetLocalPingStatus" }, // 556578608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingStatusViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PingStatusViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPingStatusViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPingStatusViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPingStatusViewInterface_Statics::ClassParams = {
		&UPingStatusViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPingStatusViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPingStatusViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPingStatusViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPingStatusViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPingStatusViewInterface, 2674275435);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPingStatusViewInterface>()
	{
		return UPingStatusViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPingStatusViewInterface(Z_Construct_UClass_UPingStatusViewInterface, &UPingStatusViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPingStatusViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPingStatusViewInterface);
	static FName NAME_UPingStatusViewInterface_SetKillerConnectionQualityStatus = FName(TEXT("SetKillerConnectionQualityStatus"));
	void IPingStatusViewInterface::Execute_SetKillerConnectionQualityStatus(UObject* O, EConnectionQuality const& killerConnectionQuality)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPingStatusViewInterface::StaticClass()));
		PingStatusViewInterface_eventSetKillerConnectionQualityStatus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPingStatusViewInterface_SetKillerConnectionQualityStatus);
		if (Func)
		{
			Parms.killerConnectionQuality=killerConnectionQuality;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPingStatusViewInterface*)(O->GetNativeInterfaceAddress(UPingStatusViewInterface::StaticClass())))
		{
			I->SetKillerConnectionQualityStatus_Implementation(killerConnectionQuality);
		}
	}
	static FName NAME_UPingStatusViewInterface_SetLocalPacketLossStatus = FName(TEXT("SetLocalPacketLossStatus"));
	void IPingStatusViewInterface::Execute_SetLocalPacketLossStatus(UObject* O, EConnectionQuality const& localPacketLoss)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPingStatusViewInterface::StaticClass()));
		PingStatusViewInterface_eventSetLocalPacketLossStatus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPingStatusViewInterface_SetLocalPacketLossStatus);
		if (Func)
		{
			Parms.localPacketLoss=localPacketLoss;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPingStatusViewInterface*)(O->GetNativeInterfaceAddress(UPingStatusViewInterface::StaticClass())))
		{
			I->SetLocalPacketLossStatus_Implementation(localPacketLoss);
		}
	}
	static FName NAME_UPingStatusViewInterface_SetLocalPingStatus = FName(TEXT("SetLocalPingStatus"));
	void IPingStatusViewInterface::Execute_SetLocalPingStatus(UObject* O, EConnectionQuality const& localPing)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPingStatusViewInterface::StaticClass()));
		PingStatusViewInterface_eventSetLocalPingStatus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPingStatusViewInterface_SetLocalPingStatus);
		if (Func)
		{
			Parms.localPing=localPing;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPingStatusViewInterface*)(O->GetNativeInterfaceAddress(UPingStatusViewInterface::StaticClass())))
		{
			I->SetLocalPingStatus_Implementation(localPing);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
