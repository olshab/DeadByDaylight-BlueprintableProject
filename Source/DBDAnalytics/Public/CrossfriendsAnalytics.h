#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrossfriendsAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCrossfriendsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetKrakenUserId;

public:
	DBDANALYTICS_API FCrossfriendsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCrossfriendsAnalytics) { return 0; }
