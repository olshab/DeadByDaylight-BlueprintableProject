#pragma once

#include "CoreMinimal.h"
#include "ClaimedAllRitualsDelegate.h"
#include "DailyRitualsPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "ClaimedRitualDelegate.h"
#include "RemovedDailyRitualDelegate.h"
#include "DailyRitualsPopupWidget.generated.h"

class UDBDImage;
class UMaterialInstance;
class UDailyRitualsContainerWidget;
class UDBDRichTextBlock;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UDailyRitualsPopupWidget : public UCoreGenericPopupWidget, public IDailyRitualsPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRemovedDailyRitualDelegate _onRemovedDailyRitualDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FClaimedRitualDelegate _onClaimedRitualDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FClaimedAllRitualsDelegate _onClaimedAllRitualsDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* BaseBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UOverlay* DailyRitualsDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDailyRitualsContainerWidget* DailyRitualsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* FooterText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* DefaultBackgroundMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* AfterTrialBackgroundMaterialInstance;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisuals(bool isAfterTrial);

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualRemoveButtonClicked(const FString& dailyRitualKey);

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualClaimButtonClicked(const FString& dailyRitualKey);

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualClaimAllButtonClicked();

public:
	UDailyRitualsPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsPopupWidget) { return 0; }
