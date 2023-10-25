#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EventItemsContentTypeUIData.h"
#include "UMGAtlEventItemWidget.generated.h"

class UImage;
class UTextBlock;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlEventItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SquareImageBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SquareRarityBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SquareIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PortraitImageBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PortraitRarityBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PortraitIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* NameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* QuantityText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* PortraitCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SquareCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventItemsContentTypeUIData> ContentTypeUIData;

public:
	UUMGAtlEventItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlEventItemWidget) { return 0; }
