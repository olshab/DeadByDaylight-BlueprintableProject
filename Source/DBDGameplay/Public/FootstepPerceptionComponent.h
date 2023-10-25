#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FootstepPerceptionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFootstepPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canSeeFootstepsDefaultValue;

public:
	UFootstepPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootstepPerceptionComponent) { return 0; }
