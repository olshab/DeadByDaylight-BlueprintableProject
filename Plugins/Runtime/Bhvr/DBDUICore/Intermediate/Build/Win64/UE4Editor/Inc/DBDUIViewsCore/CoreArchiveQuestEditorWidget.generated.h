// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UCoreButtonWidget;
struct FLinePair;
#ifdef DBDUIVIEWSCORE_CoreArchiveQuestEditorWidget_generated_h
#error "CoreArchiveQuestEditorWidget.generated.h already included, missing '#pragma once' in CoreArchiveQuestEditorWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveQuestEditorWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIntermediatePathMove); \
	DECLARE_FUNCTION(execNodeDragged); \
	DECLARE_FUNCTION(execOnGridTileHeightPercentChanged); \
	DECLARE_FUNCTION(execOnGridTileHeightPixelChanged); \
	DECLARE_FUNCTION(execOnGridTileWidthPercentChanged); \
	DECLARE_FUNCTION(execOnGridTileWidthPixelChanged); \
	DECLARE_FUNCTION(execOnGridVisbilityChecked); \
	DECLARE_FUNCTION(execOnLinkNodesModeChecked); \
	DECLARE_FUNCTION(execOnMoveNodesModeChecked); \
	DECLARE_FUNCTION(execOnNodeBeginDrag); \
	DECLARE_FUNCTION(execOnNodeSubmitClick); \
	DECLARE_FUNCTION(execOnNodeXPercentChanged); \
	DECLARE_FUNCTION(execOnNodeXPixelChanged); \
	DECLARE_FUNCTION(execOnNodeYPercentChanged); \
	DECLARE_FUNCTION(execOnNodeYPixelChanged); \
	DECLARE_FUNCTION(execOnPathClicked); \
	DECLARE_FUNCTION(execOnRefreshGridClick); \
	DECLARE_FUNCTION(execOnSaveGraphClick); \
	DECLARE_FUNCTION(execOnSnapGridChecked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIntermediatePathMove); \
	DECLARE_FUNCTION(execNodeDragged); \
	DECLARE_FUNCTION(execOnGridTileHeightPercentChanged); \
	DECLARE_FUNCTION(execOnGridTileHeightPixelChanged); \
	DECLARE_FUNCTION(execOnGridTileWidthPercentChanged); \
	DECLARE_FUNCTION(execOnGridTileWidthPixelChanged); \
	DECLARE_FUNCTION(execOnGridVisbilityChecked); \
	DECLARE_FUNCTION(execOnLinkNodesModeChecked); \
	DECLARE_FUNCTION(execOnMoveNodesModeChecked); \
	DECLARE_FUNCTION(execOnNodeBeginDrag); \
	DECLARE_FUNCTION(execOnNodeSubmitClick); \
	DECLARE_FUNCTION(execOnNodeXPercentChanged); \
	DECLARE_FUNCTION(execOnNodeXPixelChanged); \
	DECLARE_FUNCTION(execOnNodeYPercentChanged); \
	DECLARE_FUNCTION(execOnNodeYPixelChanged); \
	DECLARE_FUNCTION(execOnPathClicked); \
	DECLARE_FUNCTION(execOnRefreshGridClick); \
	DECLARE_FUNCTION(execOnSaveGraphClick); \
	DECLARE_FUNCTION(execOnSnapGridChecked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_EVENT_PARMS \
	struct CoreArchiveQuestEditorWidget_eventSetGridLinesArray_Parms \
	{ \
		TArray<FLinePair> gridArrayVertical; \
		TArray<FLinePair> gridArrayHorizontal; \
	}; \
	struct CoreArchiveQuestEditorWidget_eventSetHighlightedGridLines_Parms \
	{ \
		int32 verticalIndex; \
		int32 horizontalIndex; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveQuestEditorWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveQuestEditorWidget, UCoreArchiveQuestMapWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveQuestEditorWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveQuestEditorWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveQuestEditorWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveQuestEditorWidget, UCoreArchiveQuestMapWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveQuestEditorWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveQuestEditorWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveQuestEditorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveQuestEditorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveQuestEditorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveQuestEditorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveQuestEditorWidget(UCoreArchiveQuestEditorWidget&&); \
	NO_API UCoreArchiveQuestEditorWidget(const UCoreArchiveQuestEditorWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveQuestEditorWidget(UCoreArchiveQuestEditorWidget&&); \
	NO_API UCoreArchiveQuestEditorWidget(const UCoreArchiveQuestEditorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveQuestEditorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveQuestEditorWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveQuestEditorWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___gridLinesListVertical() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _gridLinesListVertical); } \
	FORCEINLINE static uint32 __PPO___gridLinesListHorizontal() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _gridLinesListHorizontal); } \
	FORCEINLINE static uint32 __PPO___activeNode() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _activeNode); } \
	FORCEINLINE static uint32 __PPO___pathInCreation() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _pathInCreation); } \
	FORCEINLINE static uint32 __PPO___questEditorSaveDelegate() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _questEditorSaveDelegate); } \
	FORCEINLINE static uint32 __PPO___isCreatingPath() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _isCreatingPath); } \
	FORCEINLINE static uint32 __PPO__EditorBorder() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, EditorBorder); } \
	FORCEINLINE static uint32 __PPO__MoveNodesRadioCheckbox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, MoveNodesRadioCheckbox); } \
	FORCEINLINE static uint32 __PPO__LinkNodesRadioCheckbox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, LinkNodesRadioCheckbox); } \
	FORCEINLINE static uint32 __PPO__GridVisibilityCheckbox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridVisibilityCheckbox); } \
	FORCEINLINE static uint32 __PPO__SnapGridCheckbox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SnapGridCheckbox); } \
	FORCEINLINE static uint32 __PPO__GridTileWidthInputPixelsTextBox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileWidthInputPixelsTextBox); } \
	FORCEINLINE static uint32 __PPO__GridTileWidthInputPercentTextBox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileWidthInputPercentTextBox); } \
	FORCEINLINE static uint32 __PPO__GridTileHeightInputPixelsTextBox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileHeightInputPixelsTextBox); } \
	FORCEINLINE static uint32 __PPO__GridTileHeightInputPercentTextBox() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileHeightInputPercentTextBox); } \
	FORCEINLINE static uint32 __PPO__RefreshGridButton() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, RefreshGridButton); } \
	FORCEINLINE static uint32 __PPO__NodeCoordinateContainer() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeCoordinateContainer); } \
	FORCEINLINE static uint32 __PPO__NodeXInputPixels() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeXInputPixels); } \
	FORCEINLINE static uint32 __PPO__NodeXInputPercent() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeXInputPercent); } \
	FORCEINLINE static uint32 __PPO__NodeYInputPixels() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeYInputPixels); } \
	FORCEINLINE static uint32 __PPO__NodeYInputPercent() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeYInputPercent); } \
	FORCEINLINE static uint32 __PPO__SubmitButton() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SubmitButton); } \
	FORCEINLINE static uint32 __PPO__SaveQuestMapButton() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SaveQuestMapButton); } \
	FORCEINLINE static uint32 __PPO__SaveInfoContainer() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SaveInfoContainer); } \
	FORCEINLINE static uint32 __PPO__PathTextBlock() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, PathTextBlock); } \
	FORCEINLINE static uint32 __PPO__GridTileHeightValuePercent() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileHeightValuePercent); } \
	FORCEINLINE static uint32 __PPO__GridTileWidthValuePercent() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileWidthValuePercent); } \
	FORCEINLINE static uint32 __PPO__IsSnapping() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, IsSnapping); } \
	FORCEINLINE static uint32 __PPO__IsGridVisible() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, IsGridVisible); } \
	FORCEINLINE static uint32 __PPO__Mode() { return STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, Mode); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_23_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveQuestEditorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestEditorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
