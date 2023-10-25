#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTeleportEthereal.h"
#include "AISkill_InteractionTeleportEthereal_Nightmare.generated.h"

class AGenerator;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal_Nightmare : public UAISkill_InteractionTeleportEthereal
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TeleportIfPathLengthSavedAboveRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _toGenerator;

public:
	UAISkill_InteractionTeleportEthereal_Nightmare();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTeleportEthereal_Nightmare) { return 0; }
