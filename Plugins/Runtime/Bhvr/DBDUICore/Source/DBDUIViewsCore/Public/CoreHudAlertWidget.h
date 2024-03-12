#pragma once

#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "HudAlertViewInterface.h"
#include "EEasingType.h"
#include "Templates/SubclassOf.h"
#include "CoreHudAlertWidget.generated.h"

class UCoreBaseUserWidget;
class UCoreHudScoreAlertItem;
class UCoreHudStatusEffectAlertItem;
class UGridPanel;
class UUITweenInstance;

UCLASS(Blueprintable, EditInlineNew)
class UCoreHudAlertWidget : public UCoreBaseHudWidget, public IHudAlertViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDisplayedItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondaryAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FullAlertDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PendingAlertDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType AnimationEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimationTranslationY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreHudScoreAlertItem> CoreHudScoreAlertItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreHudStatusEffectAlertItem> CoreHudStatusEffectAlertItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* AlertContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreBaseUserWidget*> _alerts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreBaseUserWidget*> _pendingAlerts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreHudScoreAlertItem*> _scoreAlertPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreHudStatusEffectAlertItem*> _statusEffectAlertPool;

private:
	UFUNCTION(BlueprintCallable)
	void PopAlert();

	UFUNCTION(BlueprintCallable)
	void OnPopAlertComplete(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void OnClearAlertsComplete(UUITweenInstance* tween);

protected:
	UFUNCTION(BlueprintPure)
	float GetRemainingTime() const;

	UFUNCTION(BlueprintPure)
	TArray<UCoreBaseUserWidget*> GetPendingAlerts() const;

	UFUNCTION(BlueprintPure)
	TArray<UCoreBaseUserWidget*> GetAlerts() const;

private:
	UFUNCTION(BlueprintCallable)
	void ClearAlerts();

public:
	UCoreHudAlertWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudAlertWidget) { return 0; }
