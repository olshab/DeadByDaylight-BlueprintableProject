#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "FloatingCameraNavigationComponent.generated.h"

class UObjectPlacerComponent;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFloatingCameraNavigationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UObjectPlacerComponent> _ownerObjectPlacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snappingDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _previewSnappingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _drawPathModeYawInputLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _floatingCameraMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _floatingCameraAccelerationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _strafeMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ADBDPlayer> _playerOwner;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_EnableWalkOffLegdes(bool isEnabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EnableWalkOffLegdes(bool isEnabled);

public:
	UFloatingCameraNavigationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFloatingCameraNavigationComponent) { return 0; }
