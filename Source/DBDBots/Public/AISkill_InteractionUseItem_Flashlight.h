#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AIRoll.h"
#include "AISkill_InteractionUseItem_Flashlight.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Flashlight : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIRoll VulnerableTargetStartRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetFaceMeMaxHalfAngle;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _targetActor;

public:
	UAISkill_InteractionUseItem_Flashlight();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_Flashlight) { return 0; }
