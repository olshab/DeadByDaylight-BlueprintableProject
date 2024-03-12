#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStorePresetWidget.generated.h"

class UCoreOnHoverBorderWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStorePresetWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const int32 presetId);

public:
	UCoreStorePresetWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStorePresetWidget) { return 0; }
