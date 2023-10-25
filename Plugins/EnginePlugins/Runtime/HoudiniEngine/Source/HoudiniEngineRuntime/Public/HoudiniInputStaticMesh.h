#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputStaticMesh.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputStaticMesh : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UHoudiniInputStaticMesh();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputStaticMesh) { return 0; }
