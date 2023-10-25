#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "TutorialObjectiveCompleted.h"
#include "TutorialObjectivesViewData.h"
#include "CoreTutorialObjectiveItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTutorialObjectiveCompleted TutorialObjectiveCompletedDelegate;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetObjectiveCompleted(bool removeAfterCompletion);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitObjective(const FTutorialObjectivesViewData& interactionsViewData);

public:
	UCoreTutorialObjectiveItem();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTutorialObjectiveItem) { return 0; }
