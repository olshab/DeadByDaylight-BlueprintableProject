#pragma once

#include "CoreMinimal.h"
#include "EMrMarchState.h"
#include "SnowmanBase.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "MrMarch.generated.h"

class USphereComponent;
class UDBDSkeletalMeshComponentBudgeted;
class ADBDPlayer;
class UCapsuleComponent;
class UDBDNavModifierComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class WINTEREVENT2023_API AMrMarch : public ASnowmanBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _mrMarchSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _mrMarchCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _jumpscareTriggerZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavModifierComponent* _dbdNavModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _scareTriggerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shouldDespawnAfterJumpscare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _mrMarchJumpscareTimerRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MrMarchState, Transient, meta=(AllowPrivateAccess=true))
	EMrMarchState _mrMarchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _tagsPreventingJumpscare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _authority_playersInRange;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_MrMarchState(EMrMarchState previousState);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayerJumpscareTriggered(ADBDPlayer* player, const FVector& location);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartMrMarchDestruction();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPlayerJumpscared(ADBDPlayer* player, const FVector& jumpscareLocation);

protected:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_MrMarchSpawn();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_MrMarchDestroy();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpawned();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyed();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnJumpscareTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnJumpscareTriggerZoneEntered(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnJumpscareFinished();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AMrMarch();
};

FORCEINLINE uint32 GetTypeHash(const AMrMarch) { return 0; }
