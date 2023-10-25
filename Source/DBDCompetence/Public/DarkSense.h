#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "DarkSense.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDarkSense : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _killerRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _darkSenseRevealRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetKillerRevealDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetDarkSenseRevealRange() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UDarkSense();
};

FORCEINLINE uint32 GetTypeHash(const UDarkSense) { return 0; }
