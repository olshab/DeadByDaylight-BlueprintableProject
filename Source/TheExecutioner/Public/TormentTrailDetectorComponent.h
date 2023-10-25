#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "TormentTrailDetectorComponent.generated.h"

class ATormentTrailPoint;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UTormentTrailDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ATormentTrailPoint*> _overlappedTrailPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	FTagStateBool _isInTormentTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	FTagStateBool _isInTormentTrailEffect;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _inTormentTrailLastingEffectTime;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTormentTrailDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTormentTrailDetectorComponent) { return 0; }
