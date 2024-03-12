#include "K35KillerTeleportToKillerTeleportPointInteractionDefinition.h"
#include "UObject/NoExportTypes.h"

class AK35KillerTeleportPoint;
class ADBDPlayer;

void UK35KillerTeleportToKillerTeleportPointInteractionDefinition::Server_SetTeleportPoint_Implementation(AK35KillerTeleportPoint* killerTeleportPoint)
{

}

void UK35KillerTeleportToKillerTeleportPointInteractionDefinition::OnTeleportationComplete(ADBDPlayer* player)
{

}

void UK35KillerTeleportToKillerTeleportPointInteractionDefinition::OnKillerCollisionIgnoreLingerComplete(ADBDPlayer* player)
{

}

void UK35KillerTeleportToKillerTeleportPointInteractionDefinition::Multicast_SetTeleportPoint_Implementation(AK35KillerTeleportPoint* killerTeleportPoint)
{

}

void UK35KillerTeleportToKillerTeleportPointInteractionDefinition::Multicast_OnTeleportStarted_Implementation(ADBDPlayer* player, const FVector& teleportStartLocation, const FVector& teleportEndLocation, AK35KillerTeleportPoint* targetTeleportPoint)
{

}

void UK35KillerTeleportToKillerTeleportPointInteractionDefinition::Multicast_OnTeleportEnded_Implementation(ADBDPlayer* player, const FVector& teleportEndLocation)
{

}

UK35KillerTeleportToKillerTeleportPointInteractionDefinition::UK35KillerTeleportToKillerTeleportPointInteractionDefinition()
{
	this->_killerCollisionIgnoredLingerTime = 0.500000;
}
