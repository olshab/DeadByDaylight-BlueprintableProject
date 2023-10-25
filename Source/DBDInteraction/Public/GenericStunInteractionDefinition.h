#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GenericStunInteractionDefinition.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGenericStunInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DispatchStunEvent(ADBDPlayer* player);

public:
	UGenericStunInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UGenericStunInteractionDefinition) { return 0; }
