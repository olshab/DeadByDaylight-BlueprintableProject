#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStatusEffectType.h"
#include "UObject/SoftObjectPtr.h"
#include "EInventoryItemType.h"
#include "EItemAvailability.h"
#include "EItemRarity.h"
#include "LoadoutMenuViewData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API ULoadoutMenuViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> LoadoutIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ParentDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ParentTypeDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsParentAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemAvailability Availability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTeachablePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSlasherPerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsKillSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPastEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventBannerLabel;

public:
	ULoadoutMenuViewData();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuViewData) { return 0; }
