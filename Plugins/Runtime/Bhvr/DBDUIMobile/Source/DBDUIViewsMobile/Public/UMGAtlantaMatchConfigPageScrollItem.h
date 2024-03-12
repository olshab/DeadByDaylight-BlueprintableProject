#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaMatchConfigPageScrollItem.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigPageScrollItem : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* ImagePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* DefaultPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* DefaultImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _unselectedOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _selectedOpacity;

public:
	UUMGAtlantaMatchConfigPageScrollItem();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigPageScrollItem) { return 0; }
