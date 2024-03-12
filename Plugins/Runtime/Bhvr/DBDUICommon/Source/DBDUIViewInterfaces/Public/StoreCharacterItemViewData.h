#pragma once

#include "CoreMinimal.h"
#include "StoreItemViewData.h"
#include "CharacterRewardViewData.h"
#include "EPlayerRole.h"
#include "PrestigeViewData.h"
#include "ECharacterDifficulty.h"
#include "StoreCharacterItemViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharacterItemViewData : public UStoreItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCharacterRewardViewData CharacterReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName BackgroundImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName KillerPowerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasNonSelectedPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDlcLockedKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLegacyRewardPrestigeEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPrestigeViewData Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 NewItemsCount;

public:
	UStoreCharacterItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCharacterItemViewData) { return 0; }
