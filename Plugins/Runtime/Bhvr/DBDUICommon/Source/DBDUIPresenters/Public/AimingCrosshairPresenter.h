#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "AimingCrosshairPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UAimingCrosshairPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> AimingCrosshairWidgetClass;

public:
	UAimingCrosshairPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAimingCrosshairPresenter) { return 0; }
