#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "PlayerLevelTooltipWidget.generated.h"

class UUMGTooltipContentPlayerLevelWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UPlayerLevelTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTooltipContentPlayerLevelWidget* PlayerLevelContent;

public:
	UPlayerLevelTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerLevelTooltipWidget) { return 0; }
