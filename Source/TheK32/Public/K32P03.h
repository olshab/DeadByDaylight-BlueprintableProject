#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K32P03.generated.h"

class UStatusEffect;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK32P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditAnywhere)
	float _statusEffectDuration;

	UPROPERTY(EditAnywhere)
	int32 _generatorsDamagedRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hastePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _generatorsDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CompromisedGenerator, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _compromisedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _lastCompromisedGenerator;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CompromisedGenerator();

public:
	UFUNCTION(BlueprintPure)
	float GetStatusEffectDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHastePercent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTriggerCompromiseVFX(const AGenerator* compromisedGenerator);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCompromiseCompletedVFX(const AGenerator* compromisedGenerator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK32P03();
};

FORCEINLINE uint32 GetTypeHash(const UK32P03) { return 0; }
