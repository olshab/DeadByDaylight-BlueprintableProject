#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "BaseIsPlayerPerformingInteraction.generated.h"

class UInteractionDefinition;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _interactionSemantics;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateIsTrue(UInteractionDefinition* interactionDefinition);

public:
	UFUNCTION(BlueprintCallable)
	void SetInteractionSemantics(const FGameplayTagContainer& interactionSemantics);

public:
	UBaseIsPlayerPerformingInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseIsPlayerPerformingInteraction) { return 0; }
