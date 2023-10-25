#pragma once

#include "CoreMinimal.h"
#include "UMGLoadoutBaseWidget.h"
#include "EInventoryGridFormat.h"
#include "InventorySlotData.h"
#include "UMGLoadoutWidget.generated.h"

class UUMGLoadoutPageScrollWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGLoadoutWidget : public UUMGLoadoutBaseWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText InventoryItemTypeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText InventoryFilterText;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutPageScrollWidget* PageScrollWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText LoadoutTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText InventoryPanelTitleText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle);

public:
	UUMGLoadoutWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutWidget) { return 0; }
