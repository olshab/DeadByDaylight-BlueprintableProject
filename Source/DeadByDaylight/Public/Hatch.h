#pragma once

#include "CoreMinimal.h"
#include "EHatchState.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "Hatch.generated.h"

class UPrimitiveComponent;
class UAnimationMontageSlave;
class USceneComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AHatch : public AInteractable, public INoiseIndicatorEmitterInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HatchState, meta=(AllowPrivateAccess=true))
	EHatchState _hatchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isEndGameOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isForceOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _attemptToCloseHatchOnNextEscape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _baseCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _hatchOpenDuration;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_HatchState(EHatchState oldState);

	UFUNCTION(BlueprintCallable)
	void OnHatchStateUnhidden();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHatchStateModified(EHatchState oldState, EHatchState newState);

public:
	UFUNCTION(BlueprintPure)
	bool IsOpen() const;

	UFUNCTION(BlueprintPure)
	EHatchState GetHatchState() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USceneComponent* GetHatchCenter() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USceneComponent* GetEscapeFocalPoint() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAnimationMontageSlave* GetAnimationMontageSlave() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FXOpenHatch();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FXEndSmoke();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FXCloseHatch();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsForceOpen(bool isForcedOpen);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetHatchState(EHatchState newState);

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ResetTimer(float duration);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorsLeftChanged(int32 survivorRemaining);

	UFUNCTION(BlueprintCallable)
	void Authority_OnHatchVisibilityChanged(bool isVisible);

	UFUNCTION()
	void Authority_OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCloseTimerComplete();

	UFUNCTION(BlueprintCallable)
	void Authority_CheckedOpenHatch();

	UFUNCTION(BlueprintCallable)
	void Authority_CheckedOpenForceClosedHatch();

	UFUNCTION(BlueprintCallable)
	void Authority_CheckedCloseHatch();

	UFUNCTION(BlueprintCallable)
	void Authority_CheckedChangeActiveState();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AHatch();
};

FORCEINLINE uint32 GetTypeHash(const AHatch) { return 0; }
