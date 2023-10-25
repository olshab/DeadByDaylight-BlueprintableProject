#pragma once

#include "CoreMinimal.h"
#include "BalanceToolOverrideEntry.generated.h"

USTRUCT(BlueprintType)
struct FBalanceToolOverrideEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DbName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Value;

public:
	DEADBYDAYLIGHT_API FBalanceToolOverrideEntry();
};

FORCEINLINE uint32 GetTypeHash(const FBalanceToolOverrideEntry) { return 0; }
