#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "CorePresetWidgetContainer.generated.h"

class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePresetWidgetContainer : public UCoreButtonSelector
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedPresetDelegate, int32, selectedPreset);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSelectedPresetDelegate OnSelectedPresetDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSelectableButtonWidget* Preset_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSelectableButtonWidget* Preset_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSelectableButtonWidget* Preset_3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSelectableButtonWidget* Preset_4;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreSelectableButtonWidget*> _presetWidgets;

private:
	UFUNCTION(BlueprintCallable)
	void SetSelectedPreset(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintCallable)
	void SetPreset(const TArray<int32>& presetData, const int32 selectedPreset);

public:
	UCorePresetWidgetContainer();
};

FORCEINLINE uint32 GetTypeHash(const UCorePresetWidgetContainer) { return 0; }
