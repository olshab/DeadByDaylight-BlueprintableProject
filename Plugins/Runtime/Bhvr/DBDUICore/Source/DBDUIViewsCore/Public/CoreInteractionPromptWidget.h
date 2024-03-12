#pragma once

#include "CoreMinimal.h"
#include "InteractionPromptViewData.h"
#include "Blueprint/UserWidget.h"
#include "CoreInteractionPromptWidget.generated.h"

class UScaleBox;
class UDBDTextBlock;
class UDBDTextManager;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreInteractionPromptWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LargeTextScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UScaleBox* LargeTextScaleBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ActionTB;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDTextManager* _textManager;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FInteractionPromptViewData& data);

private:
	UFUNCTION(BlueprintCallable)
	void OnLargeTextSettingsChanged(bool isLargeTextEnabled);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearData();

public:
	UCoreInteractionPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionPromptWidget) { return 0; }
