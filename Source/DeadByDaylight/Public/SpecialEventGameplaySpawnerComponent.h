#pragma once

#include "CoreMinimal.h"
#include "GameplaySpawnerComponent.h"
#include "SpecialEventGameplaySpawnerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpecialEventGameplaySpawnerComponent : public UGameplaySpawnerComponent
{
	GENERATED_BODY()

public:
	USpecialEventGameplaySpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventGameplaySpawnerComponent) { return 0; }
