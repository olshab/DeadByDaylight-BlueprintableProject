#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreCollectionMediaData.h"
#include "StoreCollectionRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCollectionRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CollectionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime UpdatedDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FString> CollectionTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FString> CollectionSubtitle;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime LimitedAvailabilityStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool LimitedAvailabilityStartDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool VisibleBeforeStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool VisibleBeforeStartDate_IsSet;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime LimitedAvailabilityEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool LimitedAvailabilityEndDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool VisibleAfterEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool VisibleAfterEndDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreCollectionMediaData HeroImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreCollectionMediaData HeroVideo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreCollectionMediaData> AdditionalImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FString> Items;

public:
	DEADBYDAYLIGHT_API FStoreCollectionRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionRuntimeData) { return 0; }
