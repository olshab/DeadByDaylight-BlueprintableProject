#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "ECamperDamageState.h"
#include "GameEventData.h"
#include "K35SurvivorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK35SurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDestroyingKillerTeleportPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _huskDestructionHorizontalCameraOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _huskDestructionVerticalCameraOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAfflictedByKillerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRespondingToKillerTeleportPointInterruptByTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRespondingToInfection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRespondingToProjectileHindered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRespondingToAreaBlastInjury;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECamperDamageState _damageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _destroyLingerTime;

public:
	UFUNCTION(BlueprintCallable)
	void StartKillCam();

	UFUNCTION(BlueprintCallable)
	void ResetRespondingToProjectileHinderedEvent();

	UFUNCTION(BlueprintCallable)
	void ResetRespondingToInfectionEvent();

	UFUNCTION(BlueprintCallable)
	void ResetRespondingToAreaBlastInjuryEvent();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable)
	void EndKillCam();

public:
	UK35SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK35SurvivorAnimInstance) { return 0; }
