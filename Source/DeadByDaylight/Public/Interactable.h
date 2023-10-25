#pragma once

#include "CoreMinimal.h"
#include "ObjectStateProvider.h"
#include "GameFramework/Actor.h"
#include "InteractionArray.h"
#include "EInputInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "Interactable.generated.h"

class UInterruptionDefinition;
class ADBDPlayer;
class UPrimitiveComponent;
class UInteractor;
class UGameplayTagContainerComponent;
class UInteractionDefinition;
class UInteractableTransformOptimizer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AInteractable : public AActor, public IObjectStateProvider
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPrimitiveComponent* _singleZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useSingleZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UInteractor*> _interactors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractableTransformOptimizer* _transformOptimizer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UPrimitiveComponent*, FInteractionArray> _zoneToInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _interactableObjectState;

protected:
	UFUNCTION(BlueprintCallable)
	void SetSingleZone(UPrimitiveComponent* zone);

public:
	UFUNCTION(BlueprintCallable)
	void SetInteractorsUsable(bool usable, UInteractor* exception);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PreInterruptionEvent(ADBDPlayer* interruptor, ADBDPlayer* interruptee, UInterruptionDefinition* interruption);

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay_Native();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLevelReadyToPlay();

private:
	UFUNCTION(BlueprintCallable)
	void OnInteractorLockChanged(bool locked, ADBDPlayer* interactingPlayer);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractor* interactor, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsInteractionDone(ADBDPlayer* player, const UInteractor* interactor, const UInteractionDefinition* definition, EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	bool IsInteractingWith(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool HasAnOngoingInteraction() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerOwner() const;

	UFUNCTION(BlueprintPure)
	UGameplayTagContainerComponent* GetObjectState() const;

	UFUNCTION(BlueprintPure)
	TArray<UInteractor*> GetInteractors() const;

	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> GetInteractingPlayersRaw() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetFocalPointPosition(const ADBDPlayer* player, const UInteractionDefinition* definition) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void AuthorityRequestCancelOngoingInteractions(bool onlyOnHitCancelableInteractions);

	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> Authority_GetInteractingPlayers() const;

	UFUNCTION(BlueprintCallable)
	void AttachEveryInteractionToZone(UPrimitiveComponent* zone);

public:
	AInteractable();
};

FORCEINLINE uint32 GetTypeHash(const AInteractable) { return 0; }
