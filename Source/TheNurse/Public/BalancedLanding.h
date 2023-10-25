#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BalancedLanding.generated.h"

class UStatusEffect;
class UActivatableExhaustedEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBalancedLanding : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _staggerReductionEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _activableExhaustedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sprintDuration;

	UPROPERTY(EditAnywhere)
	float _exhaustionDurationPerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableExhaustedEffect* _exhaustedEffect;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_WarnBalancedLandingPredicted();

public:
	UFUNCTION(BlueprintPure)
	float GetSprintDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustionDurationAtLevel() const;

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_UnvalidateBalanceLanding();

public:
	UBalancedLanding();
};

FORCEINLINE uint32 GetTypeHash(const UBalancedLanding) { return 0; }
