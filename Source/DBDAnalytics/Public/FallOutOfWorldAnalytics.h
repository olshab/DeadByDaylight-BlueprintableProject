#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FallOutOfWorldAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FFallOutOfWorldAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FallOutMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ElapsedMatchTime;

public:
	DBDANALYTICS_API FFallOutOfWorldAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFallOutOfWorldAnalytics) { return 0; }
