#pragma once

#include "CoreMinimal.h"
#include "MaterialHelperOriginalMeshState.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialHelperOriginalMeshState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMaterialInterface*> _originalMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMaterialInterface*> _originalDynamicMaterials;

public:
	GFXUTILITIES_API FMaterialHelperOriginalMeshState();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialHelperOriginalMeshState) { return 0; }
