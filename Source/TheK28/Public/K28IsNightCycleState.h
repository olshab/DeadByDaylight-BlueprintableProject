#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "EK28NightCycleState.h"
#include "K28IsNightCycleState.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28IsNightCycleState : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EK28NightCycleState _nightCycleState;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UK28IsNightCycleState();
};

FORCEINLINE uint32 GetTypeHash(const UK28IsNightCycleState) { return 0; }
