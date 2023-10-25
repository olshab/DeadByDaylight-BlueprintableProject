#pragma once

#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "UObject/NoExportTypes.h"
#include "LaunchInfo.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "KnifeProjectile.generated.h"

class UPrimitiveComponent;
class UPoolableProjectileComponent;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable)
class AKnifeProjectile : public AKillerProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPrimitiveComponent* _worldCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPrimitiveComponent* _camperDetector;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _playersAffectedThisThrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPoolableProjectileComponent* _poolableActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _knifeMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _addonExplosionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _numberOfAddonBounces;

public:
	UFUNCTION(BlueprintPure)
	bool WasLaunchedDuringSuperMode() const;

	UFUNCTION(BlueprintPure)
	bool ShouldPlayRicochetSound() const;

protected:
	UFUNCTION(BlueprintCallable)
	void SetKnifeAcquired(bool acquired);

private:
	UFUNCTION()
	void OnWorldColliderHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

	UFUNCTION()
	void OnProjectileBounce(const FHitResult& impactResult, const FVector& impactVelocity);

public:
	UFUNCTION(BlueprintPure)
	bool KnifeCanPierceCampers() const;

	UFUNCTION(BlueprintPure)
	float GetAddonExplosionRadius() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_SetKnifeActive(bool active);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void BP_OnLaunchCosmetic(FLaunchInfo launchInfo, bool hasImpactOnLaunch);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void BP_CosmeticOnAddonExplosion(const FVector& location, const FVector& normal);

public:
	AKnifeProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AKnifeProjectile) { return 0; }
