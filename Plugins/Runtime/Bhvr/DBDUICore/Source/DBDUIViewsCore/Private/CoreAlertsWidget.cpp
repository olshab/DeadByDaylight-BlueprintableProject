#include "CoreAlertsWidget.h"
#include "AlertsViewData.h"

class UCoreButtonWidget;
class UUITweenInstance;

void UCoreAlertsWidget::ShowRewardTooltip(UCoreButtonWidget* rewardWidget)
{

}

void UCoreAlertsWidget::ShowRewardNameVisibility(UUITweenInstance* tween)
{

}

void UCoreAlertsWidget::ShowAlertRewards(const FAlertsViewData& alertsViewData)
{

}

void UCoreAlertsWidget::SetRewardsDescription(const FString& rewardsDescription)
{

}

void UCoreAlertsWidget::RewardAlertSequenceCompleted(UUITweenInstance* tween)
{

}

void UCoreAlertsWidget::OnRewardItemsFadeOutCompleted(UUITweenInstance* tween)
{

}

void UCoreAlertsWidget::HideRewardTooltip(UCoreButtonWidget* rewardWidget)
{

}

void UCoreAlertsWidget::EndRewardDisplayRequested()
{

}

void UCoreAlertsWidget::EndOfRewardDisplay(UUITweenInstance* tween)
{

}

void UCoreAlertsWidget::DisplayNextRewardSequence(UUITweenInstance* tween)
{

}

void UCoreAlertsWidget::DisplayNextReward(UUITweenInstance* tween)
{

}

UCoreAlertsWidget::UCoreAlertsWidget()
{
	this->RewardWidgetClass = NULL;
	this->AlertRewardContainer = NULL;
	this->RewardsDescriptionText = NULL;
	this->EventIMG = NULL;
	this->RewardName = NULL;
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->_fadeInRewardDuration = 0.000000;
	this->_fadeRewardDelay = 0.000000;
	this->_fadeInRewardEasing = EEasingType::Linear;
	this->_sequenceDelay = 0.000000;
	this->_sequenceFadeOutDuration = 0.000000;
	this->_finalSequenceDelay = 0.000000;
	this->_finalSequenceFadeOutDuration = 0.000000;
	this->_rewardScalingDuration = 0.000000;
	this->_rewardScalingDelay = 0.000000;
	this->_rewardScalingIdleDuration = 0.000000;
	this->_rewardScalingEasing = EEasingType::Linear;
	this->_sequenceShiftDuration = 0.000000;
	this->_sequenceShiftDelay = 0.000000;
	this->_sequenceShiftEasing = EEasingType::Linear;
}
