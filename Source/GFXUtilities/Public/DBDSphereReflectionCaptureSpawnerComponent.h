#pragma once

#include "CoreMinimal.h"
#include "DBDReflectionCaptureSpawnerComponent.h"
#include "DBDSphereReflectionCaptureSpawnerComponent.generated.h"

class UDrawSphereComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDSphereReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InfluenceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UDrawSphereComponent* PreviewInfluenceRadius;

public:
	UDBDSphereReflectionCaptureSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSphereReflectionCaptureSpawnerComponent) { return 0; }
