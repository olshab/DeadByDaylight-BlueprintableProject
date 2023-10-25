#pragma once

#include "CoreMinimal.h"
#include "DBDBaseActorSpawnerActor2.h"
#include "DBDActorSpawnerActor2.generated.h"

class UActorSpawner;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDActorSpawnerActor2 : public ADBDBaseActorSpawnerActor2
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UActorSpawner* actorSpawnerComponent;

public:
	ADBDActorSpawnerActor2();
};

FORCEINLINE uint32 GetTypeHash(const ADBDActorSpawnerActor2) { return 0; }
