#pragma once

#include "CoreMinimal.h"
#include "CoreTabContentWidget.h"
#include "Templates/SubclassOf.h"
#include "ArchiveTomeMenuTabSelectedDelegate.h"
#include "ArchiveTomeViewInterface.h"
#include "ArchiveTomeEditorSwitchCompleteDelegate.h"
#include "CoreArchiveTomeWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreArchiveQuestEditorWidget;
class UWidgetSwitcher;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveTomeWidget : public UCoreTabContentWidget, public IArchiveTomeViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveQuestEditorWidget> _archiveQuestEditorWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreArchiveQuestEditorWidget* _archiveQuestEditorWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* ArchiveTomeSideNav;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UWidgetSwitcher* EditorSwitcher;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveTomeMenuTabSelectedDelegate MenuTabSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveTomeEditorSwitchCompleteDelegate _editorSwitchCompleteDelegate;

protected:
	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreArchiveTomeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveTomeWidget) { return 0; }
