#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_ChaseAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGameplay_ChaseAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsABot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsIdSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordXStartKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordYStartKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordZStartKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordXEndKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordYEndKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordZEndKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletsDestroyedByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WindowsVaultedByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletsVaultedByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BasicAttackSwingsByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BasicAttackHitsByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecialAttackAttemptsByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecialAttackHitsByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceCoveredKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordXStartSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordYStartSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordZStartSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordXEndSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordYEndSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoordZEndSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletsDroppedBySurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletsStunnedBySurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WindowsVaultedBySurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletsVaultedBySurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StartingHealthOfSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EndingHealthOfSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AmountHealedOfSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartingTileSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EndingTileSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AmountOfTilesVisitedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> TilesVisitedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceCoveredSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplacementSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaseStartTimeInSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaseEndTimeInSecond;

public:
	DBDANALYTICS_API FGameplay_ChaseAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameplay_ChaseAnalytics) { return 0; }
