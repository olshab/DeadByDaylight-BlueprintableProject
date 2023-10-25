#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AlertsScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAlertsScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void RewardAlertSequenceCompleted() const;

public:
	UAlertsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAlertsScreen) { return 0; }
