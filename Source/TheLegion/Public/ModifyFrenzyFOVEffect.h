#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ModifyFrenzyFOVEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UModifyFrenzyFOVEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _increaseFOVPerHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _frenzyBaseFOV;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnFrenzyTierIncreased(int32 tier);

public:
	UModifyFrenzyFOVEffect();
};

FORCEINLINE uint32 GetTypeHash(const UModifyFrenzyFOVEffect) { return 0; }
