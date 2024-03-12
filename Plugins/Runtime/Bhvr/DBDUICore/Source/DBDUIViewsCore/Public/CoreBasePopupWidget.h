#pragma once

#include "CoreMinimal.h"
#include "BasePopupViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreBasePopupWidget.generated.h"

class UBasePopupViewData;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreBasePopupWidget : public UCoreBaseUserWidget, public IBasePopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* MessageText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Show(UBasePopupViewData* data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Hide();

public:
	UCoreBasePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBasePopupWidget) { return 0; }
