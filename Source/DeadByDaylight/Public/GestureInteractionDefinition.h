#pragma once

#include "CoreMinimal.h"
#include "EGestureID.h"
#include "InteractionDefinition.h"
#include "GestureInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGestureInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGestureID _gestureID;

public:
	UGestureInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UGestureInteractionDefinition) { return 0; }
