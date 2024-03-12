#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreSpecialPackCatalogPrice.h"
#include "StoreSpecialPackCatalogItemMetaData.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackCatalogItemMetaData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreSpecialPackCatalogPrice> FullPrice;

	UPROPERTY(EditAnywhere, Transient)
	uint32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FString> SpecialPackTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Discount;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool StartDate_IsSet;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool EndDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DLCId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, SkipSerialization)
	bool DLCId_IsSet;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackCatalogItemMetaData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackCatalogItemMetaData) { return 0; }
