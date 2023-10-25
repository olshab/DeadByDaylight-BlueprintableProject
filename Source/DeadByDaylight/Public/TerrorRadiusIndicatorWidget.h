#pragma once

#include "CoreMinimal.h"
#include "NoiseIndicatorWidget.h"
#include "TerrorRadiusIndicatorWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UTerrorRadiusIndicatorWidget : public UNoiseIndicatorWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _anchorY;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSoundDistancePercentage(float distancePercentage);

public:
	UTerrorRadiusIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusIndicatorWidget) { return 0; }
