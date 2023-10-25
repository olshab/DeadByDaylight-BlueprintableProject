#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DBDLocatorComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDLocatorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UDBDLocatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDLocatorComponent) { return 0; }
