#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "PlayerRankData.h"
#include "PlayerRoundStartEventData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerRoundStartEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsABot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EAIDifficultyLevel BotDifficultyLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString BotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString BotMirrorID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerRankForRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 BloodWebLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Pips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPlayerRankData> PlayerRankDataArray;

public:
	DEADBYDAYLIGHT_API FPlayerRoundStartEventData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerRoundStartEventData) { return 0; }
