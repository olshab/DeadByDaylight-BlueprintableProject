#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryFragmentSpawnData.generated.h"

class ACoreMemoryFragment;

USTRUCT(BlueprintType)
struct FCoreMemoryFragmentSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACoreMemoryFragment> FragmentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TriggerZoneRadiusDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnDistanceFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnDistanceFromOtherFragments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightDistance;

public:
	COREMEMORY_API FCoreMemoryFragmentSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FCoreMemoryFragmentSpawnData) { return 0; }
