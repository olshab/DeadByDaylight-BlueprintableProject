#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGCharacterSelectSubmenuButton.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCharacterSelectSubmenuButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* NotificationPanel;

public:
	UUMGCharacterSelectSubmenuButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSelectSubmenuButton) { return 0; }
