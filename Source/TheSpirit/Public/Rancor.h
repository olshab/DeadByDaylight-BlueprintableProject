#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Rancor.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class URancor : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorRevealDuration;

	UPROPERTY(EditAnywhere)
	float _killerRevealToObsessionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _exposedStatusEffect;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnBubbleAtSurvivorsLocation();

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorRevealDuration() const;

	UFUNCTION(BlueprintPure)
	float GetKillerRevealToObsessionDurationAtLevel() const;

public:
	URancor();
};

FORCEINLINE uint32 GetTypeHash(const URancor) { return 0; }
