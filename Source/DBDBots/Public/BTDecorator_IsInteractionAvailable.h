#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "EInteractionCheckType.h"
#include "EIsInteractionAvailableOnFilter.h"
#include "EInputInteractionType.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsInteractionAvailable.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsInteractionAvailable : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionCheckType InteractionCheckType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType InputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InteractionIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EIsInteractionAvailableOnFilter OnFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FailIfAnotherOngoingInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FailIfNotPerformingInteraction;

public:
	UBTDecorator_IsInteractionAvailable();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsInteractionAvailable) { return 0; }
