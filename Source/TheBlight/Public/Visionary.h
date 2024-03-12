#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Visionary.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UVisionary : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _auraVisibilityRange;

	UPROPERTY(EditAnywhere)
	float _cooldownDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetRangeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroComplete();

public:
	UVisionary();
};

FORCEINLINE uint32 GetTypeHash(const UVisionary) { return 0; }
