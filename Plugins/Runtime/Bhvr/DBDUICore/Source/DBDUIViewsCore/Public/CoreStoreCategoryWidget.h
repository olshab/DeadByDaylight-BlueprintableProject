#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "StoreCategoryViewData.h"
#include "ECustomizationCategory.h"
#include "CoreStoreCategoryWidget.generated.h"

class UCoreOnHoverBorderWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCategoryWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECustomizationCategory _category;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreCategoryViewData& data);

public:
	UCoreStoreCategoryWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCategoryWidget) { return 0; }
