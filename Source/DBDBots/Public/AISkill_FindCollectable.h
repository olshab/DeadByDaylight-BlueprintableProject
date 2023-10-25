#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AISkill_FindCollectable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CollectUnderItemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectOverItemChargeRatio;

public:
	UAISkill_FindCollectable();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable) { return 0; }
