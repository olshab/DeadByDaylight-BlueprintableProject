#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnCharacterUseFreeTicketButtonClickedEvent.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCharacterFreeTicketWidget.generated.h"

class UVerticalBox;
class UWidgetSwitcher;
class UUMGCharacterFreeTicketItemButton;

UCLASS(Blueprintable, EditInlineNew)
class UUMGCharacterFreeTicketWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCharacterUseFreeTicketButtonClickedEvent OnUseFreeTicketEvent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* PanelSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* FreeTicketItemButtonBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCharacterFreeTicketItemButton> _buttonClass;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateBGColor(bool isSlasher);

public:
	UFUNCTION(BlueprintCallable)
	void HandleButtonClickEvent(const FString& ticketID, const FString& characterName);

public:
	UUMGCharacterFreeTicketWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterFreeTicketWidget) { return 0; }
