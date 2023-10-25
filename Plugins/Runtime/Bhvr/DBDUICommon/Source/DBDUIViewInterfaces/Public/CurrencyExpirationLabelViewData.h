#pragma once

#include "CoreMinimal.h"
#include "CurrencyExpirationLabelViewData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyExpirationLabelViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText ExpirationDate;

public:
	DBDUIVIEWINTERFACES_API FCurrencyExpirationLabelViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyExpirationLabelViewData) { return 0; }
