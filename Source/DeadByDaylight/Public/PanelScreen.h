#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "PanelScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UPanelScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnWebNodeSelected(int32 characterId, int32 id, int32 nodeDepth);

	UFUNCTION(BlueprintCallable)
	void OnWebNodeHovered(int32 id);

	UFUNCTION(BlueprintCallable)
	void OnWebBuilt(int32 characterId, bool isEmpty);

	UFUNCTION(BlueprintCallable)
	void OnStoreButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnSideTabButtonClick(int32 tabIndex);

	UFUNCTION(BlueprintCallable)
	void OnSequenceStepCompleted(int32 characterId, int32 id);

	UFUNCTION(BlueprintCallable)
	void OnSelectedEquipableSlotZoomChange(bool zoomIn);

	UFUNCTION(BlueprintCallable)
	void OnRotateCharacter(float mouseDistanceChange);

	UFUNCTION(BlueprintCallable)
	void OnRoleButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnReservedBloodPoints(int32 characterId, int32 bloodPoints, bool fullCost);

	UFUNCTION(BlueprintCallable)
	void OnRegenerateButtonClick(int32 characterId);

	UFUNCTION(BlueprintCallable)
	void OnPrestigeUp(int32 characterId);

	UFUNCTION(BlueprintCallable)
	void OnPanelsHidden();

	UFUNCTION(BlueprintCallable)
	void OnNodeConsumptionAnimDone();

	UFUNCTION(BlueprintCallable)
	void OnNodeCollectionAnimDone();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutSlotButtonClick(int32 slotIndex);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutSearchClicked();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutSearchClear();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutPresetClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void OnLevelUpShown();

	UFUNCTION(BlueprintCallable)
	void OnLevelUpDone();

	UFUNCTION(BlueprintCallable)
	void OnItemUnselected(int32 itemIndex);

	UFUNCTION(BlueprintCallable)
	void OnItemSelected(int32 itemIndex);

	UFUNCTION(BlueprintCallable)
	void OnEventButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnEquipableSlotClicked(int32 clickedSlotCategory, int32 clickedSlotIndex);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSearchClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSearchClear();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationPresetClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationPlayMoriSelected();

	UFUNCTION(BlueprintCallable)
	void OnConfirmCollectSelectedNode(int32 characterId);

	UFUNCTION(BlueprintCallable)
	void OnCharInfoClick();

	UFUNCTION(BlueprintCallable)
	void OnCharacterSlotButtonClick(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnCharacterInfoClick();

	UFUNCTION(BlueprintCallable)
	void OnBloodwebCenterButtonSelected();

	UFUNCTION(BlueprintCallable)
	void OnBloodwebCenterButtonHovered();

	UFUNCTION(BlueprintCallable)
	void OnAvailableItemsSortingChange(int32 newSorting);

	UFUNCTION(BlueprintCallable)
	void OnAvailableItemClicked(int32 clickedItemIndex);

public:
	UPanelScreen();
};

FORCEINLINE uint32 GetTypeHash(const UPanelScreen) { return 0; }
