#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "RankTooltipWidget.generated.h"

class UUMGPlayerRankInfo;
class UTextBlock;
class UGridPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class URankTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RankInfoLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ResetInfoLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* RankInfoSlotsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPlayerRankInfo* SurvivorRankInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPlayerRankInfo* KillerRankInfoWidget;

public:
	URankTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const URankTooltipWidget) { return 0; }
