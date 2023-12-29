#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FloatingVoidEnergyOrb.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFloatingVoidEnergyOrb : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInteract, ADBDPlayer*, player);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnOrbStartMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnOrbReachPlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _characterBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _travelTimeToPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _voidEnergyToGrantPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _trackerRadius;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartTravelToPlayer(ADBDPlayer* playerToTravelTo);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnReachedPlayer();

	UFUNCTION(BlueprintCallable)
	void Authority_OnTravelTimeEnd();

	UFUNCTION(BlueprintCallable)
	void Authority_OnRespawn();

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerExitZone(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerEnterZone(ADBDPlayer* playerToTravelTo);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDespawn();

public:
	UFloatingVoidEnergyOrb();
};

FORCEINLINE uint32 GetTypeHash(const UFloatingVoidEnergyOrb) { return 0; }
