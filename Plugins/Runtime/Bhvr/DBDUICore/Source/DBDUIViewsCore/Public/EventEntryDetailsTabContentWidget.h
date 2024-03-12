#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "SpecialEventDetailsTabContentData.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventEntryDetailsTabContentWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UEventEntryDetailsTabContentWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _scrollLabelText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FSpecialEventDetailsTabContentData& contentData, const FEventEntryPopupSkinUIData& skinData);

public:
	UEventEntryDetailsTabContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryDetailsTabContentWidget) { return 0; }
