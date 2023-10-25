#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "NewKillerTutorialAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FNewKillerTutorialAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKickGeneratorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFollowSurvivorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDestroyPalletComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBeartrapComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHitSurvivorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKoSurvivorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPickupSurvivorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHookSurvivorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCloseHatchComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKillSurvivorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaThree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalTimeInTutorial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TutorialId;

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

public:
	DBDANALYTICS_API FNewKillerTutorialAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FNewKillerTutorialAnalytics) { return 0; }
