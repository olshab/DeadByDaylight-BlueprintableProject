#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "LegacySavedDailyRitualInstance.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedDailyRitualInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName RitualKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<int32> CharacterIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<EPlayerRole> Roles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Progress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Tolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float DisplayThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float ExpReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Active;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Rewarded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool StateChanged;

	UPROPERTY(EditAnywhere, SaveGame)
	FDateTime DateAssigned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 NbGameElapsed;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY(EditAnywhere, SaveGame)
	TArray<FGameplayTag> TrackedGameEvents;

public:
	DEADBYDAYLIGHT_API FLegacySavedDailyRitualInstance();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedDailyRitualInstance) { return 0; }
