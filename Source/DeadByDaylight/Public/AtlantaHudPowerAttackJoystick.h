#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudPowerAttackJoystick.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudPowerAttackJoystick : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AnimationContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _availableAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _fadeOutAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _tutoStartAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _tutoLoopAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* Icon;

protected:
	UFUNCTION(BlueprintCallable)
	void OnFinishedTutorialAnimationIn();

	UFUNCTION(BlueprintCallable)
	void OnFinishedAvailableAnimation();

public:
	UAtlantaHudPowerAttackJoystick();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaHudPowerAttackJoystick) { return 0; }
