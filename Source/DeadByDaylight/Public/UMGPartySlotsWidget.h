#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPartySlotsWidget.generated.h"

class UPanelWidget;
class UUMGPartyBotSlotWidget;
class UUMGPartyPlayerSlotWidget;
class UVerticalBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPartySlotsWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* PartyPlayerSlotsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UUMGPartyPlayerSlotWidget*> _partyPlayerSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* PartyBotSlotsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGPartyBotSlotWidget> PartyBotSlotWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSlotCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor ConflictingCharacterColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor NormalCharacterColor;

private:
	UFUNCTION(BlueprintCallable)
	void SwapWidgets(int32 first, int32 second);

	UFUNCTION(BlueprintCallable)
	void SetWidgetState(int32 index, EPartyPlayerSlotWidgetState state);

	UFUNCTION(BlueprintCallable)
	void RearrangePartySlots();

	UFUNCTION(BlueprintCallable)
	void HandleKickPlayerButtonClickEvent(const FString& friendKrakenId);

	UFUNCTION(BlueprintCallable)
	void HandleInviteFriendButtonClickEvent();

	UFUNCTION(BlueprintCallable)
	void HandleBotEditButtonClickEvent(const int32 index);

public:
	UUMGPartySlotsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartySlotsWidget) { return 0; }
