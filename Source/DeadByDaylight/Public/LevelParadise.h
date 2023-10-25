#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParadiseData.h"
#include "LevelParadise.generated.h"

class ADBDPlayer;
class USceneComponent;

UCLASS(Blueprintable)
class ALevelParadise : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoopStartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoopDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USceneComponent* MainPlayerSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> OtherSurvivorSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> ParadiseTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ParadiseViewTarget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _spawnedMainPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _runnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fadeOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fadeInDuration;

public:
	UFUNCTION(BlueprintCallable)
	void ParadiseEntered(const FParadiseData& playerData);

private:
	UFUNCTION(BlueprintCallable)
	void OnInterpolationDone();

public:
	ALevelParadise();
};

FORCEINLINE uint32 GetTypeHash(const ALevelParadise) { return 0; }
