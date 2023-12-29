#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EGameplayElementType.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ETileSpawnPointType.h"
#include "UnstableRiftTeleportationComponent.generated.h"

class AUnstableRift;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UUnstableRiftTeleportationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _unstableRiftTeleportDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportationVisualsDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minDistanceFromOtherUnstableRifts;

	UPROPERTY(EditAnywhere)
	FGameplayTag _elementTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType _spawnPointType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGameplayElementType _actorSpawnerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<AUnstableRift*> _allUnstableRifts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _capsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _capsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _ignoreTouches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAllowedToTeleport, meta=(AllowPrivateAccess=true))
	bool _isAllowedToTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AActor>> _actorsInMapToAvoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDistanceFromActorsToAvoid;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsAllowedToTeleport();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportUnstableRift(const FVector location);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PreTeleportation(const FVector& teleportLocation, const bool hadPlayerInteraction);

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UUnstableRiftTeleportationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UUnstableRiftTeleportationComponent) { return 0; }
