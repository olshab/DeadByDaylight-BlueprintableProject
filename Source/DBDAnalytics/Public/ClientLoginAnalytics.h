#pragma once

#include "CoreMinimal.h"
#include "ClientConnectionBaseAnalytics.h"
#include "ClientLoginAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FClientLoginAnalytics: public FClientConnectionBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientGameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoginResult;

public:
	DBDANALYTICS_API FClientLoginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FClientLoginAnalytics) { return 0; }
