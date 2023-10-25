#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "ECurrencyType.h"
#include "CurrencyConversionPopupViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UCurrencyConversionPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType FromCurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 FromCurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType ToCurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ToCurrencyAmount;

public:
	UCurrencyConversionPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyConversionPopupViewData) { return 0; }
