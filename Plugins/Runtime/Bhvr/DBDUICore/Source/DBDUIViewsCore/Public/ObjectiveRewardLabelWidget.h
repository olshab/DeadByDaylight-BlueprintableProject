#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ObjectiveRewardLabelViewData.h"
#include "ObjectiveRewardLabelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UObjectiveRewardLabelWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FObjectiveRewardLabelViewData& viewData);

public:
	UObjectiveRewardLabelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UObjectiveRewardLabelWidget) { return 0; }
