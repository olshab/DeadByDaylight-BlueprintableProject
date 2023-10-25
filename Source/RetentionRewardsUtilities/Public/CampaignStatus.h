#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CampaignStatus.generated.h"

USTRUCT(BlueprintType)
struct FCampaignStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsValid;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime StartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime EndDate;

public:
	RETENTIONREWARDSUTILITIES_API FCampaignStatus();
};

FORCEINLINE uint32 GetTypeHash(const FCampaignStatus) { return 0; }
