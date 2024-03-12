#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PriceTagViewData.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "StoreArchivePassViewData.h"
#include "StoreArchiveFragmentViewData.h"
#include "TimerFlagViewData.h"
#include "StoreSpecialPackViewData.generated.h"

class UStoreCustomizationItemViewData;
class UStoreCharacterItemViewData;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSoftRemoteContentCacheObjectPtr PackImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPriceTagViewData PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> CharactersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> CustomizationsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreArchivePassViewData ArchivePassData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreArchiveFragmentViewData ArchiveFragmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTimerFlagViewData TimerViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ActivationStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ActivationEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

public:
	UFUNCTION(BlueprintPure)
	bool ContainsArchivePassFragments() const;

	UFUNCTION(BlueprintPure)
	bool ContainsArchivePass() const;

public:
	UStoreSpecialPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPackViewData) { return 0; }
