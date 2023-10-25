#pragma once

#include "CoreMinimal.h"
#include "HudObjectivesViewInterface.h"
#include "TutorialHighlightViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreHudObjectivesWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudObjectivesWidget : public UCoreBaseHudWidget, public IHudObjectivesViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* SpecialSpacer;

public:
	UCoreHudObjectivesWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudObjectivesWidget) { return 0; }
