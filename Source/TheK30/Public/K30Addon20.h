#pragma once

#include "CoreMinimal.h"
#include "EGuardHuntEndReason.h"
#include "GameEventData.h"
#include "K30BaseStatusEffectAddon.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "K30Addon20.generated.h"

class AWindow;
class UStatusEffect;
class ADBDPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30Addon20 : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AWindow*> _blockedWindows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _huntedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _gateBlockerEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _trailPassThroughWindowBlockTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, UStatusEffect*> _playerGateBlockerStatusEffects;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTrailCameraGoThroughWindow(AWindow* window);

	UFUNCTION(BlueprintCallable)
	void Authority_OnStartHunt(ADBDPlayer* player);

	UFUNCTION()
	void Authority_OnHuntedSurvivorVault(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnEndHunt(ADBDPlayer* player, EGuardHuntEndReason huntEndReason);

public:
	UK30Addon20();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon20) { return 0; }
