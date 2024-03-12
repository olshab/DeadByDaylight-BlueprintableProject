#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "StoreArchivePassViewData.h"
#include "CoreArchivePassBannerWidget.generated.h"

class UDBDTextBlock;
class UCoreTimerFlagWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchivePassBannerWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SubTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreTimerFlagWidget* TimerFlag;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreArchivePassViewData& data);

public:
	UCoreArchivePassBannerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchivePassBannerWidget) { return 0; }
