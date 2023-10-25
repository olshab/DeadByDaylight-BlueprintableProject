#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NavmeshGeneratorComponent.generated.h"

class ANavMeshBoundsVolume;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNavmeshGeneratorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ANavMeshBoundsVolume*> _availableNavmeshBoundsVolumes;

public:
	UNavmeshGeneratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNavmeshGeneratorComponent) { return 0; }
