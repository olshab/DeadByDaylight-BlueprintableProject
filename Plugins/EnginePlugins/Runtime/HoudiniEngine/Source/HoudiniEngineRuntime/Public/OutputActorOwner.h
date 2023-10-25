#pragma once

#include "CoreMinimal.h"
#include "OutputActorOwner.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOutputActorOwner
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
	AActor* OutputActor;

public:
	HOUDINIENGINERUNTIME_API FOutputActorOwner();
};

FORCEINLINE uint32 GetTypeHash(const FOutputActorOwner) { return 0; }
