#pragma once

#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "EGameState.h"
#include "PrestigeData.h"
#include "TallyPlayerResultData.generated.h"

USTRUCT(BlueprintType)
struct FTallyPlayerResultData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName CharacterIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PlayerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PlatformAccountId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString MirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EGameState PlayerStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData OfferingData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FInventorySlotData> PerksData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData ItemData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FInventorySlotData> AddonsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPrestigeData PrestigeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsReported;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsMyScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOffNetwork;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShowPortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsABot;

public:
	DEADBYDAYLIGHT_API FTallyPlayerResultData();
};

FORCEINLINE uint32 GetTypeHash(const FTallyPlayerResultData) { return 0; }
