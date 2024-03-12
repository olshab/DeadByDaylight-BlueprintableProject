#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "K35KillerEffectData.h"
#include "K35KillerEffectTracker.generated.h"

class ACamperPlayer;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35KillerEffectTracker : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _removalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _effectExtensionTimeOnInjury;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_KillerEffectData, meta=(AllowPrivateAccess=true))
	TArray<FK35KillerEffectData> _killerEffectData;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_KillerEffectData(TArray<FK35KillerEffectData> oldKillerEffectData);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UFUNCTION(BlueprintPure)
	float GetKillerEffectRemovalProgressionForSurvivor(const ACamperPlayer* survivor) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorStopsRemovingKillerEffect(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorStartsRemovingKillerEffect(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorLostKillerEffect(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorKillerEffectIncreased(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorGainedKillerEffect(const ACamperPlayer* survivor);

private:
	UFUNCTION()
	void Authority_OnSurvivorInjuredByAreaBlast(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnSurvivorFinishedRepairingGenerator(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnSurvivorEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnSurvivorDowned(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor, ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK35KillerEffectTracker();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerEffectTracker) { return 0; }
