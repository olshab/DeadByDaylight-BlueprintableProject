#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreItemPreviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUMGBloodStoreItemPreviewWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _itemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _itemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _itemPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _refreshPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _nodeStatusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _refreshTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _itemSelectionTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _itemSelectionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _purchaseTitle;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnselectItem();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowRefreshButton(bool showRefreshButton, bool isRefreshFree);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowPurchaseButton(bool showPurchaseButton);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayItem(bool isItemPurchaseable, bool isItemAffordable);

	UFUNCTION(BlueprintCallable)
	void BroadcastUnselectPressed();

	UFUNCTION(BlueprintCallable)
	void BroadcastRefreshPressed();

	UFUNCTION(BlueprintCallable)
	void BroadcastPurchasePressed();

public:
	UUMGBloodStoreItemPreviewWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreItemPreviewWidget) { return 0; }
