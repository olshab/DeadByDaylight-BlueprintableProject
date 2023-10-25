#pragma once

#include "CoreMinimal.h"
#include "PrestigeData.h"
#include "AtlantaFreeTicketAffectedUIData.h"
#include "SpecialEventUIInfo.h"
#include "ECharacterDifficulty.h"
#include "EPlayerRole.h"
#include "PurchaseCurrencyData.h"
#include "CharacterSlotData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString BackgroundImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DLCId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DLCTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PackTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPrestigeData PrestigeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDLCPurchasable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDLCValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPurchaseCurrencyData> PurchaseDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ItemsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 TotalItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShowNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDlcLockedKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSpecialEventUIInfo EventInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasNonSelectedPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FAtlantaFreeTicketAffectedUIData FreeTicketAffectedData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RemainingTimeItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RemainingTimeDiscount;

public:
	DEADBYDAYLIGHT_API FCharacterSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterSlotData) { return 0; }
