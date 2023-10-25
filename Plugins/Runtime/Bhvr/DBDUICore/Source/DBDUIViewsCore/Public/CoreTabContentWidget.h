#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EEasingType.h"
#include "CoreTabContentWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreTabContentWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UWidget*> ContentWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _contentFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType _contentFadeInEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _contentFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType _contentFadeOutEasing;

public:
	UFUNCTION(BlueprintCallable)
	void StopFadeInTweening(float opacityValue);

	UFUNCTION(BlueprintCallable)
	void ResetFade();

	UFUNCTION(BlueprintCallable)
	void FadeOutContent();

	UFUNCTION(BlueprintCallable)
	void FadeInContent();

public:
	UCoreTabContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTabContentWidget) { return 0; }
