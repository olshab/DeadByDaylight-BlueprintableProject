#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_Key_Addon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Key_Addon : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RemainingPercentChargeToKeep;

public:
	UAISkill_InteractionUseItem_Key_Addon();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_Key_Addon) { return 0; }
