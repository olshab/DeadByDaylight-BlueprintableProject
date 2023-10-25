#pragma once

#include "CoreMinimal.h"
#include "StateMachine.h"
#include "AtlantaTutorialStateMachine.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAtlantaTutorialStateMachine : public UStateMachine
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnBlockingNotificationDismissed(FName blockingNotificationID);

public:
	UAtlantaTutorialStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTutorialStateMachine) { return 0; }
