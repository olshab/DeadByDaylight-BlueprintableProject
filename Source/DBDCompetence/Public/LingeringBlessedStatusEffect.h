#pragma once

#include "CoreMinimal.h"
#include "BlessedStatusEffect.h"
#include "LingeringBlessedStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULingeringBlessedStatusEffect : public UBlessedStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lingerDuration;

protected:
	UFUNCTION(BlueprintCallable)
	void SetLingerDuration(const float lingerDuration);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	ULingeringBlessedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringBlessedStatusEffect) { return 0; }
