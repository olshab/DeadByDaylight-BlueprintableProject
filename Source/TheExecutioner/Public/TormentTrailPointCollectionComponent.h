#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TormentTrailPointCollectionComponent.generated.h"

class ATormentTrailPoint;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTormentTrailPointCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxNumberOfTrailPointInGame;

private:
	UFUNCTION(BlueprintCallable)
	void OnTrailAcquireChanged(ATormentTrailPoint* trailPoint, bool value);

public:
	UTormentTrailPointCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTormentTrailPointCollectionComponent) { return 0; }
