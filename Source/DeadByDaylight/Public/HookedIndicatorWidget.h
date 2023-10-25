#pragma once

#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "HookedIndicatorWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UHookedIndicatorWidget : public UBaseIndicatorWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HookedIndicatorDuration;

public:
	UHookedIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UHookedIndicatorWidget) { return 0; }
