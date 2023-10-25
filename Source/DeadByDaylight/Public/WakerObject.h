#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "WakerObject.generated.h"

class UPrimitiveComponent;
class ADBDPlayer;
class USkeletalMeshComponent;
class UCamperDreamworldComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AWakerObject : public AInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LinkedCamperChanged, Transient, Export, meta=(AllowPrivateAccess=true))
	UCamperDreamworldComponent* _linkedCamperDreamworldComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool IsInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _chargeComplete;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisibilityAndOutline();

public:
	UFUNCTION(BlueprintCallable)
	void SetChargeComplete(bool complete);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_LinkedCamperChanged(UCamperDreamworldComponent* previous);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnNewLinkedCamper(UCamperDreamworldComponent* dreamworldComponent);

protected:
	UFUNCTION(BlueprintCallable)
	void OnLinkedCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged);

	UFUNCTION(BlueprintCallable)
	void OnAnyCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged);

public:
	UFUNCTION(BlueprintCallable)
	void LinkCampersOnLevelReadyToPlay();

	UFUNCTION(BlueprintPure)
	bool IsLinkedToCamper(const ADBDPlayer* camper) const;

	UFUNCTION(BlueprintPure)
	bool HasLinkedCamper() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USkeletalMeshComponent* GetMesh() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInteracting() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetInteractionPercentComplete() const;

	UFUNCTION(BlueprintPure)
	bool GetChargeComplete() const;

	UFUNCTION(BlueprintPure)
	bool CanWakeUpCamper(const ADBDPlayer* camper) const;

	UFUNCTION(BlueprintCallable)
	void BindToCamperDreamStateChanged(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWakerObject();
};

FORCEINLINE uint32 GetTypeHash(const AWakerObject) { return 0; }
