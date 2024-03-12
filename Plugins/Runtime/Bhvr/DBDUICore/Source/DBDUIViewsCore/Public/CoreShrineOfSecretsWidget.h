#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ShrineOfSecretsViewInterface.h"
#include "ShrineOfSecretsItemViewData.h"
#include "Templates/SubclassOf.h"
#include "CoreShrineOfSecretsWidget.generated.h"

class UHorizontalBox;
class UCorePreConstructableList;
class UCoreShrineOfSecretsItemWidget;
class UCoreInputSwitcherWidget;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreShrineOfSecretsWidget : public UCoreBaseUserWidget, public IShrineOfSecretsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreShrineOfSecretsItemWidget> _shrineOfSecretsItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TimerTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* ItemsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* InfoTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedItemsCount;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _shrineOfSecretsItems;

private:
	UFUNCTION(BlueprintCallable)
	void OnPurchaseButtonClicked(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData);

	UFUNCTION(BlueprintCallable)
	void OnBackButtonClicked();

public:
	UCoreShrineOfSecretsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreShrineOfSecretsWidget) { return 0; }
