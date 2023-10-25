#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PartyJoinFailureAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyJoinFailureAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PartyMembersFriendshipStatus;

	UPROPERTY(EditAnywhere)
	uint32 NumKrakenConfirmedFriendsInParty;

	UPROPERTY(EditAnywhere)
	uint32 NumPlatformAcceptedFriendsInParty;

public:
	DBDANALYTICS_API FPartyJoinFailureAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyJoinFailureAnalytics) { return 0; }
