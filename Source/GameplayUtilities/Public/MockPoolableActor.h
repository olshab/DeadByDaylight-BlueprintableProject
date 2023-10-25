#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MockPoolableActor.generated.h"

class UPoolableActorComponent;

UCLASS(Blueprintable)
class GAMEPLAYUTILITIES_API AMockPoolableActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UPoolableActorComponent* _poolable;

public:
	AMockPoolableActor();
};

FORCEINLINE uint32 GetTypeHash(const AMockPoolableActor) { return 0; }
