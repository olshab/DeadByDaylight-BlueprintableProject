#pragma once

#include "CoreMinimal.h"
#include "EquippedItemViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreEquippedItemWidget.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEquippedItemWidget : public UCoreBaseHudWidget, public IEquippedItemViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ItemDisappearSfx;

public:
	UCoreEquippedItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreEquippedItemWidget) { return 0; }
