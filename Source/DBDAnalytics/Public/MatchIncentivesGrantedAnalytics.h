#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "MatchIncentivesGrantedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchIncentivesGrantedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Incentive;

public:
	DBDANALYTICS_API FMatchIncentivesGrantedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchIncentivesGrantedAnalytics) { return 0; }
