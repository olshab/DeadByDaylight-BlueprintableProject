#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterFreeTicketButton.generated.h"

class UImage;
class UWidgetSwitcher;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UUMGCharacterFreeTicketButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* ButtonSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* FreeTicketLeftSecondsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* FreeTicketLeftSecondsBG;

public:
	UUMGCharacterFreeTicketButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterFreeTicketButton) { return 0; }
