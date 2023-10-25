#pragma once

#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingControlsContextWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingControlsContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AimAssist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HandSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InvertY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerCameraSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorCameraSensitivity;

public:
	UFUNCTION(BlueprintCallable)
	void HandleSurvivorCameraSensitivityChanged(float sliderValue);

	UFUNCTION(BlueprintCallable)
	void HandleKillerCameraSensitivityChanged(float sliderValue);

	UFUNCTION(BlueprintCallable)
	void HandleInvertYToggleClick(bool toggleValue);

	UFUNCTION(BlueprintCallable)
	void HandleInteractionButtonToggleClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleHandSideToggleClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleAimAssistToggleClick(bool toggleValue);

public:
	UUMGSettingControlsContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingControlsContextWidget) { return 0; }
