#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPlayerStatusIcon.generated.h"

class UImage;
class UTexture2D;
class UProgressBar;
class UUMGStalkingStatusEffectUI;
class UMaterialInstanceDynamic;
class UUMGLacerationStatusEffectUI;
class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayerStatusIcon : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UProgressBar* TimerBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* HealthBarContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* TimerBarContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTextBlock* PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* StatusIconBloodTop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* StatusIconBloodBottom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* StatusIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* ObsessionCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* BrokenIndicatorCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* AfflictionCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* AfflictionIntroCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SleepStatusCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SleepTimerCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* ReverseBearTrapCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* ReverseBearTrapArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SicknessCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* SicknessFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SpectateCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SelectedSpectatorCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* AgonyCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* HandsGrabbing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SicknessFillHighOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SicknessFillLowOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* StatusEffectContainerCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMaterialInstanceDynamic* SicknessFillMI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _hookedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _hookedBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _trappedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _trappedBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _deadTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _deadBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _escapedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _carriedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _injuredTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _injuredBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _crawlingTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _crawlingBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _sacrificedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _sacrificedBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _disconnectedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _deathBedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _defaultTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGStalkingStatusEffectUI> UMGStalkingStatusEffectUIClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGLacerationStatusEffectUI> UMGLacerationStatusEffectUIClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxNumberCharacterInName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGStalkingStatusEffectUI* _stalkingStatusEffectUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGLacerationStatusEffectUI* _lacerationStatusEffectUI;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSleepingTimer(const float progress);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetReverseTrapProgressionTimer(float seconds);

	UFUNCTION(BlueprintCallable)
	void OnPlayerStatusButtonClicked();

public:
	UUMGPlayerStatusIcon();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPlayerStatusIcon) { return 0; }
