#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ChainPlayerMovementStatusEffect.generated.h"

class ARifleChain;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UChainPlayerMovementStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _collisionMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ARifleChain* _chain;

private:
	UFUNCTION(BlueprintCallable)
	void OnIsChainCollidingChanged(bool isColliding);

public:
	UChainPlayerMovementStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UChainPlayerMovementStatusEffect) { return 0; }
