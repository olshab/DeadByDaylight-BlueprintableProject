#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "NonTunableStat.h"
#include "BaseLingeringStatusEffect.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBaseLingeringStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lingerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNonTunableStat _lingerDurationModifier;

protected:
	UFUNCTION(BlueprintCallable)
	void SetLingerDuration(float lingerDuration);

	UFUNCTION(BlueprintCallable)
	void Authority_DeactivateEffect();

	UFUNCTION(BlueprintCallable)
	void Authority_ActivateEffect();

public:
	UBaseLingeringStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBaseLingeringStatusEffect) { return 0; }
