#pragma once

#include "CoreMinimal.h"
#include "TestBuildFlagViewInterface.h"
#include "ETestBuildFlagPosition.h"
#include "CoreBaseHudWidget.h"
#include "CoreTestBuildFlagWidget.generated.h"

class UGridPanel;
class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTestBuildFlagWidget : public UCoreBaseHudWidget, public ITestBuildFlagViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* ContainerCanvasPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* TestFlagContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* TopLineTextfield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* BottomLineTextfield;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTestFlagPosition(ETestBuildFlagPosition testBuildFlagPosition);

public:
	UCoreTestBuildFlagWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTestBuildFlagWidget) { return 0; }
