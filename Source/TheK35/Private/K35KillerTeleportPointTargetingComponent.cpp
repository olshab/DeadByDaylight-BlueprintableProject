#include "K35KillerTeleportPointTargetingComponent.h"

class AK35KillerTeleportPoint;

bool UK35KillerTeleportPointTargetingComponent::HasTarget() const
{
	return false;
}

AK35KillerTeleportPoint* UK35KillerTeleportPointTargetingComponent::GetTarget() const
{
	return NULL;
}

UK35KillerTeleportPointTargetingComponent::UK35KillerTeleportPointTargetingComponent()
{

}
