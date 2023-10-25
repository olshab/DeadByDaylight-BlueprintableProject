#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGAtlantaDailyRewardsScreen.generated.h"

class UUMGAtlantaDailyRewardsGrid;
class UCanvasPanel;
class UUMGPopupButton;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaDailyRewardsScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaDailyRewardsGrid* DailyRewardWidgetsGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ContinueButtonPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPopupButton* ContinueButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RemainingTimeTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor NormalColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor WarningColor;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleCurrentActiveDailyRewardStateChanged(int32 dailyRewardIndex, int32 dailyRewardNewState);

	UFUNCTION(BlueprintCallable)
	void HandleContinueButtonClick();

public:
	UUMGAtlantaDailyRewardsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaDailyRewardsScreen) { return 0; }
