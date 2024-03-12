#pragma once

#include "CoreMinimal.h"
#include "ChallengesMenuEventRitualsViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ChallengesMenuEventRitualsTabSelectedDelegate.h"
#include "ChallengesMenuEventRitualsWidget.generated.h"

class UCoreSelectableButtonWidget;
class UCoreTabContainerWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UChallengesMenuEventRitualsWidget : public UCoreTabContentWidget, public IChallengesMenuEventRitualsViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* TabsContainer;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChallengesMenuEventRitualsTabSelectedDelegate _eventRitualsTabSelectedDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void OnEventRitualsTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UChallengesMenuEventRitualsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsWidget) { return 0; }
