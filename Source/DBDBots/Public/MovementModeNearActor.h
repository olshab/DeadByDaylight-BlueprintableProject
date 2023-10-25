#pragma once

#include "CoreMinimal.h"
#include "ECharacterMovementTypes.h"
#include "Templates/SubclassOf.h"
#include "EPlayerRole.h"
#include "AITunableParameter.h"
#include "AIRoll.h"
#include "MovementModeNearActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMovementModeNearActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementTypes NearActorMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> NearActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter NearDistanceSquared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIRoll SeeActorRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> ApplyToPlayerRoles;

public:
	DBDBOTS_API FMovementModeNearActor();
};

FORCEINLINE uint32 GetTypeHash(const FMovementModeNearActor) { return 0; }
