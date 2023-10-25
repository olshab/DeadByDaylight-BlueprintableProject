#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "KillerOpenGate.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerOpenGate : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _openGateMontage;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateSwitch() const;

public:
	UKillerOpenGate();
};

FORCEINLINE uint32 GetTypeHash(const UKillerOpenGate) { return 0; }
