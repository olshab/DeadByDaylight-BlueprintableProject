#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneFlightController.generated.h"

class UGameplayTagContainerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneFlightController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

public:
	UK31DroneFlightController();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneFlightController) { return 0; }
