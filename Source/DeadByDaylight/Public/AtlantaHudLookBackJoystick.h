#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudLookBackJoystick.generated.h"

class UGridPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudLookBackJoystick : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* TutorialAnimContainer;

public:
	UAtlantaHudLookBackJoystick();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaHudLookBackJoystick) { return 0; }
