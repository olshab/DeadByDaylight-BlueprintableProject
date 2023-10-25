#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestMovableActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class UNITTESTUTILITIES_API ATestMovableActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UBoxComponent* BoxComponent;

public:
	ATestMovableActor();
};

FORCEINLINE uint32 GetTypeHash(const ATestMovableActor) { return 0; }
