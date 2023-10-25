#pragma once

#include "CoreMinimal.h"
#include "SurvivorStatusInterface.h"
#include "K28PlayerComponent.h"
#include "DBDTunableRowHandle.h"
#include "K28SurvivorComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28SurvivorComponent : public UK28PlayerComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerBlackMaterialDarknessEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerInRangeChanged(const bool inRange);

public:
	UK28SurvivorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28SurvivorComponent) { return 0; }
