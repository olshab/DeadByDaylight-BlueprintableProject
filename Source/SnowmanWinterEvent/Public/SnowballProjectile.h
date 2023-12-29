#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicsBasedProjectile.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImpactInfo.h"
#include "SnowballProjectile.generated.h"

class UStaticMeshComponent;
class UPoolableProjectileComponent;
class UPrimitiveComponent;
class USphereComponent;
class ABaseProjectile;
class AActor;
class ADBDPlayer;

UCLASS(Blueprintable)
class SNOWMANWINTEREVENT_API ASnowballProjectile : public APhysicsBasedProjectile
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _worldCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _playerDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _tagsPreventingPlayerHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPoolableProjectileComponent* _poolableProjectileComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ABaseProjectile*> _cachedProjectilesInGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _poolDelayTime;

private:
	UFUNCTION()
	void OnPlayerDetectorHit(UPrimitiveComponent* primitiveComponent, const FHitResult& hitResult);

	UFUNCTION()
	void OnCollisionComponentHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, FVector normalImpulse, const FHitResult& hitResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballThrown(const FVector& launchDirection, float launchSpeed);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerHit(ADBDPlayer* hitPlayer, FImpactInfo impactInfo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCollisionHit(AActor* hitActor, FImpactInfo impactInfo);

public:
	ASnowballProjectile();
};

FORCEINLINE uint32 GetTypeHash(const ASnowballProjectile) { return 0; }
