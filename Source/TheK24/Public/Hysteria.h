#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Hysteria.generated.h"

class UHysteriaObliviousEffect;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHysteria : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _obliviousEffectDuration;

	UPROPERTY(EditAnywhere)
	float _perkCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UHysteriaObliviousEffect> _obliviousEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, UHysteriaObliviousEffect*> _obliviousEffectPerSurvivorMap;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkCooldownDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetObliviousEffectDurationAtLevel() const;

public:
	UHysteria();
};

FORCEINLINE uint32 GetTypeHash(const UHysteria) { return 0; }
