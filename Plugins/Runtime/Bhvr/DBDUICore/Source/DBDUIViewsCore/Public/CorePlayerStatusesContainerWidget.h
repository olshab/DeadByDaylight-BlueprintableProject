#pragma once

#include "CoreMinimal.h"
#include "TutorialHighlightViewInterface.h"
#include "PlayerStatusesContainerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "UObject/ScriptInterface.h"
#include "CorePlayerStatusesContainerWidget.generated.h"

class UCorePlayerStatusWidget;
class IPlayerStatusViewInterface;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget, public IPlayerStatusesContainerViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCorePlayerStatusWidget*> PlayerStatusWidgets;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusViewInterfaces;

public:
	UCorePlayerStatusesContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerStatusesContainerWidget) { return 0; }
