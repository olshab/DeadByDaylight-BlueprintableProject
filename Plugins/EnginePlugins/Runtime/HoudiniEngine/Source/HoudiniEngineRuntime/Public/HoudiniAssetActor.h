#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniAssetComponent* HoudiniAssetComponent;

public:
	AHoudiniAssetActor();
};

FORCEINLINE uint32 GetTypeHash(const AHoudiniAssetActor) { return 0; }
