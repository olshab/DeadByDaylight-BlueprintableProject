#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS(Blueprintable)
class UNITTESTUTILITIES_API ATestActor : public AActor
{
	GENERATED_BODY()

public:
	ATestActor();
};

FORCEINLINE uint32 GetTypeHash(const ATestActor) { return 0; }
