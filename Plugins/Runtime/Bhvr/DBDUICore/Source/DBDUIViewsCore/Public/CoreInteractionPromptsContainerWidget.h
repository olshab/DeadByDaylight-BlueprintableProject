#pragma once

#include "CoreMinimal.h"
#include "TutorialHighlightViewInterface.h"
#include "InteractionPromptsContainerViewInterface.h"
#include "InteractionPromptViewData.h"
#include "CoreBaseHudWidget.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "CoreInteractionPromptsContainerWidget.generated.h"

class UCoreInteractionPromptWidget;
class UDBDWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget, public IInteractionPromptsContainerViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDWrapBox* CenterContainerBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDWrapBox* ContainerBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreInteractionPromptWidget> InteractionPromptWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDisplayedPrompts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDisplayedCenterPrompts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin SlotMargin;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FInteractionPromptViewData> _promptViewDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FInteractionPromptViewData> _centerPromptViewDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreInteractionPromptWidget*> _promptWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreInteractionPromptWidget*> _centerPromptWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreInteractionPromptWidget*> _displayedPromptsMap;

public:
	UCoreInteractionPromptsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionPromptsContainerWidget) { return 0; }
