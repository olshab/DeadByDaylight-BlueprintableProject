#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "TransactionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FTransactionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TransactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TransactionSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SourceId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SourceTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrencyBalance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LevelAchieved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemIDAcquired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SelectedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TransactionTriggeredLevelUp;

public:
	DBDANALYTICS_API FTransactionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FTransactionAnalytics) { return 0; }
