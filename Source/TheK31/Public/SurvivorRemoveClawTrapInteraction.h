#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "EDirectionalMinigameResult.h"
#include "SurvivorRemoveClawTrapInteraction.generated.h"

class UK31SurvivorClawTrapComponent;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API USurvivorRemoveClawTrapInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectionalMiniGameDefinition _miniGameDefinition;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isHackingComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK31SurvivorClawTrapComponent* _survivorClawTrapComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _batteryRechargeOnFailedRemovalPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _requiredTimeToRemainStillBeforeInteractingDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnMinigameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorRemoveClawTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorRemoveClawTrapInteraction) { return 0; }
