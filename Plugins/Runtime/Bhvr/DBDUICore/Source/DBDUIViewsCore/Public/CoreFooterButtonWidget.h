#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreButtonWidget.h"
#include "CoreFooterButtonWidget.generated.h"

class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class UCoreFooterButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* IconIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _hoveredColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _unhoveredColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _tooltipLabelText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetUnhoveredColor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHoveredColor();

public:
	UCoreFooterButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFooterButtonWidget) { return 0; }
