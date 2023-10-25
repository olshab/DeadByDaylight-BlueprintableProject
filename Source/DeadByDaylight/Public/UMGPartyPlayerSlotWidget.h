#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "Fonts/SlateFontInfo.h"
#include "UMGPartyPlayerSlotWidget.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UTextBlock;
class UWidgetSwitcher;
class UImage;
class UWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyPlayerSlotWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* AdditionalInformationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* FriendIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* KickPlayerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateFontInfo CharacterNameStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateFontInfo PlayerInMatchStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlayerInMatchOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlayerInLobbyOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidget* PlayerInformationContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ReadyIconsCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* RequestRoleIconsCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* RoleSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* LeaderIcon;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualsFromState(EPartyPlayerSlotWidgetState widgetState);

private:
	UFUNCTION(BlueprintCallable)
	void HandleKickPlayerButtonEvent();

public:
	UUMGPartyPlayerSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartyPlayerSlotWidget) { return 0; }
