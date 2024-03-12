#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "StoreCollectionViewData.generated.h"

class UStoreCustomizationItemViewData;
class UFileMediaSource;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCollectionViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CollectionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplaySubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime LimitedAvailabilityStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool VisibleBeforeStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime LimitedAvailabilityEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool VisibleAfterEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSoftRemoteContentCacheObjectPtr HeroImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UFileMediaSource> HeroVideo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FSoftRemoteContentCacheObjectPtr> AdditionalImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 AvailableItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 OwnedItemsCount;

public:
	UFUNCTION(BlueprintPure)
	bool IsSpecial() const;

	UFUNCTION(BlueprintPure)
	bool IsCollectionHidden() const;

	UFUNCTION(BlueprintPure)
	bool IsCollectionActive() const;

	UFUNCTION(BlueprintPure)
	bool HasHeroVideo() const;

	UFUNCTION(BlueprintPure)
	bool HasHeroImage() const;

public:
	UStoreCollectionViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionViewData) { return 0; }
