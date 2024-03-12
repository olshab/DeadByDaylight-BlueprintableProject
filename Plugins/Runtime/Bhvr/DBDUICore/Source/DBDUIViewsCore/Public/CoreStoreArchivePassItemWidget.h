#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "StoreArchivePassViewData.h"
#include "CoreStoreArchivePassItemWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UCoreOnHoverBorderWidget;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreArchivePassItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* IconIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SubTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreArchivePassViewData _viewData;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreArchivePassViewData& data);

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonUnhovered(UCoreButtonWidget* targetButton);

	UFUNCTION(BlueprintCallable)
	void OnButtonHovered(UCoreButtonWidget* targetButton);

public:
	UCoreStoreArchivePassItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreArchivePassItemWidget) { return 0; }
