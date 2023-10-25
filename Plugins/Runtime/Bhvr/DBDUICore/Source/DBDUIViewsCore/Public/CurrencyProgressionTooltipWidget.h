#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "Templates/SubclassOf.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyProgressionTooltipWidget.generated.h"

class UDBDImage;
class UVerticalBox;
class UCoreCurrencyExpirationLabelWidget;
class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCurrencyProgressionTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxExpirationLabels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCurrencyExpirationLabelWidget> CoreCurrencyExpirationLabelWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* CurrencyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* CurrencyTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDRichTextBlock* CurrencyDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* TitleBgIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* TitleDecorationIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UVerticalBox* EventContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* EventNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDRichTextBlock* EventDescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* EventTimerTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UVerticalBox* ExpirationPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UVerticalBox* ExpirationLabelContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* ExpirationTitleTB;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreCurrencyExpirationLabelWidget*> _currencyExpirationWidgetPool;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FCurrencyProgressionTooltipViewData& currencyViewData);

public:
	UCurrencyProgressionTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyProgressionTooltipWidget) { return 0; }
