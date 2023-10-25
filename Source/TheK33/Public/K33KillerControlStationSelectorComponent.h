#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "K33KillerControlStationSelectorComponent.generated.h"

class UK33TunnelNavigationComponent;
class UAimDirectionProvider;
class ADBDActorIndicator;
class AK33ControlStation;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33KillerControlStationSelectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _thresholdDeltaSquaredDistanceForBestTargetRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDeltaDotProductForBestTargetRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDotProductForEligibleControlStationTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDistanceForEligibleControlStationTargetOutsideTunnel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ADBDActorIndicator> _actorIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UK33TunnelNavigationComponent> _tunnelNavigationComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDActorIndicator* _indicatorInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK33TunnelNavigationComponent* _tunnelNavigationComponentInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Replicated_SelectedControlStation, meta=(AllowPrivateAccess=true))
	AK33ControlStation* _replicated_selectedControlStation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAimDirectionProvider* _aimDirectionProvider;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetSelectedControlStation(AK33ControlStation* controlStation);

	UFUNCTION(BlueprintCallable)
	void OnRep_Replicated_SelectedControlStation(AK33ControlStation* previousSelectedControlStation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33KillerControlStationSelectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33KillerControlStationSelectorComponent) { return 0; }
