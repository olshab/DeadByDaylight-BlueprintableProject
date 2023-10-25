#pragma once

#include "CoreMinimal.h"
#include "DBDDangerPredictionComponent.h"
#include "K32PodDangerPredictionComponent.generated.h"

class AK32KillerPod;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK32_API UK32PodDangerPredictionComponent : public UDBDDangerPredictionComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _podMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _podRangeMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dangerAreaCostMultiplierForIdlePod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dangerAreaCostMultiplierForActivePod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _activePodWeightPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _idlePodWeightPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK32KillerPod* _pod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _allInGamePlayers;

public:
	UK32PodDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32PodDangerPredictionComponent) { return 0; }
