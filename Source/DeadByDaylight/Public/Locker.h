#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDGenericTeamAgentInterface.h"
#include "GameplayTagContainer.h"
#include "ECamperDamageState.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Locker.generated.h"

class UChildActorComponent;
class UAnimationMontageSlave;
class UBoxComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class UAIPerceptionStimuliSourceComponent;
class UMontagePlayer;
class UInteractor;
class UInteractionDefinition;
class ULockerAnimInstance;
class ABaseLockerItem;
class ACamperPlayer;
class AActor;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ALocker : public AInteractable, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInLockerChanged, ADBDPlayer*, playerWhoWasInLocker, ADBDPlayer*, playerNowInLocker);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInLockerChanged OnPlayerInLockerChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FastDoorActivationAudibleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NormalDoorActivationAudibleRange;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UBoxComponent* _boxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _playerOpeningLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _playerInLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _mainInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _frontInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _searchEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _searchPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChildActorComponent* _killerInteractionActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _enterSneak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _camperSocket;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULockerAnimInstance* _lockerAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _interactionExitClosetSemantics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PreventAllInteractions, Transient, meta=(AllowPrivateAccess=true))
	bool _preventAllInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _local_preventAllInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ABaseLockerItem* _spawnedLockerItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StopMinNearOutlineDistLerp(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartMinNearOutlineDistLerp(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void SetSurvivorInLocker(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void SetPlayerOpeningLocker(ADBDPlayer* player);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetPlayerInLockerVisibility(const bool isVisible) const;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorHealthChanged(ECamperDamageState before, ECamperDamageState after);

	UFUNCTION(BlueprintCallable)
	void OnSurvivorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

	UFUNCTION(BlueprintCallable)
	void OnRep_PreventAllInteractions();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_EjectSurvivor();

	UFUNCTION(BlueprintPure)
	bool IsOccupied() const;

	UFUNCTION(BlueprintPure)
	bool IsFacingLocker(const ADBDPlayer* player, float toleranceDegreeAngle) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetSurvivorInLocker() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UPrimitiveComponent* GetStunZone() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerInLocker() const;

	UFUNCTION(BlueprintPure)
	FVector GetPlayerInClosetLocation();

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetMesh() const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetLockerHideEnterSneakInteraction() const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetInteractor() const;

	UFUNCTION(BlueprintPure)
	AActor* GetChildInteractionActor() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EjectSurvivor();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ReportOpenLockerNoiseEventToAI(const bool fastActivation);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EnableOtherInteractors(const UInteractor* usableInteractor, bool usable);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ALocker();
};

FORCEINLINE uint32 GetTypeHash(const ALocker) { return 0; }
