#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTeleport.h"
#include "AISkill_InteractionTeleportEthereal.generated.h"

class AActor;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal : public UAISkill_InteractionTeleport
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TeleportPlanInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxTeleportAlignHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AbortNotWorkingTeleportDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AbortAddRunCooldownPenaltyTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _onStimulusInstigator;

public:
	UAISkill_InteractionTeleportEthereal();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTeleportEthereal) { return 0; }
