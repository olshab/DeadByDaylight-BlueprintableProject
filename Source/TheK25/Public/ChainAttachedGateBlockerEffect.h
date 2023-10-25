#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GateBlockerEffect.h"
#include "ECamperDamageState.h"
#include "ChainAttachedGateBlockerEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UChainAttachedGateBlockerEffect : public UGateBlockerEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _blockGateLingeringTimeDyingState;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);

public:
	UChainAttachedGateBlockerEffect();
};

FORCEINLINE uint32 GetTypeHash(const UChainAttachedGateBlockerEffect) { return 0; }
