#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "RewardPopupViewData.generated.h"

class UGrantedRewardPopupViewData;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API URewardPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName BundleId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UGrantedRewardPopupViewData*> Rewards;

public:
	URewardPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const URewardPopupViewData) { return 0; }
