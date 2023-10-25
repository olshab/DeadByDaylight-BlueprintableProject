#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "OnPortalEffectsApplied.h"
#include "DemogorgonPortalRadiusDetectorComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class ADemogorgonPortal;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalRadiusDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPortalEffectsAppliedMultiDelegate);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADemogorgonPortal*> Portals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PlayersInsideRadius, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _playersInsideRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _portalContactEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _portalProximityHuntingCamperEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PlayersInsideRadius();

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CallOnPortalEffectsApplied(FOnPortalEffectsApplied callback);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDemogorgonPortalRadiusDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalRadiusDetectorComponent) { return 0; }
