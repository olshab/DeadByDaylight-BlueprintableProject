#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "SpecialEventObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventObjectiveData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ObjectiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ObjectiveFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CompletedTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CompletedDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RewardId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LockedRewardGenericIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UnlockedRewardGenericIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StatName;

	UPROPERTY(EditAnywhere)
	uint32 Sections;

	UPROPERTY(EditAnywhere)
	uint32 MaxValue;

public:
	DEADBYDAYLIGHT_API FSpecialEventObjectiveData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventObjectiveData) { return 0; }
