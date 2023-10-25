#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_KillerAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGameplay_KillerAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodlustTier1Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodlustTier2Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodlustTier3Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BloodlustTier1Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BloodlustTier2Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BloodlustTier3Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BloodlustSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountFail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountTier1Fail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountTier1Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountTier2Fail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountTier2Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountTier3Fail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChaseCountTier3Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HookCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MurderCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletProcedural;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletProceduralSetCount;

	UPROPERTY(EditAnywhere)
	uint32 PalletGenerationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletGeneric;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BreakableWallSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BreakableWallDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DropCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitCloseCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitCloseCountSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitFarCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitFarCountSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitSpecialCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitSpecialCountSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ClosetOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ClosetOpenSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EscapeesHatchCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondesAtLeastOneSurvivorHooked;

	UPROPERTY(EditAnywhere)
	uint32 AmountTilesVisited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartZ;

public:
	DBDANALYTICS_API FGameplay_KillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameplay_KillerAnalytics) { return 0; }
