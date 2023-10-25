#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputLandscape.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CachedNumLandscapeComponents;

public:
	UHoudiniInputLandscape();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputLandscape) { return 0; }
