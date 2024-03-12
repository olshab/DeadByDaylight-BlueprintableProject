#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "SpecialPackClickedDelegate.h"
#include "CoreStoreSpecialPackItemWidget.generated.h"

class UStoreChapterPackViewData;
class UCoreTimerFlagWidget;
class UCoreKeyListenerButtonWidget;
class UDBDTextBlock;
class UCoreOnHoverBorderWidget;
class UStoreSpecialPackViewData;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreSpecialPackItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialPackClickedDelegate OnItemClicked;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* OwnedCountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreTimerFlagWidget* TimerFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerButtonWidget* SeeMoreButton;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString _packId;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSpecialPackData(UStoreSpecialPackViewData* data);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNewIcon(const bool isNew);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChapterPackData(UStoreChapterPackViewData* data);

private:
	UFUNCTION(BlueprintCallable)
	void OnPackClicked(UCoreButtonWidget* widget);

public:
	UCoreStoreSpecialPackItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPackItemWidget) { return 0; }
