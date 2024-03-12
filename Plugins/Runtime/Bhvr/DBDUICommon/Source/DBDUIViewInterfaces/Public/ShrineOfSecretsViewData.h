#pragma once

#include "CoreMinimal.h"
#include "ShrineOfSecretsItemViewData.h"
#include "UObject/NoExportTypes.h"
#include "ShrineOfSecretsViewData.generated.h"

USTRUCT(BlueprintType)
struct FShrineOfSecretsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime OfferDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FShrineOfSecretsItemViewData> ItemsViewData;

public:
	DBDUIVIEWINTERFACES_API FShrineOfSecretsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FShrineOfSecretsViewData) { return 0; }
