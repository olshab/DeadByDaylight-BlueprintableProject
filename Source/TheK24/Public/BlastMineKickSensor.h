#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BlastMineKickSensor.generated.h"

class UChargeableComponent;
class ASlasherPlayer;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK24_API UBlastMineKickSensor : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange _kickChargeTriggerRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _kickingKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _kickGeneratorChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _generator;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnKickChargeablePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UBlastMineKickSensor();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineKickSensor) { return 0; }
