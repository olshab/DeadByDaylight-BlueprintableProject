#pragma once

#include "CoreMinimal.h"
#include "OnSetDataAnimationCompleteDelegate.h"
#include "CoreButtonWidget.h"
#include "OnboardingTutorialButtonViewData.h"
#include "CoreOnboardingTutorialButtonWidget.generated.h"

class UCoreRewardWrapperWidget;
class UDBDImage;
class UWidgetSwitcher;
class UDBDTextBlock;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnSetDataAnimationCompleteDelegate OnSetDataAnimationCompleteDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UnavailablePressedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* UnavailablePressedSfx;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RewardsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* RoleIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* StateSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* LockedImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* CompletedImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCoreRewardWrapperWidget*> RewardWrappers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnboardingTutorialButtonViewData ViewData;

protected:
	UFUNCTION(BlueprintCallable)
	void SetVisual();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetUIEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsKillSwitch(bool isKillSwitch);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FOnboardingTutorialButtonViewData& viewDataNew, bool isRefreshingWithAnimation);

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardReleased(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnRewardPressed(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnRewardClicked(UCoreButtonWidget* buttonTarget);

public:
	UFUNCTION(BlueprintPure)
	bool IsInUnavailableStep() const;

public:
	UCoreOnboardingTutorialButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingTutorialButtonWidget) { return 0; }
