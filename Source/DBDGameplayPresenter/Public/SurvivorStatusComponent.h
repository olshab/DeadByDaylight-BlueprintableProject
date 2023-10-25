#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "SurvivorStatusComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAYPRESENTER_API USurvivorStatusComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _survivor;

private:
	UFUNCTION(BlueprintCallable)
	void OnValidatedInteractionStarted();

	UFUNCTION(BlueprintCallable)
	void OnValidatedInteractionEnded();

	UFUNCTION(BlueprintCallable)
	void OnSuvivorDamaged(const ECamperDamageState oldDamageState, const ECamperDamageState newDamageState);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSurivorStatusChange();

private:
	UFUNCTION(BlueprintCallable)
	void OnRunningAndMovementChanged(const bool isRunningAndMoving);

	UFUNCTION(BlueprintCallable)
	void OnHookedStateChanged();

	UFUNCTION(BlueprintCallable)
	void OnGuidedStateChanged();

	UFUNCTION(BlueprintCallable)
	void OnCrouchChanged(const bool isCrouched);

public:
	UFUNCTION(BlueprintPure)
	bool IsSleeping() const;

	UFUNCTION(BlueprintPure)
	bool IsRunning() const;

	UFUNCTION(BlueprintPure)
	bool IsInjured() const;

	UFUNCTION(BlueprintPure)
	bool IsHooked() const;

	UFUNCTION(BlueprintPure)
	bool IsHiding() const;

	UFUNCTION(BlueprintPure)
	bool IsHealing() const;

	UFUNCTION(BlueprintPure)
	bool IsHarpooned() const;

	UFUNCTION(BlueprintPure)
	bool IsGettingStrangled() const;

	UFUNCTION(BlueprintPure)
	bool IsGettingSacrificed() const;

	UFUNCTION(BlueprintPure)
	bool IsDying() const;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	bool IsCrouching() const;

	UFUNCTION(BlueprintPure)
	bool IsCaptured() const;

	UFUNCTION(BlueprintPure)
	void GetMovementSpeed(float& currentMovementSpeed, float& percentMovementSpeed, float& maximumMovementSpeed) const;

public:
	USurvivorStatusComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorStatusComponent) { return 0; }
