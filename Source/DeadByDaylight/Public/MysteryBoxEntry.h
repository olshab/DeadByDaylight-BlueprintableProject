#pragma once

#include "CoreMinimal.h"
#include "MysteryBoxReward.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBaseWithId.h"
#include "MysteryBoxEntry.generated.h"

USTRUCT(BlueprintType)
struct FMysteryBoxEntry: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Campaign;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveFromDate;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveToDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMysteryBoxReward> PossibleRewards;

public:
	DEADBYDAYLIGHT_API FMysteryBoxEntry();
};

FORCEINLINE uint32 GetTypeHash(const FMysteryBoxEntry) { return 0; }
