#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "LoudNoiseEventSystem.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULoudNoiseEventSystem : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _requiredPlayerStateTags;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _preventativePlayerStateTags;

public:
	ULoudNoiseEventSystem();
};

FORCEINLINE uint32 GetTypeHash(const ULoudNoiseEventSystem) { return 0; }
