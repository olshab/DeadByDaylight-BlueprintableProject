#pragma once

#include "CoreMinimal.h"
#include "GrantedRewardPopupViewData.h"
#include "ECurrencyType.h"
#include "AuricCellsBundleViewData.h"
#include "CurrencyRewardPopupViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UCurrencyRewardPopupViewData : public UGrantedRewardPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType Currency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasSourcePackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString SourcePackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FAuricCellsBundleViewData AuricCellsBundleViewData;

public:
	UCurrencyRewardPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyRewardPopupViewData) { return 0; }
