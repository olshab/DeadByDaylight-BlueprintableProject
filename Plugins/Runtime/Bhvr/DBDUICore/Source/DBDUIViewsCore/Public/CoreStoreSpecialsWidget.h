#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StoreSpecialsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "SpecialItemClickedDelegate.h"
#include "ArchivePassBannerClickedDelegate.h"
#include "CoreStoreSpecialsWidget.generated.h"

class UCorePreConstructableList;
class UCoreAuricCellsSpecialOfferWidget;
class UHorizontalBox;
class UCoreStoreSpecialsItemWidget;
class UDBDTextBlock;
class UOverlay;
class UCoreArchivePassBannerWidget;
class UDBDWrapBox;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreSpecialsWidget : public UCoreBaseUserWidget, public IStoreSpecialsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreSpecialsItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _highlightPreConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _highlightItemsScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _regularPreConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _regularItemsScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreAuricCellsSpecialOfferWidget* AuricCellSpecialOffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* NoAuricCellsTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* NoAuricCellsTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* HighlightSectionTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UOverlay* ArchivePassBannerContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchivePassBannerWidget* ArchivePassBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* HighlightSectionContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RegularSectionTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDWrapBox* RegularSectionContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialItemClickedDelegate SpecialItemClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchivePassBannerClickedDelegate ArchivePassBannerClickedDelegate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _highlightItemList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _regularItemList;

private:
	UFUNCTION(BlueprintCallable)
	void OnSpecialItemClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnArchivePassBannerClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreSpecialsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialsWidget) { return 0; }
