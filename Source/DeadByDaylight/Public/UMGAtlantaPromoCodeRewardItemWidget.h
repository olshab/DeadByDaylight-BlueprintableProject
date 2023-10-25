#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaPromoCodeRewardItemWidget.generated.h"

class UPanelWidget;
class UWidgetAnimation;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaPromoCodeRewardItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* CurrencyItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CurrencyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemRarityTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetAnimation* RevealAnimationSmall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* CustomizationItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CustomizationIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CustomizationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CustomizationRarityTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetAnimation* RevealAnimationLarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* CharacterPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CharacterPortrait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* TicketPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* TicketRarityTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* TicketIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TicketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TicketAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* OfferingPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* OfferingRarityTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* OfferingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* OfferingName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* OfferingAmount;

public:
	UUMGAtlantaPromoCodeRewardItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaPromoCodeRewardItemWidget) { return 0; }
