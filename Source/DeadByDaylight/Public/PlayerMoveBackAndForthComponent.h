#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMoveBackAndForthComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerMoveBackAndForthComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnMoveTimerDone();

public:
	UPlayerMoveBackAndForthComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerMoveBackAndForthComponent) { return 0; }
