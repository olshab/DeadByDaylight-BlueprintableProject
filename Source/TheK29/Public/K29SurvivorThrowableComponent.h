#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementInstance.h"
#include "K29SurvivorThrowableComponent.generated.h"

class ACamperPlayer;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29SurvivorThrowableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _throwDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _capsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _capsuleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _capsuleHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumThrowDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _throwMovementSpeedInCmPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _movingDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _throwDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _throwLedgeDropDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _throwLedgeDropTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _throwMovementSpeedMultiplierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _throwAccelerationMultiplier;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_EndThrow();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_CancelThrowOnOtherSurvivorCollision(const FVector collisionPosition, ACamperPlayer* survivorUsedAsCollision);

	UFUNCTION(BlueprintCallable)
	void OnWalkingAllowedAfterFall();

	UFUNCTION(BlueprintCallable)
	void OnThrowTimeout();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetCurrentThrow(FK29GuidedMovementInstance throwInstance, ACamperPlayer* thrownSurvivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_InstantlyLetGoSurvivor(const bool hasDealtDamage);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EndThrow();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CancelThrowOnOtherSurvivorCollision(const FVector collisionPosition, ACamperPlayer* survivorUsedAsCollision);

	UFUNCTION(BlueprintCallable)
	void EndThrow();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorUsedAsCollision(ACamperPlayer* survivor);

public:
	UK29SurvivorThrowableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorThrowableComponent) { return 0; }
