#pragma once

#include "CoreMinimal.h"
#include "AISkill_Find.h"
#include "EInputInteractionType.h"
#include "AISkill_FindInteractable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable : public UAISkill_Find
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequiredInteractionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType RequiredInteractionInputType;

public:
	UAISkill_FindInteractable();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable) { return 0; }
