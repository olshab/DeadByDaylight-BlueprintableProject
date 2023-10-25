#include "AISkill_Interaction_SetGeneratorTrap.h"

UAISkill_Interaction_SetGeneratorTrap::UAISkill_Interaction_SetGeneratorTrap()
{
	this->MinGeneratorRepairPercentToSetTrap = 0.500000;
	this->CheckKillerDistanceInterval = 0.250000;
	this->MinKillerApproachingSpeed = 300.000000;
	this->MinKillerApproachingFastStreak = 2;
	this->TerrorLevelToSetTrap = EAITerrorLevel::None;
	this->TerrorLevelToSetTrapImmediately = EAITerrorLevel::None;
	this->TerrorLevelCloseRange = 50.000000;
}
