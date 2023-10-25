#pragma once

#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "PhysicsBasedProjectile.generated.h"

class UPhysicsBasedProjectileMovementComponent;

UCLASS(Blueprintable)
class PROJECTILE_API APhysicsBasedProjectile : public ABaseProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPhysicsBasedProjectileMovementComponent* Movement;

public:
	APhysicsBasedProjectile();
};

FORCEINLINE uint32 GetTypeHash(const APhysicsBasedProjectile) { return 0; }
