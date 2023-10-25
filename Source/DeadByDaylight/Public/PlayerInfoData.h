#pragma once

#include "CoreMinimal.h"
#include "PlayerInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerInfoData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CharacterIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool CanPrestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 DevotionLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ActivePips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 NumPipsToNextRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Ready;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShowPortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasActiveSubscription;

public:
	DEADBYDAYLIGHT_API FPlayerInfoData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerInfoData) { return 0; }
