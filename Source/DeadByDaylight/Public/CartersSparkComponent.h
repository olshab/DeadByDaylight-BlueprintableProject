#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "CartersSparkComponent.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCartersSparkComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _staticBlastEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _totallyInsanePlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxMadnessTier;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerStaticBlastCooldown();

	UFUNCTION(BlueprintCallable)
	void TriggerShockTherapyCooldown();

private:
	UFUNCTION(BlueprintCallable)
	void OnRequestAndBeginInteraction(UInteractionDefinition* interaction);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_OnShockTherapyCooldownCheatEntered();

	UFUNCTION(BlueprintPure)
	bool IsStaticBlastOnCooldown() const;

	UFUNCTION(BlueprintPure)
	bool IsShockTherapyOnCooldown() const;

	UFUNCTION(BlueprintPure)
	float GetStaticBlastCooldownPercentElapsed() const;

private:
	UFUNCTION(BlueprintPure)
	float GetStaticBlastCooldownDuration() const;

	UFUNCTION(BlueprintPure)
	float GetShockTherapyCooldownDuration() const;

	UFUNCTION(BlueprintCallable)
	void Authority_RegisterToGameEvents();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_AddTotallyInsaneSurvivor(ADBDPlayer* insaneSurvivor);

public:
	UCartersSparkComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCartersSparkComponent) { return 0; }
