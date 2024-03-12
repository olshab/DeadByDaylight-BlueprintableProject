#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAlertsWidget.generated.h"

class UUMGGameplayAlertWidget;
class UUMGScoreAlertWidget;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAlertsWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGScoreAlertWidget> AtlantaScoreAlertComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGGameplayAlertWidget> AtlantaStatusEffectAlertComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* CanvasPanelAlerts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IdleTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _scoreAlertClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _statusEffectAlertClass;

public:
	UUMGAlertsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAlertsWidget) { return 0; }
