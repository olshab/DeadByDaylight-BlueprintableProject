#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "ExecExecutedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FExecExecutedAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Command;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Executed;

public:
	DBDANALYTICS_API FExecExecutedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FExecExecutedAnalytics) { return 0; }
