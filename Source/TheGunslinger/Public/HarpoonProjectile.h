#pragma once

#include "CoreMinimal.h"
#include "GunslingerHarpoon.h"
#include "KillerProjectile.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "HarpoonProjectile.generated.h"

class UPrimitiveComponent;
class UDBDSkeletalMeshComponentBudgeted;
class UHarpoonProjectileMovementComponent;
class UPoolableActorComponent;

UCLASS(Blueprintable)
class THEGUNSLINGER_API AHarpoonProjectile : public AKillerProjectile, public IGunslingerHarpoon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _launchDistanceFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHarpoonProjectileMovementComponent* _movement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _environmentCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _targetCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPoolableActorComponent* _poolableActorComponent;

private:
	UFUNCTION()
	void OnHarpoonStop(const FHitResult& result);

public:
	AHarpoonProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonProjectile) { return 0; }
