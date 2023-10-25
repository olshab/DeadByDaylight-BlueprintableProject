#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "CheatExecutedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCheatExecutedAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Command;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Successful;

public:
	DBDANALYTICS_API FCheatExecutedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCheatExecutedAnalytics) { return 0; }
