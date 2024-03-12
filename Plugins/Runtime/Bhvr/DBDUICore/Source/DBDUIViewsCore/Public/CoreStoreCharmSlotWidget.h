#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStoreCharmSlotWidget.generated.h"

class UCoreOnHoverBorderWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharmSlotWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const int32 slotIndex);

public:
	UCoreStoreCharmSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharmSlotWidget) { return 0; }
