#pragma once

#include "CoreMinimal.h"
#include "EAIObjectiveState.h"
#include "AITunableParameter.h"
#include "AIDisplayDebugInterface.h"
#include "Components/ActorComponent.h"
#include "EAIPressureZoneLevel.h"
#include "DangerStateGameStateMapContainer.h"
#include "EAIDifficultyLevel.h"
#include "GameStatePressureZoneLevelMapContainer.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "DBDAIStateComponent.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIStateComponent : public UActorComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UnsafeStateAtHookedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DireStateAtHookedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MidObjectiveStateProgressionRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIObjectiveState, FDangerStateGameStateMapContainer> GameStateTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIDifficultyLevel, FGameStatePressureZoneLevelMapContainer> PressureZoneLevelTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIDifficultyLevel, float> MinRadiusPressureZoneHabituation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIPressureZoneLevel, float> PressureZoneHighToLowRangeLerpRatios;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultChasedPhaseOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InjuredChasedPhaseOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultBeingAimedAtPhaseOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InjuredBeingAimedAtPhaseOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StimulusWasInSightDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoSFoVToStimulusCheckPeriod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoSToStimulusValidDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FoVToStimulusValidDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlockingSurvivorLocationLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlockingSurvivorLocationAcceptableDistSq;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumBlockingSurvivorLocationDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NotMovingCheckInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NotMovingSpeedPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NotMovingContinuousTimes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SpecialAttackReactionTimeMultiplier;

private:
	UFUNCTION(BlueprintCallable)
	void OnUniqueGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);

	UFUNCTION()
	void OnStartAimingEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnSpecialAttackEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UDBDAIStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIStateComponent) { return 0; }
