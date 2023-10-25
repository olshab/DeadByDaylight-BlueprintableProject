#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGRewardSlotTutorialPopupRewardWidget.generated.h"

class UTextBlock;
class UImage;
class UWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGRewardSlotTutorialPopupRewardWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RewardText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* RewardPicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidget* UnlockedPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidget* MissedRewardPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RewardUnlockedTextOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RewardToBeMissedTextOpacity;

public:
	UUMGRewardSlotTutorialPopupRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRewardSlotTutorialPopupRewardWidget) { return 0; }
