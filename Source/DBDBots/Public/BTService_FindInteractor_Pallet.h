#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFindInteractablePalletIntentions.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Pallet.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Pallet : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBPickSideRelativelyFrom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractablePalletIntentions IntentionFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RaisePalletPerkId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BrokenGeneratorGoalMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BrokenGeneratorGoalMaxDistanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SpawnInSurvivorLOSPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SpawnNearSurvivorMinDistanceSquared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SpawnNearSurvivorPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PlacedNearGamePalletMinDistanceSquared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PlacedNearGamePalletPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ConvincingFactorTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SkipSafetyCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AcceptablePalletDropExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBEvadePointCrossingDest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtraHealthySurvivorActionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtraInjuredSurvivorActionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PalletInteractorLocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AcceptableEvadePointCrossingDestDist;

public:
	UBTService_FindInteractor_Pallet();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Pallet) { return 0; }
