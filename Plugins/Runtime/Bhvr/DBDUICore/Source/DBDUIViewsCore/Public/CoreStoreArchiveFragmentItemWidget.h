#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "StoreArchiveFragmentViewData.h"
#include "CoreStoreArchiveFragmentItemWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UCoreOnHoverBorderWidget;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreArchiveFragmentItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* IconIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* AmountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreArchiveFragmentViewData _viewData;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreArchiveFragmentViewData& data);

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonUnhovered(UCoreButtonWidget* targetButton);

	UFUNCTION(BlueprintCallable)
	void OnButtonHovered(UCoreButtonWidget* targetButton);

public:
	UCoreStoreArchiveFragmentItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreArchiveFragmentItemWidget) { return 0; }
