// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CorePaginationContainerWidget_generated_h
#error "CorePaginationContainerWidget.generated.h already included, missing '#pragma once' in CorePaginationContainerWidget.h"
#endif
#define DBDUIVIEWSCORE_CorePaginationContainerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_19_DELEGATE \
struct CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms \
{ \
	int32 selectedPage; \
	bool isUpdate; \
}; \
static inline void FOnSelectedPageDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedPageDelegate, int32 selectedPage, bool isUpdate) \
{ \
	CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms Parms; \
	Parms.selectedPage=selectedPage; \
	Parms.isUpdate=isUpdate ? true : false; \
	OnSelectedPageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentPage); \
	DECLARE_FUNCTION(execOnPaginationSelected); \
	DECLARE_FUNCTION(execUpdateSelectedWidget);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentPage); \
	DECLARE_FUNCTION(execOnPaginationSelected); \
	DECLARE_FUNCTION(execUpdateSelectedWidget);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePaginationContainerWidget(); \
	friend struct Z_Construct_UClass_UCorePaginationContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePaginationContainerWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePaginationContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCorePaginationContainerWidget(); \
	friend struct Z_Construct_UClass_UCorePaginationContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePaginationContainerWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePaginationContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePaginationContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePaginationContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePaginationContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePaginationContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePaginationContainerWidget(UCorePaginationContainerWidget&&); \
	NO_API UCorePaginationContainerWidget(const UCorePaginationContainerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePaginationContainerWidget(UCorePaginationContainerWidget&&); \
	NO_API UCorePaginationContainerWidget(const UCorePaginationContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePaginationContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePaginationContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePaginationContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PaginationWidgetClass() { return STRUCT_OFFSET(UCorePaginationContainerWidget, PaginationWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MaxNumberOfPages() { return STRUCT_OFFSET(UCorePaginationContainerWidget, MaxNumberOfPages); } \
	FORCEINLINE static uint32 __PPO__PaginationContainer() { return STRUCT_OFFSET(UCorePaginationContainerWidget, PaginationContainer); } \
	FORCEINLINE static uint32 __PPO__FirstPage() { return STRUCT_OFFSET(UCorePaginationContainerWidget, FirstPage); } \
	FORCEINLINE static uint32 __PPO__FirstEllipsis() { return STRUCT_OFFSET(UCorePaginationContainerWidget, FirstEllipsis); } \
	FORCEINLINE static uint32 __PPO__LastEllipsis() { return STRUCT_OFFSET(UCorePaginationContainerWidget, LastEllipsis); } \
	FORCEINLINE static uint32 __PPO__LastPage() { return STRUCT_OFFSET(UCorePaginationContainerWidget, LastPage); } \
	FORCEINLINE static uint32 __PPO___widgetPadding() { return STRUCT_OFFSET(UCorePaginationContainerWidget, _widgetPadding); } \
	FORCEINLINE static uint32 __PPO___paginationWidgetList() { return STRUCT_OFFSET(UCorePaginationContainerWidget, _paginationWidgetList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_13_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCorePaginationContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePaginationContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
