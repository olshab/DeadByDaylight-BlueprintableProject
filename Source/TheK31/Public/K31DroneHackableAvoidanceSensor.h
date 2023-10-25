#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "K31DroneHackableAvoidanceSensor.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneHackableAvoidanceSensor : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorOverlapDetectionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _killerDetectionPrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _survivorDetectionPrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _overlappingSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, bool> _overlappingKillerToVisibilityMap;

public:
	UFUNCTION(BlueprintCallable)
	void Init(UPrimitiveComponent* killerPrimitive, UPrimitiveComponent* survivorPrimitive);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorCollisionEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnSurvivorCollisionBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerCollisionEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnKillerCollisionBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UK31DroneHackableAvoidanceSensor();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneHackableAvoidanceSensor) { return 0; }
