#pragma once

#include "CoreMinimal.h"
#include "ChargeableProgressSource.h"
#include "Components/ActorComponent.h"
#include "BlueprintAudioEvent.h"
#include "ESkillCheckCustomType.h"
#include "WiggleComponent.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class UInputComponent;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleComponent : public UActorComponent, public IChargeableProgressSource
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBlueprintAudioEvent OnFailSkillCheckAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBlueprintAudioEvent OnMissSkillCheckAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AUDIO_EVENT_SKILL_CHECK_WARNING;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AUDIO_EVENT_SKILL_CHECK_GOOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AUDIO_EVENT_SKILL_CHECK_GREAT;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _wiggleProgress;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ASlasherPlayer> _killerWigglingFrom;

	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UInputComponent> _inputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _wiggleInputLockTime;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_OnWiggleEnd();

	UFUNCTION(BlueprintCallable)
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnWiggleInput();

	UFUNCTION(BlueprintCallable)
	void OnWiggleEnd();

	UFUNCTION(BlueprintCallable)
	void OnPlayerPickedUpStart(ADBDPlayer* picker);

	UFUNCTION(BlueprintCallable)
	void OnPlayerPickedUpEnd(ADBDPlayer* picker);

	UFUNCTION(BlueprintCallable)
	void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnKeyBindingsChanged();

	UFUNCTION(BlueprintCallable)
	void OnHideWiggleSkillCheck(ESkillCheckCustomType type);

public:
	UFUNCTION(BlueprintPure)
	UChargeableComponent* GetWiggleChargeable() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetWiggleProgress(const float progressPercent) const;

	UFUNCTION(BlueprintCallable)
	void Authority_TutorialEndWiggle();

	UFUNCTION(BlueprintCallable)
	void Authority_AddWiggleCharge(float chargeAmount);

public:
	UWiggleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleComponent) { return 0; }
