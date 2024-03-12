#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EventObjectiveTargetData.h"
#include "EventObjectiveTrackerTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventObjectiveTrackerTarget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRewardPreviewVisible(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsReached(const bool isReached);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FEventObjectiveTargetData& data);

public:
	UEventObjectiveTrackerTarget();
};

FORCEINLINE uint32 GetTypeHash(const UEventObjectiveTrackerTarget) { return 0; }
