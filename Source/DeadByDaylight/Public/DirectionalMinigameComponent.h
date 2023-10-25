#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDirectionalInputKey.h"
#include "DirectionalMiniGameDefinition.h"
#include "DirectionalMinigameComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDirectionalMinigameComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _currentlyEngagedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	TArray<EDirectionalInputKey> _currentSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInProgress, meta=(AllowPrivateAccess=true))
	bool _isInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _currentKeyIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FDirectionalMiniGameDefinition _miniGameDefinition;

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_EnterKey(EDirectionalInputKey enteredKey);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_CancelMinigame();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInProgress();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_StartMinigameForSurvivor(ACamperPlayer* survivor, const FDirectionalMiniGameDefinition& miniGameDefinition);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDirectionalMinigameComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDirectionalMinigameComponent) { return 0; }
