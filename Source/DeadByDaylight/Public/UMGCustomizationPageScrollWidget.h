#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGGridPageScrollWidget.h"
#include "StoreItemSlotData.h"
#include "UMGCustomizationPageScrollWidget.generated.h"

class UUMGCustomizationItemWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationPageScrollWidget : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCustomizationItemWidget> _customizationItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreItemSlotData> _availableItemsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UUMGCustomizationItemWidget*> _itemWidgets;

private:
	UFUNCTION(BlueprintCallable)
	void OnAvailableItemSelectedCallback(int32 itemIndex);

public:
	UUMGCustomizationPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationPageScrollWidget) { return 0; }
