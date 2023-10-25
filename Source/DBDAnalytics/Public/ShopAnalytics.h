#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ShopAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FShopAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LogMessage;

public:
	DBDANALYTICS_API FShopAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FShopAnalytics) { return 0; }
