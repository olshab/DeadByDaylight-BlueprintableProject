#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EAtlantaControlTypeSetting.h"
#include "UMGControlTypeWidget.generated.h"

class UUMGBaseButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGControlTypeWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGBaseButtonWidget* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* MoveTextHalfScreenCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* AimTextHalfScreenCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* MoveTextFullScreenCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* AimTextFullScreenCanvas;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetOptionChecked(bool isChecked);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsChecked();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializeDefaultLayout(EAtlantaControlTypeSetting controlType);

	UFUNCTION(BlueprintCallable)
	void HandleButtonClicked();

public:
	UUMGControlTypeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGControlTypeWidget) { return 0; }
