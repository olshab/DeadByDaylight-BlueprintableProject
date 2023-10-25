#pragma once

#include "CoreMinimal.h"
#include "DailyRitualViewData.h"
#include "CoreBaseUserWidget.h"
#include "RemovedDailyRitualDelegate.h"
#include "OnDailyRitualTileFadeOutCompletedDelegate.h"
#include "ClaimedRitualDelegate.h"
#include "OnDailyRitualTileFadeInCompletedDelegate.h"
#include "DailyRitualTileWidget.generated.h"

class UMaterialInterface;
class USizeBox;
class UDBDTextBlock;
class UCoreButtonWidget;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UDailyRitualTileWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FClaimedRitualDelegate _claimButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRemovedDailyRitualDelegate _removeButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnDailyRitualTileFadeInCompletedDelegate _onDailyRitualTileFadeInCompletedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnDailyRitualTileFadeOutCompletedDelegate _onDailyRitualTileFadeOutCompletedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USizeBox* ContainerSizeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* BackgroundSheen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TitleTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RewardTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* DescriptionTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* ProgressTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* ClaimButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* RemoveButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UMaterialInterface* DefaultBackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UMaterialInterface* NewBackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UMaterialInterface* CompletedBackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDailyRitualViewData _dailyRitualData;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFadeOutAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFadeInAnimation();

protected:
	UFUNCTION(BlueprintCallable)
	void OnRemoveButtonClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnClaimButtonClicked(UCoreButtonWidget* button);

public:
	UDailyRitualTileWidget();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualTileWidget) { return 0; }
