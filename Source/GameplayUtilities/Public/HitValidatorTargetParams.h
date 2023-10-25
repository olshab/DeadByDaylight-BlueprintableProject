#pragma once

#include "CoreMinimal.h"
#include "HitValidatorTargetParams.generated.h"

class ACharacter;
class UCapsuleComponent;

USTRUCT(BlueprintType)
struct FHitValidatorTargetParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACharacter* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCapsuleComponent* HittableCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetLocationTimestamp;

public:
	GAMEPLAYUTILITIES_API FHitValidatorTargetParams();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidatorTargetParams) { return 0; }
