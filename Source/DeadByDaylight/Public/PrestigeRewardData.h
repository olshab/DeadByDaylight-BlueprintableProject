#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PrestigeRewardStruct.h"
#include "PrestigeRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPrestigeRewardData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssociatedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere)
	FPrestigeRewardStruct Rewards;

public:
	DEADBYDAYLIGHT_API FPrestigeRewardData();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeRewardData) { return 0; }
