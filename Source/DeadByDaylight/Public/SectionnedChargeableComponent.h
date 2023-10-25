#pragma once

#include "CoreMinimal.h"
#include "ChargeableComponent.h"
#include "SectionnedChargeableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USectionnedChargeableComponent : public UChargeableComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	uint8 _sections;

public:
	UFUNCTION(BlueprintPure)
	float GetSectionChargeRemaining() const;

public:
	USectionnedChargeableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USectionnedChargeableComponent) { return 0; }
