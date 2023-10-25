#include "SkillCheckQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void USkillCheckQEEvaluator::OnSkillCheckSuccess(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void USkillCheckQEEvaluator::OnSkillCheckFail(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

USkillCheckQEEvaluator::USkillCheckQEEvaluator()
{
	this->_consecutiveOnly = false;
	this->_greatSkillCheckOnly = false;
}
