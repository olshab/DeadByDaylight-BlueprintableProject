#pragma once

#include "CoreMinimal.h"
#include "DBDPlayer.h"
#include "FastTimer.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "FirecrackerEffectData.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ConjoinedTwin.generated.h"

class UHitValidatorComponent;
class UDBDAttackerComponent;
class UTwinOutlineUpdateStrategy;
class UCustomizedAudioComponent;
class UHitValidatorConfigurator;
class UBlindFlashlightTargetFXComponent;
class URangeToActorsTrackerComponent;
class UKillerBlindingFXComponent;
class UAkComponent;
class UAnimationMontageSlave;
class UStatusEffect;
class UTwinFirstPersonViewComponent;
class UFlashlightableComponent;
class UTwinPossessNegationEffectComponent;
class UFirecrackerEffectHandlerComponent;

UCLASS(Blueprintable)
class THETWINS_API AConjoinedTwin : public ADBDPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	URangeToActorsTrackerComponent* _restrictedPossessionAreaTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTwinOutlineUpdateStrategy* _twinOutlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _twinLullabyAudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UKillerBlindingFXComponent* _twinBlindingFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TwinNoiseRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCustomizedAudioComponent* _customizedAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAttackerComponent* _attackerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHitValidatorComponent* _hitValidator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHitValidatorConfigurator* _hitValidationConfigurator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _gravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _revealDurationOnAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTwinFirstPersonViewComponent* _firstPersonViewComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFlashlightableComponent* _eyesFlashlightable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlindFlashlightTargetFXComponent* _blindFlashlightTargetFXComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _flashlightBlindEvasionScoreTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flashlightEvasionScoreCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hideFootstepsEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _twinsBloodhoundEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _twinsRevealKillerAuraEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _twinsDormantKillerInstinctEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _twinsRevealAuraOnAttachedToSurvivorEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _twinsRevealAuraOnRecallReadyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timeDeafenedOnTriggerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTwinPossessNegationEffectComponent* _twinPossessNegationEffectComponent;

public:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SendAttackInput(bool pressed);

private:
	UFUNCTION()
	void OnFinishedPlayingEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);

	UFUNCTION(BlueprintCallable)
	void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);

public:
	AConjoinedTwin();
};

FORCEINLINE uint32 GetTypeHash(const AConjoinedTwin) { return 0; }
