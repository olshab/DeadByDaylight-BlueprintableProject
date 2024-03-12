#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
#include "StoreCollectionLimitedAvailabilityStart.h"
#include "StoreCollectionLimitedAvailabilityEnd.h"
#include "StoreCollectionEditorData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCollectionEditorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CollectionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionSubtitle;

	UPROPERTY(EditAnywhere)
	FDateTime DateUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasLimitedAvailabilityStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCollectionLimitedAvailabilityStart LimitedAvailabilityStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasLimitedAvailabilityEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCollectionLimitedAvailabilityEnd LimitedAvailabilityEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SortOrder;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath HeroImage;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath HeroVideo;

	UPROPERTY(EditAnywhere)
	TArray<FSoftObjectPath> AdditionalImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Items;

public:
	DEADBYDAYLIGHT_API FStoreCollectionEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionEditorData) { return 0; }
