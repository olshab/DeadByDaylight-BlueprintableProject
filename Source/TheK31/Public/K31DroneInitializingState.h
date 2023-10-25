#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "K31DroneState.h"
#include "K31DroneInitializingState.generated.h"

class UTimerObject;

UCLASS(Blueprintable)
class THEK31_API UK31DroneInitializingState : public UK31DroneState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _initializingDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _initializingTimer;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneInitializingState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneInitializingState) { return 0; }
