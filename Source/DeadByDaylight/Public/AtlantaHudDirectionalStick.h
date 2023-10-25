#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudDirectionalStick.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudDirectionalStick : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* JoystickAnimationPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ContainerToRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ArrowsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* JoystickLockImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* JoystickOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AutoRunContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isMovementLockAnimationActive;

public:
	UFUNCTION(BlueprintCallable)
	void SetMovementLockAnimationStatus(bool value);

public:
	UAtlantaHudDirectionalStick();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaHudDirectionalStick) { return 0; }
