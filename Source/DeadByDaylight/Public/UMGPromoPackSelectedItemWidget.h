#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPromoPackSelectedItemWidget.generated.h"

class UNamedSlot;
class UImage;
class UUMGHtmlRichText;
class UUMGPromoPackItemWidget;
class UTextBlock;
class UScrollBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPromoPackSelectedItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemTypeIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ItemSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UNamedSlot* SelectedItemSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UUMGPromoPackItemWidget* SelectedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* ScrollBox;

public:
	UUMGPromoPackSelectedItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackSelectedItemWidget) { return 0; }
