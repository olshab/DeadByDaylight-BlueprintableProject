#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "MobileBaseUserWidget.h"
#include "UMGCustomizationTooltipHeaderWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationTooltipHeaderWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CollectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CategoryAndRarityText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetOutfitComposition(const bool isUnbreakable, const TArray<ECustomizationCategory>& composition);

public:
	UUMGCustomizationTooltipHeaderWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationTooltipHeaderWidget) { return 0; }
