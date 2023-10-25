#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ClientConnectionBaseAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FClientConnectionBaseAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientSurvivorIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientKillerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientPlatformAccountId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientPlatform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameType;

public:
	DBDANALYTICS_API FClientConnectionBaseAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FClientConnectionBaseAnalytics) { return 0; }
