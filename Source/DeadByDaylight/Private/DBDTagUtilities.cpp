#include "DBDTagUtilities.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;

void UDBDTagUtilities::GetAllActorsWithReplicatedTag(const UObject* worldContextObject, FName tag, TArray<AActor*>& outActors)
{

}

void UDBDTagUtilities::GetAllActorsOfClassWithReplicatedTag(const UObject* worldContextObject, TSubclassOf<AActor> actorClass, FName tag, TArray<AActor*>& outActors)
{

}

bool UDBDTagUtilities::ActorHasReplicatedTag(const AActor* actor, FName tag)
{
	return false;
}

UDBDTagUtilities::UDBDTagUtilities()
{

}
