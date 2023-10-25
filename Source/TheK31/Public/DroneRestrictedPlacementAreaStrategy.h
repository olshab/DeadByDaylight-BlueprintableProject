#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "DroneRestrictedPlacementAreaStrategy.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class THEK31_API UDroneRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnDroneEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

	UFUNCTION(BlueprintCallable)
	void OnDroneAcquiredChanged(const bool acquired);

public:
	UDroneRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDroneRestrictedPlacementAreaStrategy) { return 0; }
