#pragma once

#include "CoreMinimal.h"
#include "AnimBudgeterGameConfig.generated.h"

USTRUCT(BlueprintType)
struct FAnimBudgeterGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Ps4Budget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Ps5Budget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XboxOneBudget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XsxBudget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SwitchBudget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> SteamBudgets;

public:
	DEADBYDAYLIGHT_API FAnimBudgeterGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FAnimBudgeterGameConfig) { return 0; }
