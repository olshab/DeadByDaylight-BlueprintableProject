#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSelectionSlotWidget.generated.h"

class UTextBlock;
class UPerkActionButton;
class UUMGHtmlRichText;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UPerkSelectionSlotWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PerkName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextChoose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPerkActionButton* PerkActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SelectedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PictureBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PicturePerkBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PictureHighlightFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PictureTopRightBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PictureTopRightFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HighOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LowOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PerkBackgroundLowOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DescriptionBackgroundLowOpacity;

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonClicked();

public:
	UPerkSelectionSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSelectionSlotWidget) { return 0; }
