#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "InventorySlotData.h"
#include "Templates/SubclassOf.h"
#include "EPlayerRole.h"
#include "ELoadoutSlot.h"
#include "LoadoutMenuPresenter.generated.h"

class ULoadoutMenuViewData;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API ULoadoutMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> LoadoutMenuWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuViewData*> _loadoutMenuSlotData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuViewData*> _loadoutMenuInventoryData;

private:
	UFUNCTION(BlueprintCallable)
	ULoadoutMenuViewData* SetLoadoutViewData(const FInventorySlotData& slotData, const EPlayerRole playerRole);

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
	ULoadoutMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuPresenter) { return 0; }
