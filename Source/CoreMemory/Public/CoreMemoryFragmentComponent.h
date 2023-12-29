#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryFragmentComponent.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwningPlayer, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Controller, Transient, meta=(AllowPrivateAccess=true))
	ACoreMemoryChallengePlayerSpecificController* _controller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_WasTriggered, meta=(AllowPrivateAccess=true))
	bool _wasTriggered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _killerPreventingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _camperPreventingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsDespawned, meta=(AllowPrivateAccess=true))
	bool _isDespawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_WasCollected, meta=(AllowPrivateAccess=true))
	bool _wasCollected;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_OnFragmentCollected();

	UFUNCTION(BlueprintCallable)
	void OnRep_WasTriggered();

	UFUNCTION(BlueprintCallable)
	void OnRep_WasCollected();

	UFUNCTION(BlueprintCallable)
	void OnRep_OwningPlayer();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsDespawned();

	UFUNCTION(BlueprintCallable)
	void OnRep_Controller();

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(bool isLocallyObserved);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FragmentDespawnCountdown(float floatVal) const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCoreMemoryFragmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentComponent) { return 0; }
