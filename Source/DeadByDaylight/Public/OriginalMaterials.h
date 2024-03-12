#pragma once

#include "CoreMinimal.h"
#include "OriginalMaterials.generated.h"

class UMeshComponent;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FOriginalMaterials
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<int32> OriginalMaterialIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMaterialInterface*> OriginalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UMeshComponent* MeshWithChangedMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float OcclusionRefreshInterval;

public:
	DEADBYDAYLIGHT_API FOriginalMaterials();
};

FORCEINLINE uint32 GetTypeHash(const FOriginalMaterials) { return 0; }
