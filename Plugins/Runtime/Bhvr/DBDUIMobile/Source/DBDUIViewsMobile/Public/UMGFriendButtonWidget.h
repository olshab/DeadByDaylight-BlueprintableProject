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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* InteractableButtonStatePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* NonInteractableButtonStatePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* NonInteractableExplanationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* NonInteractableActionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* NonInteractableImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TMap<EFriendTypeButton, FSlateBrush> _nonInteractableImages;

public:
	UUMGFriendButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendButtonWidget) { return 0; }
