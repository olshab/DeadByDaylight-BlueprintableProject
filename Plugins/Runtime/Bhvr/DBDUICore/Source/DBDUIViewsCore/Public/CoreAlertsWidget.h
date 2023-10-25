#pragma once

#include "CoreMinimal.h"
#include "EEasingType.h"
#include "ETooltipVerticalAlignment.h"
#include "AlertsViewInterface.h"
#include "ETooltipHorizontalAlignment.h"
#include "CoreBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AlertsViewData.h"
#include "RewardWrapperViewData.h"
#include "CoreAlertsWidget.generated.h"

class UHorizontalBox;
class UCoreRewardWrapperWidget;
class UDBDRichTextBlock;
class UCoreButtonWidget;
class UDBDImage;
class UUITweenInstance;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAlertsWidget : public UCoreBaseUserWidget, public IAlertsViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreRewardWrapperWidget> RewardWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHorizontalBox* AlertRewardContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDRichTextBlock* RewardsDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* EventIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDRichTextBlock* RewardName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fadeInRewardDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fadeRewardDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EEasingType _fadeInRewardEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sequenceDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sequenceFadeOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _finalSequenceDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _finalSequenceFadeOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _rewardInitialScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _rewardFinalScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rewardScalingDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rewardScalingDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rewardScalingIdleDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EEasingType _rewardScalingEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sequenceShiftDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sequenceShiftDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EEasingType _sequenceShiftEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _rewardContainerShiftFinalPosition;

private:
	UFUNCTION(BlueprintCallable)
	void ShowRewardTooltip(UCoreButtonWidget* rewardWidget);

	UFUNCTION(BlueprintCallable)
	void ShowRewardNameVisibility(UUITweenInstance* tween);

public:
	UFUNCTION(BlueprintCallable)
	void ShowAlertRewards(const FAlertsViewData& alertsViewData);

	UFUNCTION(BlueprintCallable)
	void SetRewardsDescription(const FString& rewardsDescription);

private:
	UFUNCTION(BlueprintCallable)
	void RewardAlertSequenceCompleted(UUITweenInstance* tween);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayDisplayRewardSound(FRewardWrapperViewData rewardData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayDisappearRewardSound();

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardItemsFadeOutCompleted(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void HideRewardTooltip(UCoreButtonWidget* rewardWidget);

public:
	UFUNCTION(BlueprintCallable)
	void EndRewardDisplayRequested();

private:
	UFUNCTION(BlueprintCallable)
	void EndOfRewardDisplay(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void DisplayNextRewardSequence(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void DisplayNextReward(UUITweenInstance* tween);

public:
	UCoreAlertsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAlertsWidget) { return 0; }
