#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnInfo.h"
#include "DBDClientSyncer.generated.h"

class UPaperTileMap;

UCLASS(Blueprintable)
class ADBDClientSyncer : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FSpawnInfo> _actorsToSpawnLocally;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FSpawnInfo> _currentQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPaperTileMap* _tileMap;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SyncSeed(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SyncFinalLocallySpawnCount(int32 numLocal);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SyncActorToSpawnLocally(const TArray<FSpawnInfo>& spawnInfos, int32 startIndex);

public:
	ADBDClientSyncer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDClientSyncer) { return 0; }
