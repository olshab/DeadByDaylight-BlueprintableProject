#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitValidationReport.h"
#include "HitValidatorComponent.generated.h"

class UHitValidationConfigsComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHitValidatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UHitValidationConfigsComponent> _hitValidationConfigComponent;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DrawDebugHit(FHitValidationReport report);

public:
	UHitValidatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHitValidatorComponent) { return 0; }
