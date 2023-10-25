#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StaticMeshAutoBatch.h"
#include "PerMeshInstancingData.h"
#include "BatchDrawing.generated.h"

class AActor;
class UHISMMaterialHelperSettings;
class UStaticMesh;
class UWorld;

UCLASS(Blueprintable)
class UBatchDrawing : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _actorToSpawnInstancesInto;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UStaticMesh*, FPerMeshInstancingData> _meshesToInstancingData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UHISMMaterialHelperSettings* _hismMaterialHelperSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UWorld* _currentWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FStaticMeshAutoBatch> _meshAutoBatch;

public:
	UBatchDrawing();
};

FORCEINLINE uint32 GetTypeHash(const UBatchDrawing) { return 0; }
