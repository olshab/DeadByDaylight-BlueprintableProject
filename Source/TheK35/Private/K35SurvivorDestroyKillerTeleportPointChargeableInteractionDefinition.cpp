#include "K35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition.h"

class AK35KillerTeleportPoint;

void UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition::OnIntroCompleted()
{

}

AK35KillerTeleportPoint* UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition::GetOwningKillerTeleportPoint() const
{
	return NULL;
}

UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition::UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition()
{
	this->_horizontalDestroyCheckDistance = 75.000000;
	this->_verticalDestroyCheckDistance = 150.000000;
	this->_cameraCheckSphereRadius = 20.000000;
	this->_lineOfSightCheckSphereRadius = 10.000000;
	this->_killerInstinctStatusEffect = NULL;
	this->_lineOfSightCollisionSize = 15.000000;
}
