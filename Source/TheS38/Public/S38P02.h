#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S38P02.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US38P02 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _percentChanceOfDoubleScream;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _perkStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _perkStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _auraStatusEffectClass;

	UPROPERTY(EditAnywhere)
	float _auraDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _extraAuraDurationPerExtraScream;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _screamDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minRandomScreamDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxRandomScreamDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maxScreamCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _preventInteractionDuration;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorScream();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_MakeSurvivorScream(const int32 timesToScream);

public:
	UFUNCTION(BlueprintPure)
	float GetScreamDuration() const;

	UFUNCTION(BlueprintPure)
	float GetMinRandomScreamDelay() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxScreamCount() const;

	UFUNCTION(BlueprintPure)
	float GetMaxRandomScreamDelay() const;

	UFUNCTION(BlueprintPure)
	float GetExtraAuraDurationPerExtraScream() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDuration() const;

	UFUNCTION(BlueprintPure)
	float GetAuraDurationAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void EnableInteractions();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_MakeSurvivorScream();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIsApplicableChanged(UGameplayModifierContainer* container, bool isApplicable);

public:
	US38P02();
};

FORCEINLINE uint32 GetTypeHash(const US38P02) { return 0; }
