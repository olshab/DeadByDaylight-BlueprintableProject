#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsDescription.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UUMGAtlantaBaseEventsTemplate;
class UAtlantaEventsTemplateDataAsset;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaEventsDescription : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAtlantaEventsTemplateDataAsset* widgetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ItemsRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TimePeriodTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TimePeriodStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TimePeriodEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* DeepLinkButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* TimePeriodCanvas;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGAtlantaBaseEventsTemplate* _eventTemplate;

private:
	UFUNCTION(BlueprintCallable)
	void HandleButtonClicked();

public:
	UUMGAtlantaEventsDescription();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsDescription) { return 0; }
