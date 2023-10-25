#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEndGameScenarioTrigger.h"
#include "EndGameStateComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEndGameStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsEndGameOver, meta=(AllowPrivateAccess=true))
	bool _isEndGameOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_WorldTimeAtLastDilationModification, meta=(AllowPrivateAccess=true))
	float _worldTimeAtLastModification;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TimeDilation, Transient, meta=(AllowPrivateAccess=true))
	float _timeDilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsTimerPaused, Transient, meta=(AllowPrivateAccess=true))
	bool _isTimerPaused;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	float _normalTotalTimeElapsedAtLastTimeModification;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	EEndGameScenarioTrigger _endGameScenarioTrigger;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_WorldTimeAtLastDilationModification();

	UFUNCTION(BlueprintCallable)
	void OnRep_TimeDilation();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsTimerPaused();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsEndGameOver();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_SetIsInEndGameSimulation(bool endGameSimulation);

public:
	UFUNCTION(BlueprintPure)
	bool IsTimerSlowedDown() const;

	UFUNCTION(BlueprintPure)
	bool IsEndGameOver() const;

	UFUNCTION(BlueprintPure)
	bool HasEndGameBegun() const;

	UFUNCTION(BlueprintPure)
	float GetElapsedTimePercent() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UEndGameStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEndGameStateComponent) { return 0; }
