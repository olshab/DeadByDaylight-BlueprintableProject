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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* SurvivorSeasonHighRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* KillerSeasonHighRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* DisclaimerMessageRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* SurvivorRankRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* KillerRankRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCorePlayerRankWidget* SurvivorRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreCurrencyProgressionRewardWidget* SurvivorReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCorePlayerRankWidget* KillerRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreCurrencyProgressionRewardWidget* KillerReward;

public:
	USeasonEndRankRewardsPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndRankRewardsPopupWidget) { return 0; }
