#pragma once

#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "TickInEditorSkeletalMesh.generated.h"

UCLASS(Blueprintable)
class ATickInEditorSkeletalMesh : public ASkeletalMeshActor
{
	GENERATED_BODY()

public:
	ATickInEditorSkeletalMesh();
};

FORCEINLINE uint32 GetTypeHash(const ATickInEditorSkeletalMesh) { return 0; }
