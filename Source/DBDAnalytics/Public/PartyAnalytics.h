#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PartyAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PartyId;

public:
	DBDANALYTICS_API FPartyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyAnalytics) { return 0; }
