#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AuricCellsBundleViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAuricCellsBundleViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText CurrencyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayedPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float BonusPercentage;

public:
	DBDUIVIEWINTERFACES_API FAuricCellsBundleViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAuricCellsBundleViewData) { return 0; }
