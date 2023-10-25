#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStoreItemWidget.generated.h"

class UStoreItemViewData;
class UScaleBox;
class UDBDImage;
class UCoreOnHoverBorderWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScaleBox* LayoutScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreOnHoverBorderWidget* OnHoverBorder;

public:
	UFUNCTION(BlueprintCallable)
	void SetScale(float scale);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(UStoreItemViewData* data);

public:
	UCoreStoreItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreItemWidget) { return 0; }
