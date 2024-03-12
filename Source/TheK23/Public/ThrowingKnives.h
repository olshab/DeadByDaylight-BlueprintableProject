#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "ThrowingKnives.generated.h"

class ASlasherPlayer;
class UK23PowerProgressPresentationComponent;
class UFlurryComboScoreComponent;
class UStatusEffect;
class UTricksterSuperModeComponent;
class UReloadKnives;
class UKnivesProvider;
class UPowerChargeComponent;
class UKnivesLauncher;
class ULacerationComponent;

UCLASS(Blueprintable)
class AThrowingKnives : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UFlurryComboScoreComponent* _flurryScoreComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UTricksterSuperModeComponent* _superModeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK23PowerProgressPresentationComponent* _superModeChargePresentationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _superModeChargeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _tricksterOutOfAmmoStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKnivesProvider* _knivesProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKnivesLauncher* _knivesLauncher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ULacerationComponent> _lacerationComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UReloadKnives> _reloadInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumTimeBetweenBroadcast;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemUsedStateChanged(bool pressed);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_OnUsePowerWhenOutOfAmmo();

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_OnUsePowerWhenInCooldown();

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetSlasher() const;

	UFUNCTION(BlueprintPure)
	UKnivesLauncher* GetLauncher() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnUsePowerWhenOutOfAmmo();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnUsePowerWhenInCooldown();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLaunch();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnComboFinished(bool isSRankCombo);

	UFUNCTION(BlueprintCallable)
	void Authority_SpawnReloadInteractionOnLockers();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AThrowingKnives();
};

FORCEINLINE uint32 GetTypeHash(const AThrowingKnives) { return 0; }
