#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGSubscriptionPackButtonWidget.generated.h"

class UTextBlock;
class UCanvasPanel;
class USubscriptionRewardDataAsset;
class UButton;
class UImage;
class UUniformGridPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSubscriptionPackButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USubscriptionRewardDataAsset* WidgetPerRewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ButtonPressedVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* PricePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* TitleIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* RenewalDatePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RenewalDateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* PurchaseRewardsGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* DailyRewardsGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* InfoButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ActiveBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* NonActiveBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ActiveTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor NonActiveTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor TextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ActiveSmokeBackgroundTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor NonActiveSmokeBackgroundTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PurchaseRewardsSmokeBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* DailyRewardsSmokeBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ActiveTitleBackgroundTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor NonActiveTitleBackgroundTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* TitleBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ActiveFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* NonActiveFrame;

private:
	UFUNCTION(BlueprintCallable)
	void OnInfoButtonClicked();

public:
	UUMGSubscriptionPackButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSubscriptionPackButtonWidget) { return 0; }
