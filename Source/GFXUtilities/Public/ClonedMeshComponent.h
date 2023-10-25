#pragma once

#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "ClonedMeshComponent.generated.h"

class UMeshComponent;
class USceneComponent;

UCLASS(Blueprintable, Transient, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClonedMeshComponent : public UBatchMeshCommands
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<USceneComponent*, UMeshComponent*> _originalToClone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<UMeshComponent*, USceneComponent*> _cloneToOriginal;

public:
	UClonedMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UClonedMeshComponent) { return 0; }
