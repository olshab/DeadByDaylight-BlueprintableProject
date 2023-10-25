#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingHostCreatedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingHostCreatedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumPublicConnections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumPrivateConnections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldAdvertise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLANMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowInvites;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsesPresence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowJoinViaPresenceFriendsOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowJoinInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowJoinViaPresence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HostSettings;

public:
	DBDANALYTICS_API FMatchmakingHostCreatedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingHostCreatedAnalytics) { return 0; }
