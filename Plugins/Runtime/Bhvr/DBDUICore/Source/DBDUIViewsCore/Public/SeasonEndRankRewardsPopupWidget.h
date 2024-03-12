#pragma once

#include "CoreMinimal.h"
#include "SeasonEndRankRewardsPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "SeasonEndRankRewardsPopupWidget.generated.h"

class UCorePlayerRankWidget;
class UCoreCurrencyProgressionRewardWidget;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API USeasonEndRankRewardsPopupWidget : public UCoreGenericPopupWidget, public ISeasonEndRankRewardsPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* SurvivorSeasonHighRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* KillerSeasonHighRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DisclaimerMessageRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* SurvivorRankRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* KillerRankRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerRankWidget* SurvivorRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreCurrencyProgressionRewardWidget* SurvivorReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerRankWidget* KillerRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreCurrencyProgressionRewardWidget* KillerReward;

public:
	USeasonEndRankRewardsPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndRankRewardsPopupWidget) { return 0; }
