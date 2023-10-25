#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ZombieResurrector.generated.h"

class AZombieCharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UZombieResurrector : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerLevelToSpawnZombie;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AZombieCharacter*> _delayedSpawnZombies;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerPowerLevelChanged(int32 powerLevel);

public:
	UZombieResurrector();
};

FORCEINLINE uint32 GetTypeHash(const UZombieResurrector) { return 0; }
