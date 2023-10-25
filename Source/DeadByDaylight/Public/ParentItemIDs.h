#pragma once

#include "CoreMinimal.h"
#include "ParentItemIDs.generated.h"

USTRUCT(BlueprintType)
struct FParentItemIDs
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MatchAnyItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ItemIDs;

public:
	DEADBYDAYLIGHT_API FParentItemIDs();
};

FORCEINLINE uint32 GetTypeHash(const FParentItemIDs) { return 0; }
