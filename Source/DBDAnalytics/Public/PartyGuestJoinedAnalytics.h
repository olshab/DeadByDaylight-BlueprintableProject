#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyGuestJoinedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyGuestJoinedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InviteeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InviteeName;

public:
	DBDANALYTICS_API FPartyGuestJoinedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyGuestJoinedAnalytics) { return 0; }
