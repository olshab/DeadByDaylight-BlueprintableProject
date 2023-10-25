#pragma once

#include "CoreMinimal.h"
#include "CommentatorSpawnStrategy.h"
#include "Templates/SubclassOf.h"
#include "FreeSpotAroundLocationSpawnStrategy.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UFreeSpotAroundLocationSpawnStrategy : public UCommentatorSpawnStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minSpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxSpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _floorDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _collisionSphereRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _checkForEveryAngleDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _numberOfPositionToCheckInAnAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> _actorsToIgnore;

public:
	UFreeSpotAroundLocationSpawnStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UFreeSpotAroundLocationSpawnStrategy) { return 0; }
