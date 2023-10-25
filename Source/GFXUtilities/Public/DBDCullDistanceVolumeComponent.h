#pragma once

#include "CoreMinimal.h"
#include "DBDCullDistanceSizePair.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDCullDistanceVolumeComponent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDCullDistanceVolumeComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBDCullDistanceSizePair> CullDistances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector InfluenceBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Unbound;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _previewInfluenceBox;

public:
	UDBDCullDistanceVolumeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCullDistanceVolumeComponent) { return 0; }
