#pragma once

#include "CoreMinimal.h"
#include "HitValidatorInstigatorParams.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FHitValidatorInstigatorParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPrimitiveComponent* HitPrimitive;

public:
	GAMEPLAYUTILITIES_API FHitValidatorInstigatorParams();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidatorInstigatorParams) { return 0; }
