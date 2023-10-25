#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem_SurvivorEvader.generated.h"

class UDBDRankDesignTunables;
class ADBDPlayer;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorEvader : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _killerDistanceStealthPointCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _killerDistanceStealthPointCurveChasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _chaseDurationPointCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _ZAxisDistanceScalingCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;

public:
	UFUNCTION(BlueprintCallable)
	void OnChaseStartEvent(ADBDPlayer* chasedPlayer);

public:
	UDBDEmblem_SurvivorEvader();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_SurvivorEvader) { return 0; }
