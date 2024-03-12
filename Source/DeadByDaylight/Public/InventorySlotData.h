#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EPerkCategory.h"
#include "SpecialEventUIInfo.h"
#include "EOfferingCategory.h"
#include "EStatusEffectType.h"
#include "EInventoryItemType.h"
#include "EItemAvailability.h"
#include "ELoadoutPartState.h"
#include "InventorySlotData.generated.h"

USTRUCT(BlueprintType)
struct FInventorySlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ParentDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ParentTypeDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsParentAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<EPerkCategory> PerkCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EOfferingCategory OfferingCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInventoryItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 StackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemAvailability Availability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsTeachablePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSlasherPerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPerkAvailableInFearMarket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPerkAvailableInBloodWeb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 TeachableLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DlcDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSpecialEventUIInfo EventInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 UnlockableLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLimitedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPrivateIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSharablePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ELoadoutPartState LoadoutPartState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FText> SearchTags;

public:
	DEADBYDAYLIGHT_API FInventorySlotData();
};

FORCEINLINE uint32 GetTypeHash(const FInventorySlotData) { return 0; }
