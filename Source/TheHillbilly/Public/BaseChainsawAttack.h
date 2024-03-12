#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "GameplayTagContainer.h"
#include "BaseChainsawAttack.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UBaseChainsawAttack : public UPounceAttack
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _chainsawHitGameEventTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _chainsawAttemptGameEventTag;

public:
	UBaseChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UBaseChainsawAttack) { return 0; }
