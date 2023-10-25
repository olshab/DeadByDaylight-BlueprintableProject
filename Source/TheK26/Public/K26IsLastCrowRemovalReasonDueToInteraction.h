#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "K26IsLastCrowRemovalReasonDueToInteraction.generated.h"

class AK26AttachedCrow;
class ACamperPlayer;
class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK26IsLastCrowRemovalReasonDueToInteraction : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwningAttachedCrow, Transient, meta=(AllowPrivateAccess=true))
	AK26AttachedCrow* _owningAttachedCrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PowerStatusHandlerComponent* _statusHandlerComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorStatusIndicatorSet(AK26AttachedCrow* attachedCrow);

	UFUNCTION(BlueprintCallable)
	void OnRep_OwningAttachedCrow();

	UFUNCTION(BlueprintCallable)
	void OnLastRemovalReasonSet(FK26AttachedCrowRemovalReason lastCrowRemovalReason);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow);

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerSet(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26IsLastCrowRemovalReasonDueToInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK26IsLastCrowRemovalReasonDueToInteraction) { return 0; }
