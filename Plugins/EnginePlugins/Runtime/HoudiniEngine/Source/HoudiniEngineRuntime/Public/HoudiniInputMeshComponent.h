#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniInputMeshComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UStaticMesh> StaticMesh;

public:
	UHoudiniInputMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputMeshComponent) { return 0; }
