#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreSelectableButtonWidget.h"
#include "OnMoveToCharactersCustomizationPageButtonClickedDelegate.h"
#include "CoreStoreFeaturedCustomizationItemWidget.generated.h"

class UCorePriceTagWidget;
class UStoreCustomizationItemViewData;
class UUITweenInstance;
class UHorizontalBox;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedCustomizationItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnMoveToCharactersCustomizationPageButtonClickedDelegate OnMoveToCharactersCustomizationPageButtonClickedDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCorePriceTagWidget> _priceTagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedPriceTagCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* PriceTagsContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _priceTagsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUITweenInstance* _sizeTween;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUITweenInstance* _positionTween;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateSize(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void UpdatePosition(UUITweenInstance* tween);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCustomizationData(UStoreCustomizationItemViewData* customizationItemViewData);

protected:
	UFUNCTION(BlueprintCallable)
	UCorePriceTagWidget* CreatePriceTagWidget();

	UFUNCTION(BlueprintCallable)
	void ClearPriceTagWidgets();

public:
	UCoreStoreFeaturedCustomizationItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCustomizationItemWidget) { return 0; }
