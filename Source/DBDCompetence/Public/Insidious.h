#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Insidious.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInsidious : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _stillnessRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _insidiousEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetStillnessRequiredAtLevel() const;

public:
	UInsidious();
};

FORCEINLINE uint32 GetTypeHash(const UInsidious) { return 0; }
