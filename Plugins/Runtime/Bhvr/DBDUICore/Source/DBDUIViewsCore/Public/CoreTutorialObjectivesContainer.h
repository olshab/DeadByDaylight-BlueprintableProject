#pragma once

#include "CoreMinimal.h"
#include "TutorialObjectivesViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreTutorialObjectivesContainer.generated.h"

class UGridPanel;
class UCoreTutorialObjectiveItem;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget, public ITutorialObjectivesViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreTutorialObjectiveItem> CoreTutorialObjectiveItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 BasePooledInstanceAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* ObjectiveContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreTutorialObjectiveItem*> _objectivePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreTutorialObjectiveItem*> _objectiveItems;

private:
	UFUNCTION(BlueprintCallable)
	void OnTutorialObjectiveCompleted(UCoreTutorialObjectiveItem* item);

public:
	UCoreTutorialObjectivesContainer();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTutorialObjectivesContainer) { return 0; }
