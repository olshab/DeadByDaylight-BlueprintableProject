#pragma once

#include "CoreMinimal.h"
#include "EBloodOrbState.h"
#include "Components/ActorComponent.h"
#include "BloodOrbStateMonitorDelegate.h"
#include "BloodOrbStateMonitorComponent.generated.h"

class ABloodOrb;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBloodOrbStateMonitorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBloodOrbStateMonitorDelegate OnBloodOrbAbsorbedCosmetic;

private:
	UFUNCTION(BlueprintCallable)
	void OnBloodOrbStateChanged(const EBloodOrbState oldState, const EBloodOrbState newState, const ABloodOrb* bloodOrb) const;

	UFUNCTION(BlueprintCallable)
	void OnBloodOrbSpawned(const ABloodOrb* bloodOrb);

	UFUNCTION(BlueprintCallable)
	void OnBloodOrbDestroyed(const ABloodOrb* bloodOrb);

public:
	UBloodOrbStateMonitorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbStateMonitorComponent) { return 0; }
