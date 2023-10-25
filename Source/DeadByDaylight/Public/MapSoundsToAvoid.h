#pragma once

#include "CoreMinimal.h"
#include "MapSoundsToAvoid.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FMapSoundsToAvoid
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPrimitiveComponent* Component;

public:
	DEADBYDAYLIGHT_API FMapSoundsToAvoid();
};

FORCEINLINE uint32 GetTypeHash(const FMapSoundsToAvoid) { return 0; }
