#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "NewSurvivorTutorialAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FNewSurvivorTutorialAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLookAroundComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsWalkAroundComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRunningComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCrouchComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFirstVaultComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsGeneratorComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSecondVaultComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBeartrapComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaThree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPalletComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUnhookMegComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLockerComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsGetUnhookedComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHealMegComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsGetHealedComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOpenGateComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsEscapeComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeToCompleteAreaFour;

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
	DBDANALYTICS_API FNewSurvivorTutorialAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FNewSurvivorTutorialAnalytics) { return 0; }
