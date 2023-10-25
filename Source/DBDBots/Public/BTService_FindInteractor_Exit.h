#pragma once

#include "CoreMinimal.h"
#include "EFindInteractorOpenConditions.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractorExitOptions.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Exit.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Exit : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractorExitOptions Filter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractorOpenConditions OpenCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFinalExitLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClosedDoorOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenDoorOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AbortOnBlockedExitSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter OpenedExitGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HatchBonusGoalWeight;

public:
	UBTService_FindInteractor_Exit();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Exit) { return 0; }
