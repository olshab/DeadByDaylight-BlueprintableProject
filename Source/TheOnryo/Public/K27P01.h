#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "K27P01.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK27P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _survivorAuraRevealDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorUnhookedOffScourgeHook(const FGameEventData& gameEventData);

public:
	UK27P01();
};

FORCEINLINE uint32 GetTypeHash(const UK27P01) { return 0; }
