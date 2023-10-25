#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "BaseTooltipWidget.generated.h"

class UTextBlock;
class UButton;
class UCanvasPanel;
class UUMGHtmlRichText;
class UAkAudioEvent;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UBaseTooltipWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TitleLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* TooltipContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* DescriptionLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* CloseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* TooltipOpeningSound;

protected:
	UFUNCTION(BlueprintCallable)
	void OnQuitButtonClicked();

public:
	UBaseTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UBaseTooltipWidget) { return 0; }
