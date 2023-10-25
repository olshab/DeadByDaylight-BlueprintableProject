#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GhostKillerAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGhostKillerAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Stalk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StalkStealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Stalk25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Stalk50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Stalk75;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Stalk100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StalkLean25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StalkLean50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StalkLean75;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StalkLean100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Lean;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DownExposedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInStealthMode;

public:
	THEGHOSTFACE_API FGhostKillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGhostKillerAnalytics) { return 0; }
