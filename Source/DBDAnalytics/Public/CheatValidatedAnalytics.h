#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "CheatValidatedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCheatValidatedAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Command;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Validated;

public:
	DBDANALYTICS_API FCheatValidatedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCheatValidatedAnalytics) { return 0; }
