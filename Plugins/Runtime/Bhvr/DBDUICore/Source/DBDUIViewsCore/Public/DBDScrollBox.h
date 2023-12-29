#pragma once

#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "EShowScrollDisplayPrompt.h"
#include "EControlMode.h"
#include "DBDScrollBox.generated.h"

class UCoreKeyListenerInputPromptWidget;
class URetainerBox;

UCLASS(Blueprintable)
class DBDUIVIEWSCORE_API UDBDScrollBox : public UScrollBox
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	bool _useControllerScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	bool _shouldScrollOnMouseOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	float _scrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidget))
	UCoreKeyListenerInputPromptWidget* _displayPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FText _displayPromptText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	EShowScrollDisplayPrompt _showDisplayPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	bool IsUsingSmoothMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidget))
	URetainerBox* SmoothMaskRetainerBox;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateSmoothMask(float currentOffset);

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateDisplayPrompt();

public:
	UFUNCTION(BlueprintCallable)
	void SetDisplayPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

protected:
	UFUNCTION(BlueprintCallable)
	void OnControlModeChanged(EControlMode controlMode);

public:
	UFUNCTION(BlueprintPure)
	bool IsScrollBarNeeded() const;

	UFUNCTION(BlueprintCallable)
	bool IsMouseOver();

protected:
	UFUNCTION(BlueprintCallable)
	void HandleControllerInput(float analogValue);

public:
	UDBDScrollBox();
};

FORCEINLINE uint32 GetTypeHash(const UDBDScrollBox) { return 0; }
