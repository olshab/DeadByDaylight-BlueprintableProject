#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "HeadOn.generated.h"

class ADBDPlayer;
class UObject;
class UStatusEffect;
class AActor;
class ALocker;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHeadOn : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPerformingHeadOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ExhaustOnlyOnSuccessfulStun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StunKillersEnteringStunZone;

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _hideDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exhaustedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ALocker* _locker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _stunnableActorsInZone;

private:
	UFUNCTION(BlueprintCallable)
	void OnPawnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnPawnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void OnHeadOnAnimationComplete();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerStunOnActor(UObject* stunnableInterfaceUObject, ADBDPlayer* stunner);

public:
	UFUNCTION(BlueprintPure)
	float GetHideDuration() const;

	UFUNCTION(BlueprintPure)
	bool CanApplyHeadOnInteraction() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ActivatePerk();

public:
	UHeadOn();
};

FORCEINLINE uint32 GetTypeHash(const UHeadOn) { return 0; }
