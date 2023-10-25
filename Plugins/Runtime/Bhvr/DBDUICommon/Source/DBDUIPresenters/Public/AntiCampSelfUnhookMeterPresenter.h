#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "AntiCampSelfUnhookMeterPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UAntiCampSelfUnhookMeterPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> AntiCampSelfUnhookMeterWidget;

public:
	UAntiCampSelfUnhookMeterPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAntiCampSelfUnhookMeterPresenter) { return 0; }
