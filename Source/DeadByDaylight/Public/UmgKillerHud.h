#pragma once

#include "CoreMinimal.h"
#include "UmgPlayableHud.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "EInventoryType.h"
#include "EInputInteractionType.h"
#include "UmgKillerHud.generated.h"

class UMobileBaseUserWidget;
class UPowerButton;
class ACollectable;
class UActionButton;
class UCanvasPanel;
class UUMGGhostfaceSpecific;
class ASlasherPlayer;
class UAtlantaHudPowerAttackJoystick;
class UInteractionDefinition;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUmgKillerHud : public UUmgPlayableHud
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPowerButton* PowerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* PowerButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPowerButton* SecondAbilityButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SecondAbilityButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UActionButton* AttackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* AttackButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UActionButton* DropSurvivorButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* DropSurvivorButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UMobileBaseUserWidget* CancelButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGGhostfaceSpecific* GhostfaceSpecific;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SecondAttackButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAtlantaHudPowerAttackJoystick* HudPowerAttackJoystick;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASlasherPlayer* Killer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCancelButtonPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAttackButtonPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAttackJoystickActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isPowerAttackJoystickActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush _powerAttackJoystickBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush _DefaultAttackJoystickIconPressedImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush _DefaultAttackJoystickIconUnpressedImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _powerAttackJoystickThumbPressedSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _powerAttackJoystickThumbUnpressedSize;

private:
	UFUNCTION(BlueprintCallable)
	void UpdatePowerButtonTier(int32 previousTier, int32 currentTier, bool isFirstTime);

	UFUNCTION(BlueprintPure)
	bool ShouldShowInteractionHighlight(EInputInteractionType interactionType) const;

protected:
	UFUNCTION(BlueprintCallable)
	void SetPowerIconFromItem(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable)
	void SetPowerAttackJoystickThumbImage(bool pressed);

	UFUNCTION(BlueprintCallable)
	void SetPowerAttackJoystickPosition(FVector2D& position);

public:
	UFUNCTION(BlueprintCallable)
	void RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed);

protected:
	UFUNCTION(BlueprintCallable)
	void OnSecondAbilityButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnSecondAbilityButtonLongPressed();

	UFUNCTION(BlueprintCallable)
	void OnPowerButtonReleased();

	UFUNCTION(BlueprintCallable)
	void OnPowerButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnCancelButtonReleased();

	UFUNCTION(BlueprintCallable)
	void OnCancelButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnAttackButtonReleased();

	UFUNCTION(BlueprintCallable)
	void OnAttackButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnActionButtonReleased();

	UFUNCTION(BlueprintCallable)
	void OnActionButtonPressed();

	UFUNCTION(BlueprintPure)
	bool IsPowerButtonAvailable() const;

	UFUNCTION(BlueprintPure)
	bool IsCancelPowerButtonAvailable() const;

	UFUNCTION(BlueprintPure)
	bool IsAttackButtonVisible() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializePowerAttackJoystickPosition();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleOnAttackButtonReleased();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleOnAttackButtonPressed();

private:
	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentPowerUseInteraction() const;

public:
	UUmgKillerHud();
};

FORCEINLINE uint32 GetTypeHash(const UUmgKillerHud) { return 0; }
