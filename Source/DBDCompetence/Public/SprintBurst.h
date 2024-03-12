#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "SprintBurst.generated.h"

class UStatusEffect;
class UActivatableExhaustedEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USprintBurst : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _exhaustionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _sprintDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exhaustedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableExhaustedEffect* _exhaustedEffect;

private:
	UFUNCTION(BlueprintPure)
	float GetSprintDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustedDuration() const;

	UFUNCTION()
	void Authority_OnPerkFlagsChanged(FGameplayTag gameplayTag, bool isAdded);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving);

public:
	USprintBurst();
};

FORCEINLINE uint32 GetTypeHash(const USprintBurst) { return 0; }
