#pragma once

#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "GameplayTagContainer.h"
#include "OpenChestInteraction.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UOpenChestInteraction : public USearchChestInteractionBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _camperSearchablePercentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimSequence* _successExitTimeAnimSequenceReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _startTime;

public:
	UOpenChestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOpenChestInteraction) { return 0; }
