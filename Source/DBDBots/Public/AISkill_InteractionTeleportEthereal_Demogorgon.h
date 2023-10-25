#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTeleportEthereal.h"
#include "AISkill_InteractionTeleportEthereal_Demogorgon.generated.h"

class ADemogorgonPortal;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal_Demogorgon : public UAISkill_InteractionTeleportEthereal
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRangeFromFirstPortal;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADemogorgonPortal* _firstPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADemogorgonPortal* _secondPortal;

public:
	UAISkill_InteractionTeleportEthereal_Demogorgon();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTeleportEthereal_Demogorgon) { return 0; }
