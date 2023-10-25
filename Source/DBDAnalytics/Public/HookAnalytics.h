#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HookAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FHookAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HookStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsIdSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SurvivorIsABot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsIdKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 KillerIsABot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsIdRescuer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 RescuerIsABot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimesOnHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Outcome;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HookDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EscapeAttemptStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EscapeAttemptFull;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SurvivorsRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfActiveSurvivorsStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfActiveSurvivorsEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfActiveSurvivorsTotal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationCampFace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationCampHard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationCampSoft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfRescuers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeForFirstRescuer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ReverseBearTrapOn;

public:
	DBDANALYTICS_API FHookAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHookAnalytics) { return 0; }
