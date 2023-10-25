#pragma once

#include "CoreMinimal.h"
#include "ImpactInfo.h"
#include "GameFramework/Actor.h"
#include "LaunchInfo.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BaseProjectile.generated.h"

class USphereComponent;
class UBaseProjectileReplicationComponent;
class UBaseProjectileLauncher;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PROJECTILE_API ABaseProjectile : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OnImpactAINoiseEventRange;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _multicastLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowMultipleHits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _semanticGameplayTags;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _notifyClientOfServerHitValidationResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseProjectileReplicationComponent* _replicationComponent;

protected:
	UFUNCTION(BlueprintPure)
	bool SphereTraceSingle(FVector start, FVector end, USphereComponent* sphere, FHitResult& outHitResult) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSetActive(const bool active);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLaunch(FLaunchInfo launchInfo, bool hasImpactOnLaunch);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDetectPlayer(FImpactInfo impactInfo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDetectCollision(FImpactInfo impactInfo);

public:
	UFUNCTION(BlueprintCallable)
	bool Local_TryDetectCollision(FImpactInfo impactInfo, bool force);

	UFUNCTION(BlueprintCallable)
	bool Local_SweepImpactCollision(const FVector& start, const FVector& end, const FRotator& colliderRotation, FHitResult& outHit);

protected:
	UFUNCTION(BlueprintCallable)
	bool Local_OnPlayerDetected(FImpactInfo impactInfo, const FVector& projectileLocation);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsValidPlayerDetection(FImpactInfo impactInfo);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsValidImpactDetection(FImpactInfo impactInfo);

	UFUNCTION(BlueprintPure)
	bool IsOwningPawnLocallyControlled() const;

	UFUNCTION(BlueprintPure)
	UBaseProjectileLauncher* GetLauncher() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UPrimitiveComponent* GetImpactPrimitiveComponent() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetAddLauncherVeloctyFactor() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_TryDetectCollision(FImpactInfo impactInfo, bool force);

public:
	ABaseProjectile();
};

FORCEINLINE uint32 GetTypeHash(const ABaseProjectile) { return 0; }
