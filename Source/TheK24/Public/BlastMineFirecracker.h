#pragma once

#include "CoreMinimal.h"
#include "Firecracker.h"
#include "EBlastMineRemovedReason.h"
#include "BlastMineFirecracker.generated.h"

class AGenerator;
class USimpleStateMachine;
class UBlastMineVisibilityController;
class UBlastMineKickSensor;

UCLASS(Blueprintable)
class THEK24_API ABlastMineFirecracker : public AFirecracker
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrapRemovedBlueprintEvent, EBlastMineRemovedReason, removedReason);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTrapRemovedBlueprintEvent OnTrapRemovedBlueprintEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _trappedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USimpleStateMachine* _stateMachine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBlastMineKickSensor* _kickSensor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBlastMineVisibilityController* _visibilityController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Lifetime, meta=(AllowPrivateAccess=true))
	float _lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AuthorityExplosionCount, meta=(AllowPrivateAccess=true))
	int32 _authority_ExplosionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AuthorityCurrentState, meta=(AllowPrivateAccess=true))
	FName _authority_CurrentState;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Lifetime();

	UFUNCTION(BlueprintCallable)
	void OnRep_AuthorityExplosionCount();

	UFUNCTION(BlueprintCallable)
	void OnRep_AuthorityCurrentState();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABlastMineFirecracker();
};

FORCEINLINE uint32 GetTypeHash(const ABlastMineFirecracker) { return 0; }
