#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "OnKeyListenerInputPromptTriggeredDelegate.h"
#include "CoreBaseUserWidget.h"
#include "EUIActionType.h"
#include "InputCoreTypes.h"
#include "CoreKeyListenerInputPromptWidget.generated.h"

class UDBDTextBlock;
class UAkAudioEvent;
class UCoreInputPromptWidget;
class UCurveFloat;
class UDBDImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClickedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ClickedSfx;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* LabelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* AdditionalIconIMG;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnKeyListenerInputPromptTriggeredDelegate _onKeyListenerInputPromptTriggeredDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIAction(const EUIActionType actionType);

	UFUNCTION(BlueprintCallable)
	void SetRepeatable(bool isRepeatable, UCurveFloat* repetitionDelayCurve);

	UFUNCTION(BlueprintCallable)
	void SetLabel(const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetKeyOverride(const FKey keyOverride);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	void SetChargeable(bool isChargeable, UCurveFloat* holdingAnimCurve, float duration);

	UFUNCTION(BlueprintCallable)
	void SetBetaFeatureOverlayVisible(bool isVisible);

	UFUNCTION(BlueprintCallable)
	void SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnChargingTick(float progress);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnChargingComplete();

public:
	UFUNCTION(BlueprintPure)
	bool IsEnabled() const;

public:
	UCoreKeyListenerInputPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreKeyListenerInputPromptWidget) { return 0; }
