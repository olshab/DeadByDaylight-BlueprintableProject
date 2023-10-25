#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RotateToBBInteractor.generated.h"

UCLASS(Blueprintable)
class UBTTask_RotateToBBInteractor : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InteractionIds;

public:
	UBTTask_RotateToBBInteractor();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_RotateToBBInteractor) { return 0; }
