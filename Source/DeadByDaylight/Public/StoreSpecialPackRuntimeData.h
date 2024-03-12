#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "StoreSpecialPackRuntimeItem.h"
#include "UObject/NoExportTypes.h"
#include "StoreSpecialPackRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FString> TitleByCulture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreSpecialPackRuntimeItem> Content;

	UPROPERTY(EditAnywhere, Transient)
	TMap<ECurrencyType, uint32> OriginalCost;

	UPROPERTY(EditAnywhere, Transient)
	TMap<ECurrencyType, uint32> DiscountedCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Discount;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime StartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DLCId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackRuntimeData) { return 0; }
