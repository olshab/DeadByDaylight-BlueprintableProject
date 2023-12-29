#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HauntComponent.h"
#include "DBDTunableRowHandle.h"
#include "StandardWorldHauntComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class URespawnableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UStandardWorldHauntComponent : public UHauntComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnPlayerTriggerBoon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnPlayerTriggerTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHauntEvent Cosmetic_OnAutomaticShutDownReached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract ForceMovePlayerTowardsHaunt;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeAfterVoidZoneCloseBeforeAutomaticShutdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _hasteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _hasteValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hinderedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _hindredDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _hindredValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerStunDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _playerTrackerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	URespawnableComponent* _respawnableComponent;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnAutomaticShutDownReached();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_BlessOrTrapCharacterEnteringZone(ADBDPlayer* player, bool isBlessing);

	UFUNCTION(BlueprintCallable)
	void Authority_OnVoidZoneOpened();

	UFUNCTION(BlueprintCallable)
	void Authority_OnVoidZoneClosed();

	UFUNCTION(BlueprintCallable)
	void Authority_OnAutomaticShutDownReached();

public:
	UStandardWorldHauntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStandardWorldHauntComponent) { return 0; }
