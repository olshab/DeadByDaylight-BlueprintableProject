#include "EventTrackerObjective.h"

FEventTrackerObjective::FEventTrackerObjective()
{
	this->Id = TEXT("");
	this->MaxProgressionPerMatchPlayer = 0;
	this->QuestEventId = TEXT("");
	this->QuestEventParams = TEXT("");
	this->QuestEventConditions = TArray<FEventTrackerQuestEventCondition>();
	this->QuestEventConditions_IsSet = false;
	this->Milestones = TArray<FEventTrackerObjectiveMilestone>();
}
