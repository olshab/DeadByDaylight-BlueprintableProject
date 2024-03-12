#pragma once

#include "CoreMinimal.h"
#include "PostGameAnalyticsBase.h"
#include "PostGame_KillerAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPostGame_KillerAnalytics: public FPostGameAnalyticsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Brutality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Deviousness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Hunter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Sacrifice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BrutalityBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DeviousnessBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HunterBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SacrificeBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EscapeesCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SacrificedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KilledCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DisconnectCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BotCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeOpenGate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SurvivorSpawningPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratorsDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EGS_starter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EGS_time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EGS_duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EGS_sacrifice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EGS_reachEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedKeyboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratorRepairTimestamp1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratorRepairTimestamp2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratorRepairTimestamp3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratorRepairTimestamp4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratorRepairTimestamp5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratorsMaxRegressionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratorKicksCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedHapticsVibration;

public:
	DBDANALYTICS_API FPostGame_KillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPostGame_KillerAnalytics) { return 0; }
