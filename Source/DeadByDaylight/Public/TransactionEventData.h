#pragma once

#include "CoreMinimal.h"
#include "TransactionEventData.generated.h"

USTRUCT(BlueprintType)
struct FTransactionEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TransactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TransactionSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString SourceId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SourceTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrencyBalance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 LevelAchieved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ItemIDAcquired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString SelectedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool TransactionTriggeredLevelUp;

public:
	DEADBYDAYLIGHT_API FTransactionEventData();
};

FORCEINLINE uint32 GetTypeHash(const FTransactionEventData) { return 0; }
