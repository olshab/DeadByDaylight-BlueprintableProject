#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "LoadoutSlotFloatingWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class ULoadoutSlotFloatingWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Message;

public:
	ULoadoutSlotFloatingWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutSlotFloatingWidget) { return 0; }
