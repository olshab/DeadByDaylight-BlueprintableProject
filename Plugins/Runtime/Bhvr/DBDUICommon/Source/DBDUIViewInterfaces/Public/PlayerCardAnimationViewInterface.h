#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerCardAnimationViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerCardAnimationViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerCardAnimationViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStopAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayAnimation();

};
