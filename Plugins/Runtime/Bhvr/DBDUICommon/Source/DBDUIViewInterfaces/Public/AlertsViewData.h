#pragma once

#include "CoreMinimal.h"
#include "RewardWrapperViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "AlertsViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAlertsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> AlertRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> EventBackground;

public:
	DBDUIVIEWINTERFACES_API FAlertsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAlertsViewData) { return 0; }
