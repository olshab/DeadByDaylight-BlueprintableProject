#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RewardViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API URewardViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IRewardViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRewardTitle(const FText& rewardTitle);

};
