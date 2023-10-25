#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AIHasItemAddonCondition.generated.h"

USTRUCT(BlueprintType)
struct FAIHasItemAddonCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown ItemAddonID;

public:
	DBDBOTS_API FAIHasItemAddonCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAIHasItemAddonCondition) { return 0; }
