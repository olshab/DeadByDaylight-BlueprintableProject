#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseButtonWidget.h"
#include "OnIntegerIntegerGenericEvent.h"
#include "EUMGDailyRewardWidgetState.h"
#include "UMGDailyRewardWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UTextBlock;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGDailyRewardWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnIntegerIntegerGenericEvent OnDailyRewardStateChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMarkedSpecial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUMGDailyRewardWidgetState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* AmountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ItemNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RewardNumberText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* RewardTypeSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ItemInfoPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* OfferingInfoPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* GenericInfoPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* FreeTicketInfoPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CrateKeyInfoPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* OfferingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* GenericRewardIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* FreeTicketRewardIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ParentItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CrateKeyRewardIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ParentItemPanel;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StopIdleAnimationForState(const EUMGDailyRewardWidgetState inState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetStateVisuals(const EUMGDailyRewardWidgetState inState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRarityColors(FColor backgroundColor, FColor tintColor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayIdleAnimationForState(const EUMGDailyRewardWidgetState inState);

	UFUNCTION(BlueprintCallable)
	void HandleUnlockRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleUnlockMysteryRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleDiscoverRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleCollectRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleCollectButtonClick();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DiscoverMysteryReward();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CollectReward();

public:
	UUMGDailyRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDailyRewardWidget) { return 0; }
