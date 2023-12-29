#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ScriptInterface.h"
#include "Templates/SubclassOf.h"
#include "HUDWidgetsFadeOutCompleted.h"
#include "CoreHudRootWidget.generated.h"

class UOverlay;
class UScaleBox;
class ICoreBaseViewInterface;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UCoreHudRootWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UOverlay* WidgetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UOverlay* OuterContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UOverlay* SpectateContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UScaleBox* ScaleHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnfocusedOpacity;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> EquippedItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> EquippedPowerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> ExternalEffectsWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> HudAlertWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> InteractionProgressWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> InteractionPromptsContainerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> ItemInteractionWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> OfferingInteractionWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> PerksContainerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> PingStatusWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> PlayerStatusesWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> ScreenIndicatorWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> StartSequenceWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> StatusEffectWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<TScriptInterface<ICoreBaseViewInterface>> _coreBaseViewInterfaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FHUDWidgetsFadeOutCompleted HUDWidgetsFadeOutCompletedDelegate;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetWidgetsVisibility(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FadeOutWidgets();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FadeInWidgets();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ApplyConstrainedAspectRatio(bool isConstrained, float aspectRatio);

public:
	UCoreHudRootWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudRootWidget) { return 0; }
