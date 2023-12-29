#pragma once

#include "CoreMinimal.h"
#include "BaseActorAttackableComponent.h"
#include "SnowmanAttackableComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanAttackableComponent : public UBaseActorAttackableComponent
{
	GENERATED_BODY()

public:
	USnowmanAttackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanAttackableComponent) { return 0; }
