#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "InputCoreTypes.h"
#include "CoreInputPromptWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _unfoundInputKeyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _betaFeatureText;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FKey _inputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isEnabled;

public:
	UFUNCTION(BlueprintCallable)
	void SetInputKey(const FKey& inputKey);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBetaFeatureOverlayVisible(bool isVisible);

protected:
	UFUNCTION(BlueprintCallable)
	void PromptNotFound();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

public:
	UFUNCTION(BlueprintPure)
	bool IsEnabled();

protected:
	UFUNCTION(BlueprintPure)
	FText GetInputShortDisplayName() const;

public:
	UFUNCTION(BlueprintPure)
	FKey GetInputKey();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayPrompt();

public:
	UCoreInputPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInputPromptWidget) { return 0; }
