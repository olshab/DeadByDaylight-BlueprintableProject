#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K27P03.generated.h"

class AGenerator;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK27P03 : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _generatorBlockedAuraColorForKiller;

private:
	UPROPERTY(EditAnywhere)
	float _generatorProgressionActivation;

	UPROPERTY(EditAnywhere)
	float _generatorBlockedDuration;

	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<AGenerator>, FFastTimer> _authority_blockedGeneratorsAndTimeToUnblock;

	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<AGenerator>> _authority_affectedRepairersAndTheirGenerators;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_HighlightBlockedGeneratorForKiller(AGenerator* generator);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ActivateSkillCheck(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorProgressionActivationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorBlockedDurationAtLevel() const;

public:
	UK27P03();
};

FORCEINLINE uint32 GetTypeHash(const UK27P03) { return 0; }
