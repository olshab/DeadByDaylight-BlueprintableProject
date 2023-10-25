#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "BaseRPCAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FBaseRPCAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Sender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SenderPlatform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

public:
	DBDANALYTICS_API FBaseRPCAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBaseRPCAnalytics) { return 0; }
