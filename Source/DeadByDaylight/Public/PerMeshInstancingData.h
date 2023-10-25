#pragma once

#include "CoreMinimal.h"
#include "PerMeshInstancingData.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPerMeshInstancingData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<uint32, UInstancedStaticMeshComponent*> gpuCulling_hashToInstancedMeshes;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<uint32, UInstancedStaticMeshComponent*> gpuCullingSwap_hashToInstancedMeshes;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<uint32, UInstancedStaticMeshComponent*> hism_hashToInstancedMeshes;

public:
	DEADBYDAYLIGHT_API FPerMeshInstancingData();
};

FORCEINLINE uint32 GetTypeHash(const FPerMeshInstancingData) { return 0; }
