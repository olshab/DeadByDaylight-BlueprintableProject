#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "LethalPursuer.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULethalPursuer : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _survivorRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealEffect;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ActivatePerk();

	UFUNCTION(BlueprintCallable)
	void Local_OnIntroCompleted();

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorRevealDurationAtLevel() const;

public:
	ULethalPursuer();
};

FORCEINLINE uint32 GetTypeHash(const ULethalPursuer) { return 0; }
