#pragma once

#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "AITunableParameter.h"
#include "PathBuilder_EvadeLoop.generated.h"

class UNavMovePath;
class UDBDNavEvadeLoopComponent;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathBuilder_EvadeLoop : public UPathBuilder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaserMeleeAttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForceEvadePointUnderDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaserCrossingVaultTimePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaserCrossingPalletTimePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActivePathTimeBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InactivePathTimePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SwapPathTimePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BreakPalletInteractionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OnPathRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClosePathPointRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxEvadeInteractableWeightDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeightAtMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MaxWeightAtNearestDistanceIfHostileHasRangedAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeightAtMaxSafety;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxNearAllyPenaltyPathPointDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeightWhenNearAlly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeightWhenNearLureableDangerObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LureableDangerObjectWeightDropoffPerDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinSafetyRatingAgainstMeleeHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinSafetyRatingAgainstRangedHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SidekickToLoopInvalidateDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TrapToLoopInvalidateDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UNavMovePath* _originalEvadeLoopWorkPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UNavMovePath* _querierWorkPathA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UNavMovePath* _querierWorkPathB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UNavMovePath* _chaserWorkPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDNavEvadeLoopComponent* _pickedEvadeLoopComponent;

public:
	UPathBuilder_EvadeLoop();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder_EvadeLoop) { return 0; }
