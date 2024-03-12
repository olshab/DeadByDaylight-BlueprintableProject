#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "Styling/SlateBrush.h"
#include "EFriendTypeButton.h"
#include "UMGFriendButtonWidget.generated.h"

class UCanvasPanel;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* InteractableButtonStatePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* NonInteractableButtonStatePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* NonInteractableExplanationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* NonInteractableActionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* NonInteractableImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TMap<EFriendTypeButton, FSlateBrush> _nonInteractableImages;

public:
	UUMGFriendButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendButtonWidget) { return 0; }
