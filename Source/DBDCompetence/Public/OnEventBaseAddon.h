#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "OnEventBaseAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UOnEventBaseAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _eventToListenTo;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEventFired(const FGameEventData& gameEventData);

public:
	UOnEventBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UOnEventBaseAddon) { return 0; }
