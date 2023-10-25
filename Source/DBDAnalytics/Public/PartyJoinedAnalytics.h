#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyJoinedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyJoinedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FromJoinRequest;

public:
	DBDANALYTICS_API FPartyJoinedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyJoinedAnalytics) { return 0; }
