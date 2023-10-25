#pragma once

#include "CoreMinimal.h"
#include "DBDReflectionCaptureSpawnerComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDBoxReflectionCaptureSpawnerComponent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDBoxReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector InfluenceBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoxTransitionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UBoxComponent* PreviewInfluenceBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UBoxComponent* PreviewCaptureBox;

public:
	UDBDBoxReflectionCaptureSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBoxReflectionCaptureSpawnerComponent) { return 0; }
