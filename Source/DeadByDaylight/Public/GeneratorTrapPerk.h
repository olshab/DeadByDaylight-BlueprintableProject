#pragma once

#include "CoreMinimal.h"
#include "SurvivorTrapPerk.h"
#include "GameEventData.h"
#include "ETrapRemovedReason.h"
#include "GameplayTagContainer.h"
#include "GeneratorTrapPerk.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGeneratorTrapPerk : public USurvivorTrapPerk
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorTrapDuration() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_TrapDestroyed(const AGenerator* generator, const ETrapRemovedReason reason);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_TrapActivated(const AGenerator* generator);

private:
	UFUNCTION(BlueprintCallable, Client, Unreliable)
	void Client_OnTrapDestroyed(const AGenerator* generator, const ETrapRemovedReason reason);

	UFUNCTION(BlueprintCallable, Client, Unreliable)
	void Client_OnTrapActivated(const AGenerator* generator);

	UFUNCTION(BlueprintCallable)
	void Authority_OnGeneratorCompleted(bool isAutoCompleted);

	UFUNCTION()
	void Authority_OnExitGatesPowered(const FGameplayTag gameEventTag, const FGameEventData& gameEventData);

public:
	UGeneratorTrapPerk();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorTrapPerk) { return 0; }
