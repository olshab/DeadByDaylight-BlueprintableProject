// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersBioViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersSelectionViewInterface_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCharacterPerkViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPowerViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IStoreCharactersViewInterface::execGetStoreCharactersBioInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCharactersBioViewInterface>*)Z_Param__Result=P_THIS->GetStoreCharactersBioInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersViewInterface::execGetStoreCharactersCustomizationsInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCharactersCustomizationsViewInterface>*)Z_Param__Result=P_THIS->GetStoreCharactersCustomizationsInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersViewInterface::execGetStoreCharactersSelectionInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCharactersSelectionViewInterface>*)Z_Param__Result=P_THIS->GetStoreCharactersSelectionInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersViewInterface::execSetCharacterData)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_characterName);
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_GET_TARRAY_REF(UCharacterPerkViewData*,Z_Param_Out_characterPerks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterData_Implementation(Z_Param_Out_characterName,EPlayerRole(Z_Param_role),Z_Param_Out_characterPerks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreCharactersViewInterface::execSetKillerPower)
	{
		P_GET_OBJECT(UMenuPowerViewData,Z_Param_killerPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKillerPower_Implementation(Z_Param_killerPower);
		P_NATIVE_END;
	}
	TScriptInterface<IStoreCharactersBioViewInterface> IStoreCharactersViewInterface::GetStoreCharactersBioInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCharactersBioInterface instead.");
		StoreCharactersViewInterface_eventGetStoreCharactersBioInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreCharactersCustomizationsViewInterface> IStoreCharactersViewInterface::GetStoreCharactersCustomizationsInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCharactersCustomizationsInterface instead.");
		StoreCharactersViewInterface_eventGetStoreCharactersCustomizationsInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreCharactersSelectionViewInterface> IStoreCharactersViewInterface::GetStoreCharactersSelectionInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCharactersSelectionInterface instead.");
		StoreCharactersViewInterface_eventGetStoreCharactersSelectionInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IStoreCharactersViewInterface::SetCharacterData(FText const& characterName, EPlayerRole role, TArray<UCharacterPerkViewData*> const& characterPerks)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCharacterData instead.");
	}
	void IStoreCharactersViewInterface::SetKillerPower(UMenuPowerViewData* killerPower)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetKillerPower instead.");
	}
	void UStoreCharactersViewInterface::StaticRegisterNativesUStoreCharactersViewInterface()
	{
		UClass* Class = UStoreCharactersViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStoreCharactersBioInterface", &IStoreCharactersViewInterface::execGetStoreCharactersBioInterface },
			{ "GetStoreCharactersCustomizationsInterface", &IStoreCharactersViewInterface::execGetStoreCharactersCustomizationsInterface },
			{ "GetStoreCharactersSelectionInterface", &IStoreCharactersViewInterface::execGetStoreCharactersSelectionInterface },
			{ "SetCharacterData", &IStoreCharactersViewInterface::execSetCharacterData },
			{ "SetKillerPower", &IStoreCharactersViewInterface::execSetKillerPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventGetStoreCharactersBioInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCharactersBioViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersViewInterface, nullptr, "GetStoreCharactersBioInterface", nullptr, nullptr, sizeof(StoreCharactersViewInterface_eventGetStoreCharactersBioInterface_Parms), Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventGetStoreCharactersCustomizationsInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersViewInterface, nullptr, "GetStoreCharactersCustomizationsInterface", nullptr, nullptr, sizeof(StoreCharactersViewInterface_eventGetStoreCharactersCustomizationsInterface_Parms), Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventGetStoreCharactersSelectionInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCharactersSelectionViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersViewInterface, nullptr, "GetStoreCharactersSelectionInterface", nullptr, nullptr, sizeof(StoreCharactersViewInterface_eventGetStoreCharactersSelectionInterface_Parms), Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_characterName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterPerks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characterPerks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventSetCharacterData_Parms, characterName), METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventSetCharacterData_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks_Inner = { "characterPerks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCharacterPerkViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks = { "characterPerks", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventSetCharacterData_Parms, characterPerks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::NewProp_characterPerks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersViewInterface, nullptr, "SetCharacterData", nullptr, nullptr, sizeof(StoreCharactersViewInterface_eventSetCharacterData_Parms), Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::NewProp_killerPower = { "killerPower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersViewInterface_eventSetKillerPower_Parms, killerPower), Z_Construct_UClass_UMenuPowerViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::NewProp_killerPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersViewInterface, nullptr, "SetKillerPower", nullptr, nullptr, sizeof(StoreCharactersViewInterface_eventSetKillerPower_Parms), Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCharactersViewInterface_NoRegister()
	{
		return UStoreCharactersViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharactersViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharactersViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCharactersViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersBioInterface, "GetStoreCharactersBioInterface" }, // 1634031939
		{ &Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface, "GetStoreCharactersCustomizationsInterface" }, // 1340610249
		{ &Z_Construct_UFunction_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface, "GetStoreCharactersSelectionInterface" }, // 2313140666
		{ &Z_Construct_UFunction_UStoreCharactersViewInterface_SetCharacterData, "SetCharacterData" }, // 4057709212
		{ &Z_Construct_UFunction_UStoreCharactersViewInterface_SetKillerPower, "SetKillerPower" }, // 1123671551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharactersViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreCharactersViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharactersViewInterface_Statics::ClassParams = {
		&UStoreCharactersViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharactersViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharactersViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharactersViewInterface, 4102225929);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCharactersViewInterface>()
	{
		return UStoreCharactersViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharactersViewInterface(Z_Construct_UClass_UStoreCharactersViewInterface, &UStoreCharactersViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCharactersViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharactersViewInterface);
	static FName NAME_UStoreCharactersViewInterface_GetStoreCharactersBioInterface = FName(TEXT("GetStoreCharactersBioInterface"));
	TScriptInterface<IStoreCharactersBioViewInterface> IStoreCharactersViewInterface::Execute_GetStoreCharactersBioInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersViewInterface::StaticClass()));
		StoreCharactersViewInterface_eventGetStoreCharactersBioInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersViewInterface_GetStoreCharactersBioInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCharactersViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCharactersBioInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface = FName(TEXT("GetStoreCharactersCustomizationsInterface"));
	TScriptInterface<IStoreCharactersCustomizationsViewInterface> IStoreCharactersViewInterface::Execute_GetStoreCharactersCustomizationsInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersViewInterface::StaticClass()));
		StoreCharactersViewInterface_eventGetStoreCharactersCustomizationsInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersViewInterface_GetStoreCharactersCustomizationsInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCharactersViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCharactersCustomizationsInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface = FName(TEXT("GetStoreCharactersSelectionInterface"));
	TScriptInterface<IStoreCharactersSelectionViewInterface> IStoreCharactersViewInterface::Execute_GetStoreCharactersSelectionInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersViewInterface::StaticClass()));
		StoreCharactersViewInterface_eventGetStoreCharactersSelectionInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersViewInterface_GetStoreCharactersSelectionInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreCharactersViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCharactersSelectionInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreCharactersViewInterface_SetCharacterData = FName(TEXT("SetCharacterData"));
	void IStoreCharactersViewInterface::Execute_SetCharacterData(UObject* O, FText const& characterName, EPlayerRole role, TArray<UCharacterPerkViewData*> const& characterPerks)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersViewInterface::StaticClass()));
		StoreCharactersViewInterface_eventSetCharacterData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersViewInterface_SetCharacterData);
		if (Func)
		{
			Parms.characterName=characterName;
			Parms.role=role;
			Parms.characterPerks=characterPerks;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersViewInterface::StaticClass())))
		{
			I->SetCharacterData_Implementation(characterName,role,characterPerks);
		}
	}
	static FName NAME_UStoreCharactersViewInterface_SetKillerPower = FName(TEXT("SetKillerPower"));
	void IStoreCharactersViewInterface::Execute_SetKillerPower(UObject* O, UMenuPowerViewData* killerPower)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreCharactersViewInterface::StaticClass()));
		StoreCharactersViewInterface_eventSetKillerPower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreCharactersViewInterface_SetKillerPower);
		if (Func)
		{
			Parms.killerPower=killerPower;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreCharactersViewInterface*)(O->GetNativeInterfaceAddress(UStoreCharactersViewInterface::StaticClass())))
		{
			I->SetKillerPower_Implementation(killerPower);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
