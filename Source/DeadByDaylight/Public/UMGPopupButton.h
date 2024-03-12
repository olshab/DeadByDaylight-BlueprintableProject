#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPopupButton.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UUMGPopupButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* VFXs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* Line;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* FXSmoke;

public:
	UFUNCTION(BlueprintCallable)
	void OnButtonReleased();

	UFUNCTION(BlueprintCallable)
	void OnButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnButtonClicked();

public:
	UUMGPopupButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPopupButton) { return 0; }
