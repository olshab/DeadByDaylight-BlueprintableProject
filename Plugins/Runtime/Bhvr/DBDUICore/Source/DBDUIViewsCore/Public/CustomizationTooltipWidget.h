#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "Templates/SubclassOf.h"
#include "CustomizationTooltipViewData.h"
#include "CustomizationTooltipWidget.generated.h"

class UCoreCustomizationRewardWidget;
class UUniformGridPanel;
class UDBDTextBlock;
class UDBDRichTextBlock;
class UCorePreConstructableList;
class UCustomizationRewardOutfitPartsViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCustomizationTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCustomizationRewardWidget> _outfitPartWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedOutfitPartsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ToolTipStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* OutfitPartsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* OutfitPartsLabel;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _outfitPartsList;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTooltipData(const FCustomizationTooltipViewData& customizationViewData);

protected:
	UFUNCTION(BlueprintCallable)
	void SetStatusText(const bool isEquipped, const bool isOwned, const bool isLocked);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetOutfitParts(const UCustomizationRewardOutfitPartsViewData* outfitPartsViewData);

public:
	UFUNCTION(BlueprintCallable)
	void AppendToDescriptionText(const FText& appendedText);

public:
	UCustomizationTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationTooltipWidget) { return 0; }
