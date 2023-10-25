#pragma once

#include "CoreMinimal.h"
#include "AddonViewData.h"
#include "ExternalEffectsViewInterface.h"
#include "PerkViewData.h"
#include "UObject/ScriptInterface.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CoreBaseHudWidget.h"
#include "Engine/EngineTypes.h"
#include "CoreExternalEffectsWidget.generated.h"

class UCorePerkWidget;
class UCoreAddonWidget;
class UGridPanel;
class USpacer;
class IPerkViewInterface;
class IAddonViewInterface;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreExternalEffectsWidget : public UCoreBaseHudWidget, public IExternalEffectsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D GridSlotSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AddonScaleRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpacingBetweenRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpacingPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpacingAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpacingBetweenPerksAndAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCorePerkWidget> PerkWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreAddonWidget> AddonWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* Container;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FPerkViewData> _perkData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCorePerkWidget*> _perkWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCorePerkWidget*> _perkPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, TScriptInterface<IPerkViewInterface>> _perkViewInterfaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FAddonViewData> _addonData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreAddonWidget*> _addonWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreAddonWidget*> _addonPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, TScriptInterface<IAddonViewInterface>> _addonViewInterfaces;

	UPROPERTY(EditAnywhere, Transient)
	TMap<FName, FTimerHandle> _timerHandleMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, USpacer*> _spacerWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USpacer*> _spacerPool;

public:
	UFUNCTION(BlueprintCallable)
	void HideExternalPerk_Implementation(const FName itemId);

	UFUNCTION(BlueprintCallable)
	void HideExternalAddon_Implementation(const FName itemId);

public:
	UCoreExternalEffectsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreExternalEffectsWidget) { return 0; }
