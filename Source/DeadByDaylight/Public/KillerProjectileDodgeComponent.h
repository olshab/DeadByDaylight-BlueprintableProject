#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerProjectileDodgeComponent.generated.h"

class ACamperPlayer;
class AKillerProjectile;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerProjectileDodgeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AKillerProjectile* _killerProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _proximitySurvivors;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerProjectileLaunched();

	UFUNCTION(BlueprintCallable)
	void OnKillerProjectileFinishedWithoutCollision();

	UFUNCTION(BlueprintCallable)
	void OnKillerProjectileFinished(AActor* survivorHit);

public:
	UKillerProjectileDodgeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerProjectileDodgeComponent) { return 0; }
