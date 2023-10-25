#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "K28InteractionPreventingTagsModification.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct FK28InteractionPreventingTagsModification
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UInteractionDefinition> InteractionToAddPreventingTagTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer PreventingTags;

public:
	THEK28_API FK28InteractionPreventingTagsModification();
};

FORCEINLINE uint32 GetTypeHash(const FK28InteractionPreventingTagsModification) { return 0; }
