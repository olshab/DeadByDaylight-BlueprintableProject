#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "PlayersInZoneTracker.generated.h"

class AActor;
class UPrimitiveComponent;
class ADBDPlayer;
class USphereComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPlayersInZoneTracker : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCosmeticNeeded, ADBDPlayer*, player);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnPlayerEnterZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnPlayerExitZone;

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _tagsPreventingEnteringRange;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _tagsToAddToPlayerInZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _playerTracker;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_PlayersInRange)
	TArray<TWeakObjectPtr<ADBDPlayer>> _playersInRange;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PlayersInRange();

	UFUNCTION(BlueprintCallable)
	void Authority_OnEndPlayerOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnBeginPlayerOverlap(UPrimitiveComponent* overlappedComponent, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPlayersInZoneTracker();
};

FORCEINLINE uint32 GetTypeHash(const UPlayersInZoneTracker) { return 0; }
