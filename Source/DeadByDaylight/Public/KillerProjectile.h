#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicsBasedProjectile.h"
#include "EHitValidatorConfigName.h"
#include "KillerProjectile.generated.h"

class UPrimitiveComponent;
class UHitValidatorComponent;
class UHitValidatorConfigurator;
class ASlasherPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AKillerProjectile : public APhysicsBasedProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag _killerProjectileAttemptGameEventTag;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHitValidatorConfigurator* _hitValidatorConfigurator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHitValidatorComponent* _hitValidatorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EHitValidatorConfigName _hitValidationConfigName;

public:
	UFUNCTION(BlueprintCallable)
	void SetActiveSlashable(bool active);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UPrimitiveComponent* GetPlayerPrimitiveComponent() const;

public:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetLaunchingKiller() const;

public:
	AKillerProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AKillerProjectile) { return 0; }
