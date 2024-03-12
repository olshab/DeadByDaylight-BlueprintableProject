#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "AuthoritativeActorPoolComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K35KillerTeleportPointPool.generated.h"

class AActor;
class ACamperPlayer;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35KillerTeleportPointPool : public UAuthoritativeActorPoolComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maxKillerTeleportPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _secondsCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _visibleAuraDistanceSurvivor;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerTeleportPointSpawned();

	UFUNCTION(BlueprintCallable)
	void OnKillerTeleportPointCreated(AActor* actor);

	UFUNCTION(BlueprintCallable)
	void OnKillerTeleportPointAcquiredChanged(const bool isAcquired);

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION()
	void Authority_OnSurvivorDamaged(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerTeleportCooldownComplete();

	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool isInRange, ACamperPlayer* survivor);

public:
	UK35KillerTeleportPointPool();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerTeleportPointPool) { return 0; }
