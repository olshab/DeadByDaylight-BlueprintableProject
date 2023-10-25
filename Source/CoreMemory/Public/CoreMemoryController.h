#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryController.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class ACoreMemoryPortal;
class UCoreMemoryBehaviourBase;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreMemoryBehaviourBase*> _behaviours;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACoreMemoryChallengePlayerSpecificController*> _playerSpecificControllers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _archiveSpecialBehaviourId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACoreMemoryPortal> _coreMemoryPortalClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CoreMemoryPortal, meta=(AllowPrivateAccess=true))
	ACoreMemoryPortal* _coreMemoryPortal;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CoreMemoryPortal();

	UFUNCTION(BlueprintCallable)
	void Authority_OnCharacterAdded(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void Authority_CreatePlayerSpecificController(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCoreMemoryController();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryController) { return 0; }
