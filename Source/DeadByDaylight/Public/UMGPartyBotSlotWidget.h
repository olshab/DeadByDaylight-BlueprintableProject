#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "EAIDifficultyLevel.h"
#include "UMGPartyBotSlotWidget.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyBotSlotWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RoleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* BotDifficultyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CharacterNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* EditButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* EditIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* InvitePartyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* InvitePartyCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIDifficultyLevel, FSlateColor> DifficultyColors;

private:
	UFUNCTION(BlueprintCallable)
	void HandleInvitePartyButtonEvent();

	UFUNCTION(BlueprintCallable)
	void HandleEditButtonEvent();

public:
	UUMGPartyBotSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartyBotSlotWidget) { return 0; }
