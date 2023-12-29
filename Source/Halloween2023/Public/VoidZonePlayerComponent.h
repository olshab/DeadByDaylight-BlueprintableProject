#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "VoidZonePlayerComponent.generated.h"

class UInteractionDefinition;
class UStatusEffect;
class ULinkedTeleporterComponent;
class UPlayerEventDispatcher;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UVoidZonePlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _voidWorldStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULinkedTeleporterComponent* _lastVoidZoneTeleporterUsed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _voidWorldHauntInteractionStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPlayerEventDispatcher* _playerEventDispatcher;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTagsWaitForInteractionEndOnVoidClose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _owningPlayerInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnInteractionEnd();

public:
	UVoidZonePlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidZonePlayerComponent) { return 0; }
