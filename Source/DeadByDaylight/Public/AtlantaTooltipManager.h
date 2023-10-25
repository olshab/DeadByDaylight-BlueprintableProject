#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaTooltipManager.generated.h"

class UBaseTooltipWidget;
class UUMGCloseTooltipWidget;

UCLASS(Blueprintable)
class UAtlantaTooltipManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseTooltipWidget* _activeTooltip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGCloseTooltipWidget* _closeTooltipWidget;

private:
	UFUNCTION(BlueprintCallable)
	void TryCloseActiveTooltipWithWidget();

public:
	UFUNCTION(BlueprintCallable)
	bool TryCloseActiveTooltip();

public:
	UAtlantaTooltipManager();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTooltipManager) { return 0; }
