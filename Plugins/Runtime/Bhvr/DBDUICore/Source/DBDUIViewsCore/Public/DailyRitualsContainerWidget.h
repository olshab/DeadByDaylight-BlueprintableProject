#pragma once

#include "CoreMinimal.h"
#include "OnOutOfDailyRitualsDelegate.h"
#include "DailyRitualViewData.h"
#include "CoreBaseUserWidget.h"
#include "ClaimedRitualDelegate.h"
#include "RemovedDailyRitualDelegate.h"
#include "Templates/SubclassOf.h"
#include "DailyRitualsContainerWidget.generated.h"

class UDBDTextBlock;
class UDailyRitualTileWidget;
class UUITweenInstance;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UDailyRitualsContainerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FClaimedRitualDelegate _claimButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRemovedDailyRitualDelegate _removeButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnOutOfDailyRitualsDelegate _onOutOfDailyRitualsDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UDailyRitualTileWidget> DailyRitualTileWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* NoRitualWarningText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TilePadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInNoRitualsWarningTextDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AlignmentAnimationDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUITweenInstance* _alignAssignedRitualsTween;

public:
	UFUNCTION(BlueprintCallable)
	void StartAnim();

	UFUNCTION(BlueprintCallable)
	void SetData(TArray<FDailyRitualViewData> dailyRitualsData, const bool isAfterTrial);

private:
	UFUNCTION(BlueprintCallable)
	void OnRecentlyAssignedDailyRitualFadeInComplete(UDailyRitualTileWidget* dailyRitualTile);

	UFUNCTION(BlueprintCallable)
	void OnDelayUntilFadeInSequenceComplete(UUITweenInstance* delayUntilFadeInSequenceTween);

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualTileFadeOutComplete(UDailyRitualTileWidget* dailyRitualTile);

protected:
	UFUNCTION(BlueprintCallable)
	void OnDailyRitualRemoveButtonClicked(const FString& dailyRitualKey);

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualClaimButtonClicked(const FString& dailyRitualKey);

public:
	UDailyRitualsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsContainerWidget) { return 0; }
