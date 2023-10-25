#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGCharacterFreeTicketItemButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterFreeTicketItemButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidget(const FString& bgPath, bool isSlasher, int32 durationInHours, int32 itemCount, const FSlateColor& iconColor);

public:
	UFUNCTION(BlueprintCallable)
	void BroadcastClickEvent();

public:
	UUMGCharacterFreeTicketItemButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterFreeTicketItemButton) { return 0; }
