#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "InventorySlotData.h"
#include "UMGPageScrollWidget.h"
#include "EInventoryGridFormat.h"
#include "UMGLoadoutPageScrollWidget.generated.h"

class UUMGLoadoutItemButton;

UCLASS(Blueprintable, EditInlineNew)
class UUMGLoadoutPageScrollWidget : public UUMGPageScrollWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShouldResizeWidget;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGLoadoutItemButton> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInventoryGridFormat _gridFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FInventorySlotData> _inventoryData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<int32> _inventorySelectedItemIndexes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString _subtitle;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetItemWidgetClass();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetItemIsSelected(int32 index, bool isSelected);

public:
	UFUNCTION(BlueprintCallable)
	void SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleItemClicked(FName itemID);

public:
	UUMGLoadoutPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutPageScrollWidget) { return 0; }
