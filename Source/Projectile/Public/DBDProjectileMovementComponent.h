#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ComponentSweepInfo.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DBDProjectileMovementComponent.generated.h"

class USceneComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UDBDProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnComponentToSweepCollisionBP, UPrimitiveComponent*, primitiveComponent, const FHitResult&, hitResult);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnComponentToSweepCollisionBP OnComponentToSweepCollisionBP;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FComponentSweepInfo> _componentsToSweep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _previousPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _cachedUpdatedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _initialLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _distanceTravelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _hasMaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _maximumTravelDistance;

public:
	UFUNCTION(BlueprintPure)
	FVector GetPreviousLocation() const;

	UFUNCTION(BlueprintCallable)
	void AddComponentToSweep(UPrimitiveComponent* component);

public:
	UDBDProjectileMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDProjectileMovementComponent) { return 0; }
