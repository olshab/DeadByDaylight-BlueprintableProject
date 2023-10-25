#pragma once

#include "CoreMinimal.h"
#include "AIPointOfInterestTargetInterface.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "EscapeDoor.generated.h"

class ACamperPlayer;
class UChargeableComponent;
class UBlockableComponent;
class ADBDPlayer;
class USceneComponent;
class UObject;
class UAkComponent;
class UEscapeDoorAnimInstance;
class USpotLightComponent;
class UAIPerceptionStimuliSourceComponent;
class AActor;
class UChargeableInteractionDefinition;
class UBoxComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AEscapeDoor : public AInteractable, public IAIPointOfInterestTargetInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> EscapePositions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObject*> EscapeFire;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _killerOpenChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _openChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAkComponent* _ak_audio_escape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UEscapeDoorAnimInstance* _escapeDoorAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Activated)
	bool _activated;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USpotLightComponent* _spotlight;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<ACamperPlayer>> _localOverlappingSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlockableComponent* _doorSwitchBlockableComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsActivated(bool isActivated);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnUnblockDoorSwitchCosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Activated(bool oldActivated);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPlayerExitExitArea(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnPlayerEnterExitArea(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnExitOpenChanged(bool opened);

	UFUNCTION(BlueprintCallable)
	void OnExitGateOpened(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnExitActivationChanged(bool activated);

protected:
	UFUNCTION(BlueprintCallable)
	void OnEscapeZoneEndOverlap(AActor* overlappingActor);

	UFUNCTION(BlueprintCallable)
	void OnEscapeZoneBeginOverlap(AActor* overlappingActor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnBlockDoorSwitchCosmetic();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void LightAllLights();

	UFUNCTION(BlueprintPure)
	bool IsDoorSwitchBlocked() const;

	UFUNCTION(BlueprintPure)
	bool IsActivated() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	USceneComponent* GetSwitchSceneComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetParadiseServerLocation() const;

	UFUNCTION(BlueprintPure)
	float GetOpenTime() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetOpenEscapeInteraction();

	UFUNCTION(BlueprintPure)
	bool GetIsOpen() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UBoxComponent* GetExitArea() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	FVector GetEscapeSwitchFloorLocation() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	USkeletalMeshComponent* GetDoorSkeletalMeshComponent() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AEscapeDoor();
};

FORCEINLINE uint32 GetTypeHash(const AEscapeDoor) { return 0; }
