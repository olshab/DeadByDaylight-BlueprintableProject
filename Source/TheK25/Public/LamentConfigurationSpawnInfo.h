#pragma once

#include "CoreMinimal.h"
#include "LamentConfigurationSpawnInfo.generated.h"

class UTileSpawnPoint;

USTRUCT(BlueprintType)
struct FLamentConfigurationSpawnInfo
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTileSpawnPoint* _spawnPoint;

public:
	THEK25_API FLamentConfigurationSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationSpawnInfo) { return 0; }
