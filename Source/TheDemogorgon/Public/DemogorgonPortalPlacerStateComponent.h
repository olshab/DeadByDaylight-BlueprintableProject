#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PortalRestrictedLocation.h"
#include "DemogorgonPortalPlacerStateComponent.generated.h"

class ADemogorgonPortal;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEDEMOGORGON_API UDemogorgonPortalPlacerStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDemogorgonTeleportCooldownComplete);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnDemogorgonTeleportCooldownComplete OnTeleportCooldownComplete;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _remainingPortals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADemogorgonPortal*> _placedPortals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<FPortalRestrictedLocation> _restrictedPortalLocations;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateRemainingPortalCount();

public:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintPure)
	bool IsUsePortalCooldownDone() const;

private:
	UFUNCTION(BlueprintCallable)
	void InitializeTunableValues(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	float GetTeleportDuration() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingPortalCount() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDemogorgonPortalPlacerStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalPlacerStateComponent) { return 0; }
