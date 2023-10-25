#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemogorgonPortalTargetingComponent.generated.h"

class ADemogorgonPortal;
class UDemogorgonPortalPlacerStateComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADemogorgonPortal* _targetedPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsPorting(bool isPorting);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetTargetedPortal(ADemogorgonPortal* targetedPortal);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_SetTargetedPortal(ADemogorgonPortal* targetedPortal);

public:
	UFUNCTION(BlueprintCallable)
	ADemogorgonPortal* GetTargetedPortal();

public:
	UDemogorgonPortalTargetingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalTargetingComponent) { return 0; }
