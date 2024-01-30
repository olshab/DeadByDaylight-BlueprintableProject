// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FTabWidgetData;
enum class ESlateVisibility : uint8;
class UCoreMenuLoadoutPartWidget;
enum class EItemAvailability : uint8;
#ifdef DBDUIVIEWSCORE_LoadoutMenuPopupWidget_generated_h
#error "LoadoutMenuPopupWidget.generated.h already included, missing '#pragma once' in LoadoutMenuPopupWidget.h"
#endif
#define DBDUIVIEWSCORE_LoadoutMenuPopupWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideMenuLoadoutPartsTooltip); \
	DECLARE_FUNCTION(execOnDropDownListSelectedOptionChanged); \
	DECLARE_FUNCTION(execOnDropdownSelected); \
	DECLARE_FUNCTION(execOnLoadoutMenuAddonSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuInventorySlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuItemSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuLeftArrowClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuOfferingSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPerkSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPowerSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPresetClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuRightArrowClicked); \
	DECLARE_FUNCTION(execOnPaginationSelected); \
	DECLARE_FUNCTION(execShowMenuLoadoutPartsTooltip); \
	DECLARE_FUNCTION(execUpdateInventoryItemData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideMenuLoadoutPartsTooltip); \
	DECLARE_FUNCTION(execOnDropDownListSelectedOptionChanged); \
	DECLARE_FUNCTION(execOnDropdownSelected); \
	DECLARE_FUNCTION(execOnLoadoutMenuAddonSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuInventorySlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuItemSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuLeftArrowClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuOfferingSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPerkSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPowerSlotClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPresetClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuRightArrowClicked); \
	DECLARE_FUNCTION(execOnPaginationSelected); \
	DECLARE_FUNCTION(execShowMenuLoadoutPartsTooltip); \
	DECLARE_FUNCTION(execUpdateInventoryItemData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_EVENT_PARMS \
	struct LoadoutMenuPopupWidget_eventPlayPaginationOutAnimation_Parms \
	{ \
		bool isNextPage; \
	}; \
	struct LoadoutMenuPopupWidget_eventSetInventoryItemEnabled_Parms \
	{ \
		UCoreMenuLoadoutPartWidget* widget; \
		EItemAvailability availability; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadoutMenuPopupWidget(); \
	friend struct Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics; \
public: \
	DECLARE_CLASS(ULoadoutMenuPopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutMenuPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<ULoadoutMenuPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_INCLASS \
private: \
	static void StaticRegisterNativesULoadoutMenuPopupWidget(); \
	friend struct Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics; \
public: \
	DECLARE_CLASS(ULoadoutMenuPopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutMenuPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<ULoadoutMenuPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadoutMenuPopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadoutMenuPopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutMenuPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutMenuPopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutMenuPopupWidget(ULoadoutMenuPopupWidget&&); \
	NO_API ULoadoutMenuPopupWidget(const ULoadoutMenuPopupWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutMenuPopupWidget(ULoadoutMenuPopupWidget&&); \
	NO_API ULoadoutMenuPopupWidget(const ULoadoutMenuPopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutMenuPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutMenuPopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadoutMenuPopupWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadoutMenuPowerItemRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuPowerItemRTB); } \
	FORCEINLINE static uint32 __PPO__LoadoutMenuAddonRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuAddonRTB); } \
	FORCEINLINE static uint32 __PPO__LoadoutMenuOfferingRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuOfferingRTB); } \
	FORCEINLINE static uint32 __PPO__LoadoutMenuPerkRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuPerkRTB); } \
	FORCEINLINE static uint32 __PPO__BotRoleIndexText() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, BotRoleIndexText); } \
	FORCEINLINE static uint32 __PPO__LoadoutMenuInventoryRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuInventoryRTB); } \
	FORCEINLINE static uint32 __PPO__LoadoutMenuSubtitleRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuSubtitleRTB); } \
	FORCEINLINE static uint32 __PPO__LoadoutMenuPresetRTB() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuPresetRTB); } \
	FORCEINLINE static uint32 __PPO__DropDownListWidget() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, DropDownListWidget); } \
	FORCEINLINE static uint32 __PPO__DropDownListTrigger() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, DropDownListTrigger); } \
	FORCEINLINE static uint32 __PPO__CoreMenuPower() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreMenuPower); } \
	FORCEINLINE static uint32 __PPO__CoreMenuItem() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreMenuItem); } \
	FORCEINLINE static uint32 __PPO__CoreAddon_1() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreAddon_1); } \
	FORCEINLINE static uint32 __PPO__CoreAddon_2() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreAddon_2); } \
	FORCEINLINE static uint32 __PPO__CoreOffering() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreOffering); } \
	FORCEINLINE static uint32 __PPO__CorePerk_1() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_1); } \
	FORCEINLINE static uint32 __PPO__CorePerk_2() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_2); } \
	FORCEINLINE static uint32 __PPO__CorePerk_3() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_3); } \
	FORCEINLINE static uint32 __PPO__CorePerk_4() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_4); } \
	FORCEINLINE static uint32 __PPO__PresetContainer() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, PresetContainer); } \
	FORCEINLINE static uint32 __PPO__InventoryGridContainer() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, InventoryGridContainer); } \
	FORCEINLINE static uint32 __PPO__PaginationGridContainer() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, PaginationGridContainer); } \
	FORCEINLINE static uint32 __PPO__LeftArrow() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LeftArrow); } \
	FORCEINLINE static uint32 __PPO__RightArrow() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, RightArrow); } \
	FORCEINLINE static uint32 __PPO__PlusSignImage() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, PlusSignImage); } \
	FORCEINLINE static uint32 __PPO__LinkBarImage() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, LinkBarImage); } \
	FORCEINLINE static uint32 __PPO__AddonLinkBarImage() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, AddonLinkBarImage); } \
	FORCEINLINE static uint32 __PPO___onPaginationAnimationCompletedDelegate() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onPaginationAnimationCompletedDelegate); } \
	FORCEINLINE static uint32 __PPO___onLoadoutMenuSlotClickedDelegate() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuSlotClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___onLoadoutMenuSlotSelectedDelegate() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuSlotSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___onLoadoutMenuInventorySlotClickedDelegate() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuInventorySlotClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___onLoadoutMenuPresetSlotClickedDelegate() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuPresetSlotClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___onSelectedCharacterChangedDelegate() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onSelectedCharacterChangedDelegate); } \
	FORCEINLINE static uint32 __PPO___loadoutPowerClass() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutPowerClass); } \
	FORCEINLINE static uint32 __PPO___loadoutItemWidgetClass() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___loadoutAddonClass() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutAddonClass); } \
	FORCEINLINE static uint32 __PPO___loadoutOfferingClass() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutOfferingClass); } \
	FORCEINLINE static uint32 __PPO___loadoutPerkClass() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutPerkClass); } \
	FORCEINLINE static uint32 __PPO___paginationWidgetClass() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _paginationWidgetClass); } \
	FORCEINLINE static uint32 __PPO___inventoryPerRow() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerRow); } \
	FORCEINLINE static uint32 __PPO___inventoryPerColumn() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerColumn); } \
	FORCEINLINE static uint32 __PPO___cellsPerRow() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _cellsPerRow); } \
	FORCEINLINE static uint32 __PPO___inventoryItemPadding() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryItemPadding); } \
	FORCEINLINE static uint32 __PPO___inventoryPerkPadding() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerkPadding); } \
	FORCEINLINE static uint32 __PPO___inventoryOfferingPadding() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryOfferingPadding); } \
	FORCEINLINE static uint32 __PPO___inventoryPerkExtraNudge() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerkExtraNudge); } \
	FORCEINLINE static uint32 __PPO___inventoryOfferingExtraNudge() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryOfferingExtraNudge); } \
	FORCEINLINE static uint32 __PPO__HorizontalAlignment() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, HorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__VerticalAlignment() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, VerticalAlignment); } \
	FORCEINLINE static uint32 __PPO___inventoryItemWidgetList() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryItemWidgetList); } \
	FORCEINLINE static uint32 __PPO___perkSlotWidget() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _perkSlotWidget); } \
	FORCEINLINE static uint32 __PPO___addonSlotWidget() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _addonSlotWidget); } \
	FORCEINLINE static uint32 __PPO___menuLoadoutPartViewData() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _menuLoadoutPartViewData); } \
	FORCEINLINE static uint32 __PPO___loadoutSelectedSlot() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutSelectedSlot); } \
	FORCEINLINE static uint32 __PPO___numberOfPaginationItem() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _numberOfPaginationItem); } \
	FORCEINLINE static uint32 __PPO___perkData() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _perkData); } \
	FORCEINLINE static uint32 __PPO___addonLoadoutData() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _addonLoadoutData); } \
	FORCEINLINE static uint32 __PPO___inventoryViewData() { return STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryViewData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_41_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class ULoadoutMenuPopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutMenuPopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
