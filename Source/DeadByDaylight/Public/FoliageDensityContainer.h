#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageDensityContainer.generated.h"

class AFoliageActor;
class UFoliageDensityHISM;
class UDBDMapFoliageDensityTunables;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AFoliageDensityContainer : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FName, AFoliageActor*> _foliageActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UFoliageDensityHISM*> _foliageHISMs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDMapFoliageDensityTunables* _mapFoliageDensityTunables;

public:
	AFoliageDensityContainer();
};

FORCEINLINE uint32 GetTypeHash(const AFoliageDensityContainer) { return 0; }
