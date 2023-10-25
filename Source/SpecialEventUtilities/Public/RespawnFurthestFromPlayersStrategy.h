#pragma once

#include "CoreMinimal.h"
#include "RespawnableStrategy.h"
#include "RespawnFurthestFromPlayersStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnFurthestFromPlayersStrategy : public URespawnableStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCapsuleRadius;

public:
	URespawnFurthestFromPlayersStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URespawnFurthestFromPlayersStrategy) { return 0; }
