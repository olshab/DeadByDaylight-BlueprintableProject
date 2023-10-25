#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "PowerChargeChangedDelegate.h"
#include "PowerChargeComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerChargeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPowerChargeChangedDelegate OnPowerChargeChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentCharge, Transient, meta=(AllowPrivateAccess=true))
	FSpeedBasedNetSyncedValue _currentCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _forceFullCharge;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentCharge();

	UFUNCTION(BlueprintCallable)
	void OnCurrentChargeChanged(float value);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPowerChargeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPowerChargeComponent) { return 0; }
