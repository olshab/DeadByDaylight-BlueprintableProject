#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ContainsInteraction.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_ContainsInteraction : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InteractionIds;

public:
	UBTDecorator_ContainsInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ContainsInteraction) { return 0; }
