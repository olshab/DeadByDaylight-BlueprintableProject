#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSavedProfileCumulativeData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSavedProfileCumulativeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FirstTimePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesLeftAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesLeftAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesAsSurvivorNoFriends;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesAsKillerNoFriends;

	UPROPERTY(EditAnywhere)
	FDateTime LastMatchTimestamp;

	UPROPERTY(EditAnywhere)
	FDateTime LastSessionTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeSessions;

	UPROPERTY(EditAnywhere)
	FTimespan CumulativePlaytime;

public:
	DEADBYDAYLIGHT_API FPlayerSavedProfileCumulativeData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerSavedProfileCumulativeData) { return 0; }
