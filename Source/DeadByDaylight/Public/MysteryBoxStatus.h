#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MysteryBoxClaimedReward.h"
#include "MysteryBoxStatus.generated.h"

USTRUCT(BlueprintType)
struct FMysteryBoxStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	FString Campaign;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool CanClaimCurrentBox;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NextClaimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool NextClaimTime_IsSet;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime LastClaimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool LastClaimTime_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	TArray<FMysteryBoxClaimedReward> LastReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool LastReward_IsSet;

public:
	DEADBYDAYLIGHT_API FMysteryBoxStatus();
};

FORCEINLINE uint32 GetTypeHash(const FMysteryBoxStatus) { return 0; }
