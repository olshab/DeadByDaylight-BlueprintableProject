#pragma once

#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Geometry.h"
#include "EButtonWidgetVisibility.h"
#include "CoreBaseUserWidget.h"
#include "EAnalogCursorStickiness.h"
#include "UObject/SoftObjectPtr.h"
#include "CoreButtonWidget.generated.h"

class UMaterialInstance;
class UDBDTextBlock;
class UAkAudioEvent;
class UCoreButtonWidget;
class UCurveFloat;
class UDBDImage;
class UDBDButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnhoveredDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReleasedDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressedDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoveredDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedDelegate, UCoreButtonWidget*, buttonTarget);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* BackgroundIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* AdditionalIconIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHoveredDelegate OnHoveredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnUnhoveredDelegate OnUnhoveredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPressedDelegate OnPressedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnReleasedDelegate OnReleasedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnClickedDelegate OnClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HoveredSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* HoveredSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PressedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* PressedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClickedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ClickedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAnalogCursorStickiness AnalogCursorStickiness;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDButton* HitzoneButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* LabelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextJustify::Type> _alignment;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool SendAnalyticsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AnalyticsName;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisible(EButtonWidgetVisibility visible);

	UFUNCTION(BlueprintCallable)
	void SetRepeatable(bool isRepeatable, UCurveFloat* repetitionDelayCurve);

	UFUNCTION(BlueprintCallable)
	void SetPressable(bool isPressable);

	UFUNCTION(BlueprintCallable)
	void SetLabel(const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetHoverable(bool isHoverable);

	UFUNCTION(BlueprintCallable)
	void SetHoldable(bool isHoldable);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	void SetClickable(bool isClickable);

	UFUNCTION(BlueprintCallable)
	void SetChargeable(bool isChargeable, UCurveFloat* holdingAnimCurve, float duration);

	UFUNCTION(BlueprintCallable)
	void SetBackground(TSoftObjectPtr<UMaterialInstance> backgroundMaterial);

	UFUNCTION(BlueprintCallable)
	void SetAlignment(ETextJustify::Type newAlignment);

	UFUNCTION(BlueprintCallable)
	void SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnUnhovered();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReleased();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPressed();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLongPressed();

	UFUNCTION(BlueprintCallable)
	void OnInternalUnhovered();

	UFUNCTION(BlueprintCallable)
	void OnInternalReleased();

	UFUNCTION(BlueprintCallable)
	void OnInternalPressed();

	UFUNCTION(BlueprintCallable)
	void OnInternalLongPressed();

	UFUNCTION(BlueprintCallable)
	void OnInternalHovered();

	UFUNCTION(BlueprintCallable)
	void OnInternalClicked();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHovered();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnClicked();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnChargingTick(float progress);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnChargingComplete();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAlignmentChanged(ETextJustify::Type newAlignment);

public:
	UFUNCTION(BlueprintPure)
	bool IsPressed() const;

	UFUNCTION(BlueprintPure)
	bool IsEnabled() const;

	UFUNCTION(BlueprintPure)
	FGeometry GetHitzonePaintSpaceGeometry() const;

public:
	UCoreButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreButtonWidget) { return 0; }
