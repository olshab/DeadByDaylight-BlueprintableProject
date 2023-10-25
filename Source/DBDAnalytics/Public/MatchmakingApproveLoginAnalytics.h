#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingApproveLoginAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingApproveLoginAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Error;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString JoiningUserID;

public:
	DBDANALYTICS_API FMatchmakingApproveLoginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingApproveLoginAnalytics) { return 0; }
