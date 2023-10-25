#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "CorePlayerLevelTooltipViewData.h"
#include "CorePlayerLevelTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerLevelTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* XPCurrentTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* XPTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* XPNextTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* NextXpTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* PlayerLevelTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* PrestigeTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* InfoTB;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTooltipData(const FCorePlayerLevelTooltipViewData& viewData);

public:
	UCorePlayerLevelTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerLevelTooltipWidget) { return 0; }
