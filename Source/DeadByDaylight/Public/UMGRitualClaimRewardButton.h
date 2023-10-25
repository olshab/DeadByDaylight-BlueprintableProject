#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGRitualClaimRewardButton.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRitualClaimRewardButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedAnimationCompleted);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPressedAnimationCompleted OnPressedAnimationCompleted;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ClaimFxPanel;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetClaimedButtonStatus(bool isClaimed, float percent);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnPressedAnimationCompleted();

public:
	UUMGRitualClaimRewardButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRitualClaimRewardButton) { return 0; }
