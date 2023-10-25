#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AIHasExhaustionPerkCondition.generated.h"

USTRUCT(BlueprintType)
struct FAIHasExhaustionPerkCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown PerkID;

public:
	DBDBOTS_API FAIHasExhaustionPerkCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAIHasExhaustionPerkCondition) { return 0; }
