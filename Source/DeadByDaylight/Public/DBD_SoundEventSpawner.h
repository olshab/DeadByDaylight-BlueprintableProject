#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBD_SoundSpawnerData.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "DBD_SoundEventSpawner.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBD_SoundEventSpawner : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBD_SoundSpawnerData> AtlantaSoundDescriptor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBD_SoundSpawnerData> SoundDescriptor;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<TSubclassOf<AActor>> _loadedSoundAssets;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

	UFUNCTION(BlueprintCallable)
	void AssetsLoaded();

public:
	ADBD_SoundEventSpawner();
};

FORCEINLINE uint32 GetTypeHash(const ADBD_SoundEventSpawner) { return 0; }
