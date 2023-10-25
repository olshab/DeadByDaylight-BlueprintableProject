#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTeleportEthereal.h"
#include "AISkill_InteractionTeleportEthereal_Blink.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal_Blink : public UAISkill_InteractionTeleportEthereal
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartBlinkAtWarpLocationRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValidateBlinkWarpRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlinkAboveSavedPathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlinkIfTargetWillBeInRange;

public:
	UAISkill_InteractionTeleportEthereal_Blink();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTeleportEthereal_Blink) { return 0; }
