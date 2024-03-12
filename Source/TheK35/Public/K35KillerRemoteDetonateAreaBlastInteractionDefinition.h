#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K35KillerRemoteDetonateAreaBlastInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35KillerRemoteDetonateAreaBlastInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UK35KillerRemoteDetonateAreaBlastInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerRemoteDetonateAreaBlastInteractionDefinition) { return 0; }
