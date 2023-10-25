#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UmgPlayableHud.h"
#include "UObject/NoExportTypes.h"
#include "UmgSurvivorHud.generated.h"

class UAtlantaHudLookBackJoystick;
class UCanvasPanel;
class UActionButton;
class UTexture2D;
class UWiggleWidget;
class ACamperPlayer;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUmgSurvivorHud : public UUmgPlayableHud
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UActionButton* CrouchButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CrouchButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWiggleWidget* StruggleWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* StruggleWidgetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWiggleWidget* WiggleWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* WiggleWidgetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* Survivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UActionButton* CancelButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CenterInteractionButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* LookBackButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAtlantaHudLookBackJoystick* LookBackJoystick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UActionButton* SkillCheckButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SkillCheckButtonCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* InsaneSkillCheckButtonCanvas;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush _unpressedLookBackJoystickThumbImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush _pressedLookBackJoystickThumbImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush _unpressedLookBackJoystickBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush _pressedLookBackJoystickBackgroundImage;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateCancelButton();

	UFUNCTION(BlueprintPure)
	bool ShouldUseContextualItemButton() const;

	UFUNCTION(BlueprintCallable)
	void SetSkillCheckButtonPosition(bool isInsane);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNonRestrictedControlsVisibility(bool visible);

private:
	UFUNCTION(BlueprintCallable)
	void SetLookBackJoystickPosition(FVector2D& position);

	UFUNCTION(BlueprintCallable)
	void SetLookBackJoystickImage(bool pressed);

public:
	UFUNCTION(BlueprintCallable)
	void RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed);

private:
	UFUNCTION(BlueprintCallable)
	void OnCancelButtonClicked();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializeLookBackJoystickPosition();

private:
	UFUNCTION(BlueprintPure)
	bool HasSecondaryActionAvailable() const;

	UFUNCTION(BlueprintCallable)
	FVector2D GetLookBackJoystickNormalizedOffset();

	UFUNCTION(BlueprintCallable)
	bool GetLookBackJoystickIsPressed();

	UFUNCTION(BlueprintPure)
	FText GetCenterItemText() const;

	UFUNCTION(BlueprintPure)
	UTexture2D* GetCenterItemIcon() const;

	UFUNCTION(BlueprintCallable)
	void CenterItemClicked(bool fromCancelRequest);

public:
	UUmgSurvivorHud();
};

FORCEINLINE uint32 GetTypeHash(const UUmgSurvivorHud) { return 0; }
