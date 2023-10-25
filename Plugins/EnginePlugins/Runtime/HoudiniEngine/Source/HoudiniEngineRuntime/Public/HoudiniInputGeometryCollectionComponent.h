#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniInputGeometryCollectionComponent.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UHoudiniInputGeometryCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputGeometryCollectionComponent) { return 0; }
