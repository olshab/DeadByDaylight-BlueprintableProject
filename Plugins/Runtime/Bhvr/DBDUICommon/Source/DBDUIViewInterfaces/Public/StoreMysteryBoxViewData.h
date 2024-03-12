#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreMysteryBoxViewData.generated.h"

class UMysteryBoxPreviousReward;

USTRUCT(BlueprintType)
struct FStoreMysteryBoxViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool CanClaimCurrentBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasNextBoxToClaim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime NextAvailableAtTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasPreviousClaimedBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime PreviousClaimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMysteryBoxPreviousReward* Reward;

public:
	DBDUIVIEWINTERFACES_API FStoreMysteryBoxViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreMysteryBoxViewData) { return 0; }
