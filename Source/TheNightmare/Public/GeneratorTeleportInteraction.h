#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorTeleportInteraction.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class UTimerObject;
class AGenerator;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENIGHTMARE_API UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OnBloodSpurtsAINoiseEventRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TeleportCooldownTimer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _teleportCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SelectedGenerator, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _selectedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _locallySelectedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FTransform _selectedTeleportLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInteractionOngoing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _teleportFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _noTeleportableGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _bloodSpurtInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCheckCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCheckCapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _collisionCheckLocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _capsuleTraceAngleIncrement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _generatorTeleportMaxAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _downRaycastLength;

protected:
	UFUNCTION(BlueprintCallable)
	void StopBloodSpurts();

	UFUNCTION(BlueprintCallable)
	void StartBloodSpurts();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowBloodSpurtsVFX();

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetSelectedGenerator(AGenerator* generator);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTeleportReady();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTeleportLocationChosen(AGenerator* generator, FTransform location);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTeleported(FTransform transformBeforeTeleport);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSelectedGeneratorSet(AGenerator* selectedGenerator);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TeleportCooldownTimer();

	UFUNCTION(BlueprintCallable)
	void OnRep_SelectedGenerator();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLocallySelectedGeneratorSet(AGenerator* selectedGenerator);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void OnBloodSpurts();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportPlayer(FVector location, FRotator rotation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTeleportLocationChosen(AGenerator* generator, FTransform location);

	UFUNCTION(BlueprintPure)
	bool IsTeleportAvailable() const;

private:
	UFUNCTION(BlueprintCallable)
	void InitializeTunableValues(ASlasherPlayer* killer);

	UFUNCTION(BlueprintPure)
	bool HasTeleportFailed() const;

protected:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

	UFUNCTION(BlueprintPure)
	AGenerator* GetInlineGenerator(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool CanTeleportAtGenerator(AGenerator* generator) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_TeleportPlayerToGenerator(ADBDPlayer* playerToTeleport, AGenerator* generator);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StartTeleportCooldown(bool teleported);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGeneratorTeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorTeleportInteraction) { return 0; }
