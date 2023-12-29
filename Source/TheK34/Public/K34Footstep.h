#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K34FootstepVisibilityRaycastDefinition.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "TunableStat.h"
#include "EK34Foot.h"
#include "UObject/NoExportTypes.h"
#include "K34Footstep.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable)
class THEK34_API AK34Footstep : public AActor, public IPoolableActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	EK34Foot _currentFootType;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _footstepLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _footstepMaximumVisibilityDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	AActor* _owningActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FK34FootstepVisibilityRaycastDefinition> _visibilityRaycastProperties;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsActive();

public:
	UFUNCTION(BlueprintPure)
	FVector GetOwningActorsVelocity() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFootstepVisibility(EK34Foot footType, bool isVisible);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK34Footstep();
};

FORCEINLINE uint32 GetTypeHash(const AK34Footstep) { return 0; }
