#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "NotEnoughCurrencyModalViewData.generated.h"

USTRUCT(BlueprintType)
struct FNotEnoughCurrencyModalViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShouldShowButton;

public:
	DBDUIVIEWINTERFACES_API FNotEnoughCurrencyModalViewData();
};

FORCEINLINE uint32 GetTypeHash(const FNotEnoughCurrencyModalViewData) { return 0; }
