#pragma once

#include "CoreMinimal.h"
#include "PostGameAnalyticsBase.h"
#include "ECamperDamageState.h"
#include "PostGame_SurvivorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPostGame_SurvivorAnalytics: public FPostGameAnalyticsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Survival;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Altruism;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Boldness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ObjectivesBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SurvivalBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AltruismBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BoldnessBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Outcome;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECamperDamageState DamageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HookedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RepairCanceledBeforeRegressionStoppedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedKeyboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedHapticsVibration;

public:
	DBDANALYTICS_API FPostGame_SurvivorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPostGame_SurvivorAnalytics) { return 0; }
