#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerCardMenuTabAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCardMenuTabAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Provider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FromScreen;

public:
	DBDANALYTICS_API FPlayerCardMenuTabAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardMenuTabAnalytics) { return 0; }
