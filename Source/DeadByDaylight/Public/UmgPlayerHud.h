#pragma once

#include "CoreMinimal.h"
#include "OnSettingsButtonClickedEvent.h"
#include "Blueprint/UserWidget.h"
#include "EInputInteractionType.h"
#include "OnHudPerkButtonClickedEvent.h"
#include "OnTutorialButtonClickedEvent.h"
#include "Styling/SlateBrush.h"
#include "UmgPlayerHud.generated.h"

class UCanvasPanel;
class UActionButton;
class UPerkActionButton;
class UAtlantaSkillCheckWidget;
class UUMGMapThemeWidget;
class UUMGAlertsWidget;
class UUMGStatusEffectsWidget;
class UUMGObjectivesWidget;
class UUMGEndGameCollapseWidget;
class UPerkHudWidget;
class UUMGChargeableInteractionWidget;
class UAtlantaPromptWidget;
class UUMGPlayersStatusWidget;
class UVerticalBox;
class UPerkSoundHudWidget;
class UMobileBaseUserWidget;
class UInteractionDefinition;
class ADBDPlayerController;
class UAtlantaHudDirectionalStick;
class ADBDPlayer;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUmgPlayerHud : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* GameStartingPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* InGamePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAtlantaSkillCheckWidget* SkillCheckWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGMapThemeWidget* MapThemeWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGAlertsWidget* AtlantaAlertsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGObjectivesWidget* AtlantaObjectivesWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPerkHudWidget* AtlantaPerksWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPerkActionButton* ActivablePerkActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGStatusEffectsWidget* AtlantaStatusEffectsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGChargeableInteractionWidget* AtlantaInteractionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAtlantaPromptWidget* AtlantaPromptWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAtlantaPromptWidget* AtlantaTutorialPromptWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGPlayersStatusWidget* AtlantaPlayersStatusWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UVerticalBox* AtlantaObjectivesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UActionButton* ActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* ActionButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPerkSoundHudWidget* PerkSoundHudWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UMobileBaseUserWidget* CenterInteractionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* CenterInteractionContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* CancelButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGEndGameCollapseWidget* EndGameCollapseWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHudPerkButtonClickedEvent OnPerkClickedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTutorialButtonClickedEvent OnTutorialLeaveClickedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTutorialButtonClickedEvent OnTutorialNextClickedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSettingsButtonClickedEvent OnSettingsClickedEvent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayerController* LocalController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAtlantaHudDirectionalStick* AtlantaDirectionalStick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AtlantaDirectionalStickContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _localPlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush _unlockedVirtualJoystickThumbImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush _lockedVirtualJoystickThumbImage;

protected:
	UFUNCTION(BlueprintCallable)
	void TutorialTallyNextSelected();

	UFUNCTION(BlueprintCallable)
	void TutorialTallyLeaveSelected();

	UFUNCTION(BlueprintCallable)
	void SetVirtualJoystickThumbImage(bool locked);

	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnPerkClicked(FName perkID, bool clickedOnPerksWidget);

	UFUNCTION(BlueprintCallable)
	void OnInteractionStarted(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void OnInteractionEnded(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInitializeHUD();

	UFUNCTION(BlueprintPure)
	bool IsInteractionAvailable(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	bool IsInteractionAllowed(UInteractionDefinition* interaction) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsInitialized() const;

	UFUNCTION(BlueprintPure)
	FSlateBrush GetInteractionIconByType(EInputInteractionType interactionInputType) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentOrAvailableInteractionOfType(EInputInteractionType interactionInputType) const;

public:
	UUmgPlayerHud();
};

FORCEINLINE uint32 GetTypeHash(const UUmgPlayerHud) { return 0; }
