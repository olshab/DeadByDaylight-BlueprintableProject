#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PostGameAnalyticsBase.generated.h"

USTRUCT(BlueprintType)
struct FPostGameAnalyticsBase: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodwebPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BonusEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MatchIncentive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LteIncentive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GameDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PipsGainedOrLost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchEndReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTutorialBotMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OnboardingModeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingABTestingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingNumberActiveModes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingNewAssignedMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExactPing;

public:
	DBDANALYTICS_API FPostGameAnalyticsBase();
};

FORCEINLINE uint32 GetTypeHash(const FPostGameAnalyticsBase) { return 0; }
