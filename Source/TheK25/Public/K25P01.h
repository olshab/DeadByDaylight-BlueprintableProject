#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K25P01.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25P01 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _generatorBlockDuration;

	UPROPERTY(EditAnywhere)
	float _auraRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowPerkToBlockZeroProgressionGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _generatorAuraColorForKiller;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FFastTimer> _generatorBlockingTimers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_GeneratorsBlocked, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _generatorsBlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _local_generatorsBlocked;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_GeneratorsBlocked();

	UFUNCTION(BlueprintPure)
	float GetGeneratorBlockDuration() const;

	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

	UFUNCTION(BlueprintCallable)
	void Authority_OnBlockTimerDone(AGenerator* generator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25P01();
};

FORCEINLINE uint32 GetTypeHash(const UK25P01) { return 0; }
