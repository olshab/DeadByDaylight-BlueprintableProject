#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStreamVideoWidget.generated.h"

class UUMGBaseButtonWidget;
class UImage;
class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGStreamVideoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* VideoImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* TapButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* SkipButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timerShowSkipButton;

protected:
	UFUNCTION(BlueprintCallable)
	void OnTapButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnSkipButtonClicked();

public:
	UUMGStreamVideoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStreamVideoWidget) { return 0; }
