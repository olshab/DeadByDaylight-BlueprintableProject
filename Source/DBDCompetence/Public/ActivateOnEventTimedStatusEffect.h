#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "ActivateOnEventTimedStatusEffect.generated.h"

class UActivateOnEventBaseActivationStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivateOnEventTimedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UActivateOnEventBaseActivationStrategy> _activationStrategyClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _eventsToActivateOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UActivateOnEventBaseActivationStrategy* _activationStrategy;

public:
	UActivateOnEventTimedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivateOnEventTimedStatusEffect) { return 0; }
