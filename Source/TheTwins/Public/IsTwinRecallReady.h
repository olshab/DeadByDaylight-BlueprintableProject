#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTwinRecallReady.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsTwinRecallReady : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UIsTwinRecallReady();
};

FORCEINLINE uint32 GetTypeHash(const UIsTwinRecallReady) { return 0; }
