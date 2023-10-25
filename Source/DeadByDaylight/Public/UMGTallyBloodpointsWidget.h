#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TallyItemChangedData.h"
#include "UMGTallyListElementWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "ScoreCategoryUIExtraData.h"
#include "EDBDScoreCategory.h"
#include "UMGTallyBloodpointsWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyBloodpointsWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility _itemBoxVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _labelTotalScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _labelItemTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _labelItemAddOnTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FLinearColor _labelItemTitleColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* BoxScoreCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<EDBDScoreCategory, FScoreCategoryUIExtraData> _scoreCategoryExtraDataMap;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTallyTotalBloodpoints(int32 totalValue);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTallyRewardWidget(const FString& rewardName, int32 existReward, int32 addReward);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTallyItemWidget(const FTallyItemChangedData& data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowTallyItemWidget(bool isShow);

public:
	UUMGTallyBloodpointsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyBloodpointsWidget) { return 0; }
