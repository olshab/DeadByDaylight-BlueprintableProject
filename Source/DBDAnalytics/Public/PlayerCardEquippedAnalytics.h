#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerCardEquippedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCardEquippedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Badge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Banner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FromScreen;

public:
	DBDANALYTICS_API FPlayerCardEquippedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardEquippedAnalytics) { return 0; }
