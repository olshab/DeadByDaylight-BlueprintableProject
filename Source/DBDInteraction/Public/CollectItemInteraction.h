#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "OnCollectUpdateStart.h"
#include "OnCollectUpdateEnd.h"
#include "CollectItemInteraction.generated.h"

class ACollectable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UCollectItemInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCollectUpdateStart OnCollectUpdateStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCollectUpdateEnd OnCollectUpdateEnd;

public:
	UFUNCTION(BlueprintPure)
	ACollectable* GetItem() const;

public:
	UCollectItemInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCollectItemInteraction) { return 0; }
