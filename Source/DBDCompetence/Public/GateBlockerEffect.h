#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GateBlockerEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UGateBlockerEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _blockGateLingeringTime;

protected:
	UFUNCTION(BlueprintCallable)
	void RemoveCantEscapeFlag();

public:
	UGateBlockerEffect();
};

FORCEINLINE uint32 GetTypeHash(const UGateBlockerEffect) { return 0; }
