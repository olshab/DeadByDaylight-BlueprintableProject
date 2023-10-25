#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostProcessUpdate.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API APostProcessUpdate : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PostProcessToggle(bool toggle);

public:
	APostProcessUpdate();
};

FORCEINLINE uint32 GetTypeHash(const APostProcessUpdate) { return 0; }
