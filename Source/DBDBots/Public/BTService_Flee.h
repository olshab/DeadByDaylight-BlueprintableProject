#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIDisplayDebugInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "Templates/SubclassOf.h"
#include "BTService_Flee.generated.h"

class UPathStrategySelector;
class UObject;
class UNavMovePath;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_Flee : public UBTService, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFleePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBShouldFallPallet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBEvadePointCrossingDest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIgnoreHostileStimulusInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UPathStrategySelector> PathStrategySelectorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UClass*> IgnoreOnEndObjectInFocusCooldownTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OnEndObjectInFocusCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ShouldFallPalletUnderHostileHorizontalRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShouldFallPalletUnderHostileVerticalRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearFleePathBBKeyDelay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UNavMovePath* _activePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UObject*> _lostFocusedObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPathStrategySelector* _strategySelector;

public:
	UBTService_Flee();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_Flee) { return 0; }
