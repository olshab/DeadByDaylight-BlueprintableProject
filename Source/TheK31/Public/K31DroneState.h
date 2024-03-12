#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EK31DroneStateID.h"
#include "K31DroneState.generated.h"

class UK31DroneStateController;

UCLASS(Blueprintable, Abstract)
class UK31DroneState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK31DroneStateID _id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UK31DroneStateController* _stateController;

public:
	UK31DroneState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneState) { return 0; }
