#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGMainMenuMonthlyPassButton.generated.h"

class UWidgetSwitcher;
class UButton;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMainMenuMonthlyPassButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* ButtonSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* ActiveButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* NonActiveButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnClickSound;

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonClick();

public:
	UUMGMainMenuMonthlyPassButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMainMenuMonthlyPassButton) { return 0; }
