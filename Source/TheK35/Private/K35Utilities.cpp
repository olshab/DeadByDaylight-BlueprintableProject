#include "K35Utilities.h"

class ACamperPlayer;
class AK35Power;
class UObject;
class ASlasherPlayer;

bool UK35Utilities::IsSurvivorAbleToBeAffectedByPower(const ACamperPlayer* survivor, const ASlasherPlayer* killer)
{
	return false;
}

AK35Power* UK35Utilities::GetK35Power(const UObject* worldContextObject)
{
	return NULL;
}

UK35Utilities::UK35Utilities()
{

}
