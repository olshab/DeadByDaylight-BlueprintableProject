#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "OffTheRecord.generated.h"

class UStatusEffect;
class UActivatableEnduranceEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOffTheRecord : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _activationDurationLevels;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _activatableEnduranceEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableEnduranceEffect* _activatableEnduranceEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetActivationDurationAtLevel() const;

public:
	UOffTheRecord();
};

FORCEINLINE uint32 GetTypeHash(const UOffTheRecord) { return 0; }
