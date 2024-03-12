#include "AISkill_FindInteractable_SeanceSpot.h"

void UAISkill_FindInteractable_SeanceSpot::OnLevelReadyToPlay()
{

}

UAISkill_FindInteractable_SeanceSpot::UAISkill_FindInteractable_SeanceSpot()
{
	this->LowerExposedValueKillers = TArray<FKillerFilterItem>();
	this->DirectTeleportKillers = TArray<FKillerFilterItem>();
	this->TeleportInteractables = TArray<TSubclassOf<AActor>>();
}
