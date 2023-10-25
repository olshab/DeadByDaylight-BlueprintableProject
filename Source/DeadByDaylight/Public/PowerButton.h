#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EActionButtonState.h"
#include "ERadialProgressBarType.h"
#include "PowerButton.generated.h"

class UUMGInventoryItemButton;
class UCanvasPanel;
class UActionButton;
class UTextBlock;
class UImage;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UPowerButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UActionButton* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SwitchIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CountContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* RadialProgressBarContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CountLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* TierImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AddonsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGInventoryItemButton* FirstAddonSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGInventoryItemButton* SecondAddonSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UProgressBar* FillPowerChargeProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnabledLongPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _itemCount;

public:
	UFUNCTION(BlueprintCallable)
	void SetSwitchIconActive(bool active);

	UFUNCTION(BlueprintCallable)
	void SetState(EActionButtonState state);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRadialProgressPercentage(const float progression, ERadialProgressBarType progressBarType);

	UFUNCTION(BlueprintCallable)
	void SetRadialProgressBarActice(bool active);

	UFUNCTION(BlueprintCallable)
	void SetPowerIntensityOpacity(float opacity);

	UFUNCTION(BlueprintCallable)
	void SetFillProgressPercentage(const float chargeProgressionPercentage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTierChanged(int32 previousTier, int32 currentTier, bool isFirstTime);

	UFUNCTION(BlueprintCallable)
	bool IsRadialProgressBarActive();

	UFUNCTION(BlueprintCallable)
	UActionButton* GetActionButton();

public:
	UPowerButton();
};

FORCEINLINE uint32 GetTypeHash(const UPowerButton) { return 0; }
