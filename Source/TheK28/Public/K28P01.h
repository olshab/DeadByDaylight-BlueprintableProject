#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K28P01.generated.h"

class UTimerObject;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _perkActivationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _effectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _injuryTimerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _injuryTimer;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkActivationDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetInjuryTimerDuration() const;

public:
	UK28P01();
};

FORCEINLINE uint32 GetTypeHash(const UK28P01) { return 0; }
