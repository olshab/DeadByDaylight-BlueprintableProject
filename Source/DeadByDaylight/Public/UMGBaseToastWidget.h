#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseToastWidget.generated.h"

class UImage;
class UTextBlock;
class UProgressBar;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBaseToastWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* ToastIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTextBlock* ToastText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UProgressBar* TimeToastProgression;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerToastInput(int32 inputCode);

private:
	UFUNCTION(BlueprintCallable)
	void OnTimerFinished();

public:
	UUMGBaseToastWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseToastWidget) { return 0; }
