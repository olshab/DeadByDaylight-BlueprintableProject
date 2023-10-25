#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "TagStateBool.h"
#include "GameEventData.h"
#include "SteamPipeEffectComponent.generated.h"

class UStatusEffect;
class ASteamPipe;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USteamPipeEffectComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hinderedEffectClass;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTagsToIgnore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInActiveSteamPipeZone;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ASteamPipe> _overlappingSteamPipe;

private:
	UFUNCTION()
	void Authority_OnStoppedCrouching(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnHealthStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USteamPipeEffectComponent();
};

FORCEINLINE uint32 GetTypeHash(const USteamPipeEffectComponent) { return 0; }
