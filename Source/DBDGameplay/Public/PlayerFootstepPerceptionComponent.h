#pragma once

#include "CoreMinimal.h"
#include "FootstepPerceptionComponent.h"
#include "GameplayTagContainer.h"
#include "PlayerFootstepPerceptionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPlayerFootstepPerceptionComponent : public UFootstepPerceptionComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _allowFootstepsSeenPerkFlags;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _disallowFootstepsSeenPerkFlags;

public:
	UPlayerFootstepPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerFootstepPerceptionComponent) { return 0; }
