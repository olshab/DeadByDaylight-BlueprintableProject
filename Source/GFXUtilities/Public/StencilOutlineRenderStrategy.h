#pragma once

#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "StencilOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;
class UMaterialInterface;

UCLASS(Blueprintable)
class GFXUTILITIES_API UStencilOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UMaterialInterface*> _replacementMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UBatchMeshCommands*> _translucentCopies;

public:
	UFUNCTION(BlueprintCallable)
	static void EnableCopyStencilToCustomStencil(bool enabled);

public:
	UStencilOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UStencilOutlineRenderStrategy) { return 0; }
