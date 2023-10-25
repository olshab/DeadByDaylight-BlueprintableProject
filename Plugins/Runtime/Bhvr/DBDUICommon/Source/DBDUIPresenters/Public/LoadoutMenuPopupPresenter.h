#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "ELoadoutSlot.h"
#include "InventorySlotData.h"
#include "EPlayerRole.h"
#include "LoadoutMenuPopupPresenter.generated.h"

class ULoadoutMenuPopupViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API ULoadoutMenuPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuPopupViewData*> _loadoutPopupSlotData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuPopupViewData*> _loadoutPopupInventoryData;

private:
	UFUNCTION(BlueprintCallable)
	ULoadoutMenuPopupViewData* SetLoadoutPopupViewData(const FInventorySlotData& slotData, const EPlayerRole playerRole);

	UFUNCTION(BlueprintCallable)
	void OnSelectedCharacterChanged(int32 selectedCharacterIndex);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPresetSelected(const int32 presetId, const ELoadoutSlot slotSelected);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPresetClicked(const int32 presetId, const ELoadoutSlot slotSelected);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuInventorySlotClick(const ELoadoutSlot itemIndex, const FName itemId);

public:
	ULoadoutMenuPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuPopupPresenter) { return 0; }
