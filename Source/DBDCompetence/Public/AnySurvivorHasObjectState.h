#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "AnySurvivorHasObjectState.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _stateTag;

protected:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void OnSurvivorAdded(ACamperPlayer* survivor);

public:
	UAnySurvivorHasObjectState();
};

FORCEINLINE uint32 GetTypeHash(const UAnySurvivorHasObjectState) { return 0; }
