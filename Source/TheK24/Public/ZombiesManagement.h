#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ZombiesManagement.generated.h"

class UZombiesPatrolAreaManager;
class AZombieEscapeDoorPointsActor;
class AZombieCharacter;
class UAuthoritativeActorPoolComponent;

UCLASS(Blueprintable)
class AZombiesManagement : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _zombiePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UZombiesPatrolAreaManager* _zombiesPatrolAreaManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AZombieCharacter*> _spawnedZombiesArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _firstZombieSpawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _numberOfZombieToSpawnAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AZombieEscapeDoorPointsActor*> _zombieEscapeDoorPoints;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroComplete();

public:
	AZombiesManagement();
};

FORCEINLINE uint32 GetTypeHash(const AZombiesManagement) { return 0; }
