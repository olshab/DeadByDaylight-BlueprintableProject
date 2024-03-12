#pragma once

#include "CoreMinimal.h"
#include "BTService_FindGoalObject.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.generated.h"

class UInteractor;

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UBTService_FindInteractor : public UBTService_FindGoalObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RegisterAsDiscoveredWhenFound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBOnlyFromActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> OnlyWithInteractorIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectIfTerrorIsCloserThanSelfMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectIfInTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfInPressureZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseLastKnownPositionForTerrorRejects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RejectCooldownContextName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreMindFocusCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfAnySiblingInteractorHasCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AbandonIfInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfFocusedByOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfInteractableFocusedByOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfNotFocusedBySelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreFocusFilterInEndgameCollapse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfNotInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreSightFilterIfDiscovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreSightFilterIfInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectAboveRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreRangeFilterIfDiscovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreRangeFilterIfInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsesActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CantInterruptGoalInteractionUnderRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightBonusWhileInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractionSpeedStatusEffectID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightInteractionSpeedVariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUnsafeAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionUsesItemAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionIsSelfInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UnsafeInteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UnsafeActionUsesItemAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UnsafeActionIsSelfInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnsafeActionRange;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UInteractor* _goalInteractor;

public:
	UBTService_FindInteractor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor) { return 0; }
