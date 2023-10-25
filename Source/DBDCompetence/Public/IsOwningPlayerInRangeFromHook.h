#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "GameplayTagContainer.h"
#include "IsOwningPlayerInRangeFromHook.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _tagQueryFromHook;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UIsOwningPlayerInRangeFromHook();
};

FORCEINLINE uint32 GetTypeHash(const UIsOwningPlayerInRangeFromHook) { return 0; }
