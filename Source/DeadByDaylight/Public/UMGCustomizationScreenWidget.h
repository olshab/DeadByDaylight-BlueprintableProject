#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreItemSlotData.h"
#include "UMGCustomizationScreenWidget.generated.h"

class UUMGCustomizationPageScrollWidget;
class UUMGCustomizationCategoriesBar;
class UUMGCustomizationItemBuyButton;
class UUMGCustomizationItemWidget;
class UVerticalBox;
class UTextBlock;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationScreenWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationPageScrollWidget* PageScrollWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationCategoriesBar* CustomizationCategoriesBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CategoryLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CurrentlyEquippedLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AvailableInOutfitsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* UnlockItemContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationItemWidget* OutfitItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* PriceContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCustomizationItemBuyButton> PriceButtonWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FName _currentSelectedItem;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCategoryLabel(const ECustomizationCategory category);

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastUnlockWithCurrencyEvent(int32 currencyId, const FString& combinedItem);

	UFUNCTION(BlueprintCallable)
	void BroadcastCustomizationCategoryButtonPressed(int32 categoryIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastAvailableItemSelectedEvent(int32 itemIndex, const FStoreItemSlotData& selectedItem, const FStoreItemSlotData& parentItem);

public:
	UUMGCustomizationScreenWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationScreenWidget) { return 0; }
