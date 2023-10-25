#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "TooltipScreenUMG.generated.h"

class UBaseTooltipWidget;

UCLASS(Blueprintable)
class UTooltipScreenUMG : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseTooltipWidget* _tooltipWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnCloseTriggered();

public:
	UTooltipScreenUMG();
};

FORCEINLINE uint32 GetTypeHash(const UTooltipScreenUMG) { return 0; }
