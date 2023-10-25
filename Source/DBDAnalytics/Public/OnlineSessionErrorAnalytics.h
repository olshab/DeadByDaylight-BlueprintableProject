#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "OnlineSessionErrorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FOnlineSessionErrorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Reason;

public:
	DBDANALYTICS_API FOnlineSessionErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FOnlineSessionErrorAnalytics) { return 0; }
