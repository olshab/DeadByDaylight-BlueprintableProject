#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "CoreMemoryFragmentComponent.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwningPlayer, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ACoreMemoryChallengePlayerSpecificController* _controller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lineOfSightTimerRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_WasTriggered, meta=(AllowPrivateAccess=true))
	bool _wasTriggered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _killerPreventingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _camperPreventingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsDespawned, meta=(AllowPrivateAccess=true))
	bool _isDespawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _authority_DisableCollisionDetectionAtSpawn;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_OnFragmentCollected();

	UFUNCTION(BlueprintCallable)
	void OnRep_WasTriggered();

	UFUNCTION(BlueprintCallable)
	void OnRep_OwningPlayer();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsDespawned();

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(bool isLocallyObserved);

	UFUNCTION()
	void OnCollectZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FragmentDespawnCountdown(float floatVal) const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnTriggerZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void Authority_CheckLineOfSight();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCoreMemoryFragmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentComponent) { return 0; }
