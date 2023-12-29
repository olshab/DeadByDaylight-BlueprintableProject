#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime ActiveUntil;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath HeroImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath HeroVideo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSoftObjectPath> AdditionalImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Flags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime SpecialStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime SpecialEndDate;

public:
	DEADBYDAYLIGHT_API FStoreCollectionEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionEditorData) { return 0; }
