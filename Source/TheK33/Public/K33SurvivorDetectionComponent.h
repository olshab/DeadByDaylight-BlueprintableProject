#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "K33SurvivorDetectionComponent.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33SurvivorDetectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _detectionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorStatusEffect;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SurvivorsInRange)
	TArray<TWeakObjectPtr<ACamperPlayer>> _survivorsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bufferTimeBeforeActivatingSurvivorDetection;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorsInRange();

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorInRangeChanged(const bool inRange, ACamperPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33SurvivorDetectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33SurvivorDetectionComponent) { return 0; }
