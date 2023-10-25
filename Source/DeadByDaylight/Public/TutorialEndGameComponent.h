#pragma once

#include "CoreMinimal.h"
#include "EndGameComponent.h"
#include "TutorialEndGameComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTutorialEndGameComponent : public UEndGameComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timerMaxCompletionPercentage;

public:
	UFUNCTION(BlueprintCallable)
	void SetTimerMaxCompletionPercentage(const float& percentage);

public:
	UTutorialEndGameComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTutorialEndGameComponent) { return 0; }
