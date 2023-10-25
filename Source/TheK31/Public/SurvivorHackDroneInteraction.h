#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "EDirectionalMinigameResult.h"
#include "SurvivorHackDroneInteraction.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API USurvivorHackDroneInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectionalMiniGameDefinition _miniGameDefinition;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isHackingComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _batteryStartingChargePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _playerSnapSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maximumTimeToAttemptDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _switchToScoutingModeDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnMinigameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorHackDroneInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHackDroneInteraction) { return 0; }
