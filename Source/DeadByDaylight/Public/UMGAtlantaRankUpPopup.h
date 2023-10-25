#pragma once

#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaRankUpPopup.generated.h"

class UCanvasPanel;
class UUMGTallyRankBanner;
class UHorizontalBox;
class UUMGRewardWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaRankUpPopup : public UUMGGenericPopup
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankBanner* RankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* RewardsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* RewardsSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGRewardWidget> RewardWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void PlayRankUpBannerAnimation();

public:
	UUMGAtlantaRankUpPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaRankUpPopup) { return 0; }
