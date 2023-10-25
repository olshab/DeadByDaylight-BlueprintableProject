#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrailControllerBase.h"
#include "ReplicatedTrailPointList.h"
#include "Engine/NetSerialization.h"
#include "TormentTrailController.generated.h"

class AMobileTormentTrailRenderer;
class ATormentTrailPoint;

UCLASS(Blueprintable)
class ATormentTrailController : public ATrailControllerBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FReplicatedTrailPointList _trailPointList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AMobileTormentTrailRenderer* _mobileTormentTrailRenderer;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SpawnTormentTrailPoint(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATormentTrailController();
};

FORCEINLINE uint32 GetTypeHash(const ATormentTrailController) { return 0; }
