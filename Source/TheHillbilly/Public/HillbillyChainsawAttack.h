#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "GameplayTagContainer.h"
#include "HillbillyChainsawAttack.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UHillbillyChainsawAttack : public UPounceAttack
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _chainsawHitGameEventTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _chainsawAttemptGameEventTag;

public:
	UHillbillyChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttack) { return 0; }
