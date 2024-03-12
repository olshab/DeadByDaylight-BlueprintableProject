#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGBaseTabButtonWidget.generated.h"

class URichTextBlock;
class UCanvasPanel;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseTabButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	URichTextBlock* TabText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* NotificationCountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* NotificationPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* TabButtonSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 TabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TitleOfTab;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString _tabTextParameter;

public:
	UUMGBaseTabButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseTabButtonWidget) { return 0; }
