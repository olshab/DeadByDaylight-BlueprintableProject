#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "SafeZoneManagerWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class USafeZoneManagerWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SafeZonePanel;

public:
	USafeZoneManagerWidget();
};

FORCEINLINE uint32 GetTypeHash(const USafeZoneManagerWidget) { return 0; }
