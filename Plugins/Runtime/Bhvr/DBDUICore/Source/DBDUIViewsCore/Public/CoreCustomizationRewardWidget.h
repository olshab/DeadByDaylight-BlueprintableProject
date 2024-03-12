#pragma once

#include "CoreMinimal.h"
#include "CoreRewardWidget.h"
#include "Layout/Margin.h"
#include "ECurrencyType.h"
#include "Templates/SubclassOf.h"
#include "EItemRarity.h"
#include "CustomizationRewardViewData.h"
#include "CoreCustomizationRewardWidget.generated.h"

class UCorePriceTagWidget;
class UVerticalBox;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCustomizationRewardWidget : public UCoreRewardWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FMargin _priceTagPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCorePriceTagWidget> PriceTagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* RarityIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* EventPointsImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* CheckmarkImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* PriceTagsVerticalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCustomizationRewardViewData _data;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisibleCurrencies(TArray<ECurrencyType> visibleCurrencyTypes);

	UFUNCTION(BlueprintCallable)
	void SetRarity(EItemRarity rarity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetOwnedText(const FText& ownedText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMilestoneTrackerOwnedVisuals(bool isOwned, bool useAnimation);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCustomizationRewardData(const FCustomizationRewardViewData& customizationRewardViewData);

	UFUNCTION(BlueprintCallable)
	void DisplayEventPointIcon(bool show);

public:
	UCoreCustomizationRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCustomizationRewardWidget) { return 0; }
