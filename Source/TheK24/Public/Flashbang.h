#pragma once

#include "CoreMinimal.h"
#include "PerkUtilitiesInterface.h"
#include "Perk.h"
#include "Flashbang.generated.h"

class AGenerator;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFlashbang : public UPerk, public IPerkUtilitiesInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _generatorBeingRepaired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_GeneratorsRepairProgress, Transient, meta=(AllowPrivateAccess=true))
	float _generatorsRepairTargetProgression;

	UPROPERTY(EditAnywhere)
	float _generatorRepairPercentToCraftFlashbang;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_GeneratorsRepairProgress();

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorRepairPercentToCraftFlashbangAtLevel() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();

private:
	UFUNCTION(BlueprintCallable, Client, Unreliable)
	void Client_OnGeneratorRepairProgressionTargetAchieved();

	UFUNCTION(BlueprintCallable)
	void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlashbang();
};

FORCEINLINE uint32 GetTypeHash(const UFlashbang) { return 0; }
