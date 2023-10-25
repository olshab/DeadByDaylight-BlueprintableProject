#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageActor.generated.h"

class UFoliageDensityHISM;

UCLASS(Blueprintable)
class AFoliageActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFoliageDensityHISM* _foliageHISM;

public:
	AFoliageActor();
};

FORCEINLINE uint32 GetTypeHash(const AFoliageActor) { return 0; }
