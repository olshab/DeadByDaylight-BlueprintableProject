#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ChatAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FChatAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SenderMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SenderPlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChatContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OriginalChatContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChatContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InGameTimestamp;

public:
	DBDANALYTICS_API FChatAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FChatAnalytics) { return 0; }
