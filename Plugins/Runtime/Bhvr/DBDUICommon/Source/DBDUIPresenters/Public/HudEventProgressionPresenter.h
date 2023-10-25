#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudEventProgression2023ViewData.h"
#include "HudEventProgressionPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHudEventProgressionPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CoreHudEventProgressionWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnEventProgressionDataInitialized(const FHudEventProgression2023ViewData& eventProgressionData);

	UFUNCTION(BlueprintCallable)
	void OnEventProgressChanged(const int32 value);

	UFUNCTION(BlueprintCallable)
	void OnEventIsChannelingHauntChanged(const bool value);

	UFUNCTION(BlueprintCallable)
	void OnEventInVoidZoneChanged(const bool value);

	UFUNCTION(BlueprintCallable)
	void OnEventHauntTargetChanged(const int32 value);

public:
	UHudEventProgressionPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudEventProgressionPresenter) { return 0; }
