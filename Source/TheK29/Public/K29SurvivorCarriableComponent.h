#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "K29SurvivorCarriableComponent.generated.h"

class ACamperPlayer;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29SurvivorCarriableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rootJointName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FRotator _startingRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _startingPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isCarriedByK29Rush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _killerIngoreTime;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_OwningSurvivor)
	TWeakObjectPtr<ACamperPlayer> _owningSurvivor;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_OwningSurvivor();

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable)
	bool IsBeingCarriedByK29RushOrMarkedForThrow();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK29SurvivorCarriableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorCarriableComponent) { return 0; }
