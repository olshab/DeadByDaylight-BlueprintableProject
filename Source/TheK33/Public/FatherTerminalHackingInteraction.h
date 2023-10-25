#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "InteractionDefinition.h"
#include "EDirectionalMinigameResult.h"
#include "FatherTerminalHackingInteraction.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFatherTerminalHackingInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWormholeTerminalHackingInteractionStarted);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWormholeTerminalHackingCooldownTimerStartOrDone, bool, isRunning);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnWormholeTerminalHackingCooldownTimerStartOrDone Cosmetic_OnCooldownTimerStartOrDoneEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnWormholeTerminalHackingInteractionStarted Cosmetic_OnInteractionStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted Cosmetic_OnSuccessfullyEndMiniGameAnimationStarted;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectionalMiniGameDefinition _miniGameDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cooldownDurationSeconds;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isHackingCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsCooldownTimerRunning, meta=(AllowPrivateAccess=true))
	bool _isCooldownTimerRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _useSuccessfullyEndMiniGameExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _successfullyEndMiniGameAnimationMontageDescriptor;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsCooldownTimerRunning();

	UFUNCTION(BlueprintCallable)
	void Authority_OnMiniGameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCooldownTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFatherTerminalHackingInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UFatherTerminalHackingInteraction) { return 0; }
