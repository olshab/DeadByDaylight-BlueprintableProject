#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "PriceTagViewData.h"
#include "SpecialEventInfoViewData.h"
#include "StoreItemUnlockInfoViewData.h"
#include "StoreItemViewData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreItemViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNewInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsTutorialItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString LimitedTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DiscountTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSpecialEventInfoViewData EventInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ChapterPackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString HeritagePackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> SpecialPackIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreItemUnlockInfoViewData UnlockInfo;

public:
	UFUNCTION(BlueprintPure)
	bool GetIsOwned() const;

	UFUNCTION(BlueprintPure)
	bool GetIsEnabled() const;

	UFUNCTION(BlueprintPure)
	bool GetIsBuyable() const;

	UFUNCTION(BlueprintPure)
	bool GetIsAvailable() const;

	UFUNCTION(BlueprintPure)
	TSoftObjectPtr<UTexture2D> GetIcon() const;

public:
	UStoreItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreItemViewData) { return 0; }
