#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClaimStatus.generated.h"

USTRUCT(BlueprintType)
struct FClaimStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool isSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 LastClaimedIndex;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NextClaimTime;

public:
	RETENTIONREWARDSUTILITIES_API FClaimStatus();
};

FORCEINLINE uint32 GetTypeHash(const FClaimStatus) { return 0; }
