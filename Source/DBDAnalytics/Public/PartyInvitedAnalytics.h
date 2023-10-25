#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyInvitedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyInvitedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InviteeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

public:
	DBDANALYTICS_API FPartyInvitedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyInvitedAnalytics) { return 0; }
