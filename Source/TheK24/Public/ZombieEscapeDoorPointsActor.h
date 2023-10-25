#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieEscapeDoorPointsActor.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class AZombieEscapeDoorPointsActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UArrowComponent*> _availablePoints;

public:
	AZombieEscapeDoorPointsActor();
};

FORCEINLINE uint32 GetTypeHash(const AZombieEscapeDoorPointsActor) { return 0; }
