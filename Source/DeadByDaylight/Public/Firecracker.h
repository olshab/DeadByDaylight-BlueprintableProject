#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "Firecracker.generated.h"

class AActor;
class ADBDPlayer;
class UGameplayModifierContainer;
class USphereComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AFirecracker : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USphereComponent* _effectArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool DebugDisplayEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UGameplayModifierContainer*> _effectModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _playerOwner;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isExploding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _actorsInRange;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldDeafen(const ADBDPlayer* player, float& outDuration) const;

	UFUNCTION(BlueprintPure)
	bool ShouldBlind(const ADBDPlayer* player, float& outDuration) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnFuseBurnUpdate(float deltaSeconds, float fuseTimeLeftPercent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnFuseBurnExit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnFuseBurnEnter();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnExplode();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnEffectsInitialized();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_InitFromSpawningPlayer(ADBDPlayer* spawner);

	UFUNCTION(BlueprintPure)
	bool HasModifierOfType(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	bool HasFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintPure)
	float GetModifierValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	float GetExplosionRange() const;

	UFUNCTION(BlueprintPure)
	float GetExplosionEffectDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExplosionDelay() const;

	UFUNCTION(BlueprintPure)
	bool GetExploded() const;

protected:
	UFUNCTION(BlueprintPure)
	TArray<UGameplayModifierContainer*> GetEffects() const;

public:
	UFUNCTION(BlueprintPure)
	float GetDeafnessEffectDuration(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetBlindnessEffectDuration(const AActor* player) const;

public:
	AFirecracker();
};

FORCEINLINE uint32 GetTypeHash(const AFirecracker) { return 0; }
