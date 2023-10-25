#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGLandingPageButtonWidget.generated.h"

class UCanvasPanel;
class URichTextBlock;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGLandingPageButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* BigTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SmallTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TagText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URichTextBlock* BannerTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* BannerImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* TitleColorBg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* BorderColor;

public:
	UUMGLandingPageButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLandingPageButtonWidget) { return 0; }
