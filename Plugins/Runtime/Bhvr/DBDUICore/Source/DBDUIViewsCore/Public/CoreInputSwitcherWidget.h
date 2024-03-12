#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EInputSwitcherDisplayRule.h"
#include "Framework/Text/TextLayout.h"
#include "CoreBaseUserWidget.h"
#include "InputSwitcherTriggeredDelegate.h"
#include "EUIActionType.h"
#include "UObject/SoftObjectPtr.h"
#include "CoreInputSwitcherWidget.generated.h"

class UMaterialInstance;
class UAkAudioEvent;
class UCurveFloat;
class UCoreButtonWidget;
class UCoreKeyListenerInputPromptWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputSwitcherDisplayRule ButtonDisplayRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputSwitcherDisplayRule InputPromptDisplayRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ButtonPressedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ButtonPressedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ButtonHoveredSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ButtonHoveredSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InputTriggeredSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* InputTriggeredSfx;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* InputPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldRegisterForInputInConstruct;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextJustify::Type> _alignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isEnabled;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FInputSwitcherTriggeredDelegate _onInputSwitcherTriggeredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool SendAnalyticsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AnalyticsName;

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
	void SetBackground(TSoftObjectPtr<UMaterialInstance> backgroundMaterial);

	UFUNCTION(BlueprintCallable)
	void SetAlignment(ETextJustify::Type newAlignment);

	UFUNCTION(BlueprintCallable)
	void SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture);

private:
	UFUNCTION(BlueprintCallable)
	void OnInputPromptTriggered();

	UFUNCTION(BlueprintCallable)
	void OnButtonClicked(UCoreButtonWidget* target);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnAlignmentChanged(ETextJustify::Type newAlignment);

public:
	UFUNCTION(BlueprintPure)
	UCoreKeyListenerInputPromptWidget* GetInputPrompt() const;

	UFUNCTION(BlueprintPure)
	UCoreButtonWidget* GetButton() const;

public:
	UCoreInputSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInputSwitcherWidget) { return 0; }
