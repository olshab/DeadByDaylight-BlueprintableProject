#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStoreCollectionFlags.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FString> CollectionTitleByCulture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FString> CollectionSubtitleByCulture;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString HeroImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString HeroVideo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FString> AdditionalImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FString> ItemIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCollectionFlags Flags;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime SpecialStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime SpecialEndDate;

public:
	DEADBYDAYLIGHT_API FStoreCollectionRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionRuntimeData) { return 0; }
