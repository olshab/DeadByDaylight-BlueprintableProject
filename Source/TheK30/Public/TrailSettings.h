#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "TrailSettings.generated.h"

class ATrailNode;

USTRUCT(BlueprintType)
struct FTrailSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle MaximumDistanceBetweenNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle MinimumDistanceBetweenVisualNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ATrailNode> _trailNodeClass;

public:
	THEK30_API FTrailSettings();
};

FORCEINLINE uint32 GetTypeHash(const FTrailSettings) { return 0; }
