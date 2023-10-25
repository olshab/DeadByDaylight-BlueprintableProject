#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGMonthlyPassRewardItemWidget.generated.h"

class UTextBlock;
class UImage;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMonthlyPassRewardItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ItemAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CheckIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemRarityBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ItemPaintPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ActiveItemFrameColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor NonActiveItemFrameColor;

public:
	UUMGMonthlyPassRewardItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMonthlyPassRewardItemWidget) { return 0; }
