#pragma once

#include "CoreMinimal.h"
#include "ChargedAttackStateComponent.h"
#include "OnChargedAttackReadyChanged.h"
#include "OniDemonModeAttackStateComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOniDemonModeAttackStateComponent : public UChargedAttackStateComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnChargedAttackReadyChanged OnChargedAttackReadyChanged;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ClearChargingState();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ClearChargingState();

public:
	UOniDemonModeAttackStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonModeAttackStateComponent) { return 0; }
