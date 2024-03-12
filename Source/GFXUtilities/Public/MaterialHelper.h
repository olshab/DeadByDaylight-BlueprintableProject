#pragma once

#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "MaterialHelper.generated.h"

class USceneComponent;
class UMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMaterialHelper : public UBatchMeshCommands
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void SetSceneComponentVisibility(USceneComponent* inSceneComponent, const bool newVisibility, const bool propagateToChildren);

	UFUNCTION(BlueprintCallable)
	void RefreshMeshes();

	UFUNCTION(BlueprintCallable)
	void RefreshMesh(UMeshComponent* mc);

public:
	UMaterialHelper();
};

FORCEINLINE uint32 GetTypeHash(const UMaterialHelper) { return 0; }
