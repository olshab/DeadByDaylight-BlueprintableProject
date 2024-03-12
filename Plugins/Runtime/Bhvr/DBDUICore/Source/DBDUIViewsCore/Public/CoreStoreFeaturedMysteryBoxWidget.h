#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "StoreMysteryBoxViewData.h"
#include "MysteryBoxClaimClickedDelegate.h"
#include "CoreStoreFeaturedMysteryBoxWidget.generated.h"

class UCoreButtonWidget;
class UDBDImage;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedMysteryBoxWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FMysteryBoxClaimClickedDelegate OnMysteryBoxClaimClicked;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* ClaimButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RewardAmountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* LastRewardText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* LastRewardAmountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* LastRewardIconImage;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStoreMysteryBoxViewData _cachedViewData;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreMysteryBoxViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PresentClaimResult(bool succeeded, const FStoreMysteryBoxViewData& viewData);

private:
	UFUNCTION(BlueprintCallable)
	void OnClaimButtonClicked(UCoreButtonWidget* buttonTarget);

public:
	UFUNCTION(BlueprintPure)
	FStoreMysteryBoxViewData GetMysteryBoxViewData() const;

public:
	UCoreStoreFeaturedMysteryBoxWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedMysteryBoxWidget) { return 0; }
