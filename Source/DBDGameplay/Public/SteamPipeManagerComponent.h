#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ESteamPipeState.h"
#include "SteamPipeManagerComponent.generated.h"

class USteamPipeEffectComponent;
class ASteamPipe;
class UChargeableComponent;
class ASteamPipeResetSwitch;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API USteamPipeManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USteamPipeEffectComponent> _steamPipeEffectComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UChargeableComponent> _chargeableComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _resetSwitchCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _sharedChargeableComponent;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<ASteamPipe>> _steamPipes;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<ASteamPipeResetSwitch>> _steamPipeResetSwitches;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<ADBDPlayer>> _interactingPlayersArray;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_UpdateCanUseResetSwitch();

	UFUNCTION(BlueprintCallable)
	void Authority_OnSwitchCooldownComplete();

	UFUNCTION(BlueprintCallable)
	void Authority_OnSteamPipeStateChanged(const ASteamPipe* steamPipe, const ESteamPipeState newState);

	UFUNCTION(BlueprintCallable)
	void Authority_OnResetInteractionComplete(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCharacterAdded(ADBDPlayer* character);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USteamPipeManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USteamPipeManagerComponent) { return 0; }
