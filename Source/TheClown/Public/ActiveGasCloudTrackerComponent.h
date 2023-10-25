#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGasCloudTrackerComponent.generated.h"

class ABaseGasCloudProjectile;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UActiveGasCloudTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABaseGasCloudProjectile*> _activeToxinClouds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABaseGasCloudProjectile*> _activeAntidoteClouds;

public:
	UActiveGasCloudTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActiveGasCloudTrackerComponent) { return 0; }
