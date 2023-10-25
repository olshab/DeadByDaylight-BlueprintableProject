#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K25SurvivorChainAttachmentData.h"
#include "K25SurvivorChainAttachmentComponent.generated.h"

class AK25Chain;
class UInteractionDefinition;
class AK25SurvivorChainAttachmentAnchor;
class UK25SurvivorChainRotationStrategy;
class UK25ChainAttachmentReplicationComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25SurvivorChainAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK25SurvivorChainAttachmentAnchor> _attachmentAnchorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FK25SurvivorChainAttachmentData> _survivorAnchorData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK25SurvivorChainRotationStrategy> _survivorChainRotationStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UInteractionDefinition>> _interruptableInteractionClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumNumberOfChainsAttached;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK25SurvivorChainAttachmentAnchor*> _chainAttachmentAnchors;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<AK25Chain>> _chainsAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_TriggerHitSurvivorInExitAreaSFX(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	AK25Chain* GetFirstChainToRelease() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerHitSurvivorInExitAreaSFX(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25SurvivorChainAttachmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainAttachmentComponent) { return 0; }
