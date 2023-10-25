#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "SurvivorWeakPointScoreDatum.h"
#include "K31WeakPointScoreEmitter.generated.h"

class UChargeableComponent;
class ACamperPlayer;

UCLASS(Blueprintable)
class THEK31_API UK31WeakPointScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, FSurvivorWeakPointScoreDatum> _registeredSurvivors;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnDechargeEnd(UChargeableComponent* chargeableComponent);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDechargeBegin(UChargeableComponent* chargeableComponent);

public:
	UK31WeakPointScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UK31WeakPointScoreEmitter) { return 0; }
