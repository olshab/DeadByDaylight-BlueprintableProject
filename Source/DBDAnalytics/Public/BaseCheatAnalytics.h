#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "BaseCheatAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FBaseCheatAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NetMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Requester;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequesterPlatform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequesterRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RequesterCharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequesterCharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchType;

public:
	DBDANALYTICS_API FBaseCheatAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBaseCheatAnalytics) { return 0; }
